#include<stdio.h>

int main(){
    int at[10], bt[10], wt[10], tt[10], n, burst = 0, compt = 0, i, total = 0;
    float avg_wt, avg_tt;
    
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    
    printf("Enter the arrival time and burst time:\n");
    printf("AT\tBT\n");
    
    for(i = 0; i < n; i++){
        scanf("%d %d", &at[i], &bt[i]);
    }
    
    for(i = 0; i < n; i++){
        if(i == 0){
            wt[i] = 0;
        }
        else{
            wt[i] = burst - at[i];
        }
        burst += bt[i];
        total += wt[i];
    }
    
    avg_wt = (float)total / n;
    printf("Average waiting time: %.2f\n", avg_wt);
    
    total = 0;
    
    for(i = 0; i < n; i++){
        compt += bt[i];
        tt[i] = compt - at[i];
        total += tt[i];
    }
    
    avg_tt = (float)total / n;
    printf("Average turnaround time: %.2f\n", avg_tt);
    
    return 0;
}
Enter the number of processes: 3
Enter the arrival time and burst time:
AT	BT
0   5
0   11
0   11
Average waiting time: 7.00
Average turnaround time: 16.00
