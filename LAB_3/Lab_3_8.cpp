#include <stdio.h>
float CommissionRate(int campaigns_salesCount);
struct Campaign {
    char name[50];
    float productPrice; 
    int salesCount;   
    float adsSpend;
};

int main() {
    int N, i;
    if (scanf("%d", &N) != 1 || N <= 0) { 
        return 1;
    }
    struct Campaign campaigns[N]; 

    for (i = 0; i < N; i++) {
        float commissionRate = 0.0;
        float totalRevenue;      
        float totalCommission;   
        float netProfitLoss;     

        if (scanf("%s %f %d %f",
            campaigns[i].name,      
            &campaigns[i].productPrice,
            &campaigns[i].salesCount,  
            &campaigns[i].adsSpend) != 4) {
            return 1;
        }
        totalRevenue = campaigns[i].salesCount * campaigns[i].productPrice; 
          int campaigns_salesCount = campaigns[i].salesCount ;
          commissionRate = CommissionRate(campaigns_salesCount);
        
        totalCommission = totalRevenue * commissionRate;
        netProfitLoss = totalCommission - campaigns[i].adsSpend;
        
        printf("---Campaign : %s ----\n", campaigns[i].name);
        printf("Sales: %d Ad Spend: %.2f\n", campaigns[i].salesCount, campaigns[i].adsSpend);
        printf("Rate Used : %.0f%%\n", commissionRate * 100);
        printf("Calculation : (%.2f * %.0f%%) - %.2f = %.2f\n", 
               totalRevenue, commissionRate * 100, campaigns[i].adsSpend, netProfitLoss);
        printf("Net Result : %.2f\n", netProfitLoss);
    }
    return 0;
}
float CommissionRate(int campaigns_salesCount){
    float commissionRate = 0.0;
     if (campaigns_salesCount >= 20) {
            commissionRate = 0.20;
        } else if (campaigns_salesCount >= 10) {
            commissionRate = 0.15;
        } else if (campaigns_salesCount < 10) {
            commissionRate = 0.10;
        }
    return commissionRate ;
}