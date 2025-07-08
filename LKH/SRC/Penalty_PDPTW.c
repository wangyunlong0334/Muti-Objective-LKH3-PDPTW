#include "LKH.h"
#include "Segment.h"

GainType Penalty_PDPTW()
{
    static Node* StartRoute = 0;
    static int first_route_debugged = 0;
    static FILE* debug_fp = NULL;
    Node* N, * NextN, * CurrentRoute, * M, * NextM;
    GainType CostSum, DemandSum, P = 0;
    int Forward = SUCC(Depot)->Id != Depot->Id + DimensionSaved;
    int Pickups, Deliveries;
    if (!debug_fp) {
        debug_fp = fopen("Penalty_PDPTW_debug.txt", "w");
    }
    if (!StartRoute)
        StartRoute = Depot;
    if (StartRoute->Id > DimensionSaved)
        StartRoute -= DimensionSaved;
    N = StartRoute;
    do {
        CurrentRoute = N;
        Serial++;
        CostSum = DemandSum = 0;
        if (N->Earliest > 0)
            CostSum = N->Earliest;
        Pickups = Deliveries = 0;
        do {
            if (N->Id <= Dim && N != Depot) {
                DemandSum += N->Demand;
                if (DemandSum > Capacity)
                    P += DemandSum - Capacity;

                if (CostSum < N->Earliest)
                    CostSum = N->Earliest;

                if (CostSum > N->Latest)
                    P += CostSum - N->Latest;
                if (P > CurrentPenalty) {
                    StartRoute = CurrentRoute;
                    return P;
                }

                CostSum += N->ServiceTime;  
            }
            NextN = Forward ? SUCC(N) : PREDD(N);
            CostSum += C_TIME(N, NextN); 
            N = Forward ? SUCC(NextN) : PREDD(NextN);
        } while (N->DepotId == 0);
        if (CostSum > Depot->Latest) {
            P += CostSum - Depot->Latest;
            if (P > CurrentPenalty) {
                StartRoute = CurrentRoute;
                return P;
            }
        }
    } while (N != StartRoute);
    return P;
}