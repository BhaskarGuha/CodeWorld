
#include<stdio.h>
#include<stdlib.h>

struct process{
    int wt, at, bt, tat, pt;
};

struct process a[10];

int main(){
    int n, i, t = 0, temp[10], count = 0, short_p;
    float total_wt = 0, total_tat = 0, avg_wt = 0, avg_tat = 0;
    
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    
    printf("Enter the arrival time, burst time, and priority time:\n");
    printf("AT\tBT\tPT\n");
    
    for(i = 0; i < n; i++){
        scanf("%d %d %d", &a[i].at, &a[i].bt, &a[i].pt);
        temp[i] = a[i].bt;
    }
    
    a[9].pt = 10000;
    
    for(t = 0; count != n; t++){
        short_p = 9;
        
        for(i = 0; i < n; i++){
            if(a[short_p].pt > a[i].pt && (a[i].at <= t && a[i].bt > 0))
                short_p = i;
        }
        
        a[short_p].bt = a[short_p].bt - 1;
        
        if(a[short_p].bt == 0){
            count++;
            a[short_p].wt = t + 1 - a[short_p].at - temp[short_p];
            a[short_p].tat = t + 1 - a[short_p].at;
            total_wt = total_wt + a[short_p].wt;
            total_tat = total_tat + a[short_p].tat;
        }
    }
    
    avg_wt = total_wt / n;
    avg_tat = total_tat / n;
    
    printf("Average waiting time: %f\n", avg_wt);
    printf("Average turnaround time: %f\n", avg_tat);
    
    return 0;
}

output 
Enter the number of processes: 3
Enter the arrival time, burst time, and priority time:
AT	BT	PT
0   3   3
1   5   1
2   2   2
Average waiting time: 3.666667
Average turnaround time: 7.000000

