#include<stdio.h>
#include<stdlib.h>

struct process{
    int id, wt, at, bt, tat;
};

struct process a[10];

void swap(int *b, int *c){
    int temp;
    temp = *c;
    *c = *b;
    *b = temp;
}

int main(){
    int n, check_ar = 0, i, j, min = 0, comp_time = 0;
    float total_wt = 0, total_tat = 0, avg_wt = 0, avg_tat = 0;
    
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    
    printf("Enter the arrival time and burst time:\n");
    printf("AT\tBT\n");
    
    for(i = 0; i < n; i++){
        scanf("%d %d", &a[i].at, &a[i].bt);
        a[i].id = i + 1;
    }
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n - 1 - i; j++){
            if(a[j].at > a[j + 1].at){
                swap(&a[j].id, &a[j + 1].id);
                swap(&a[j].at, &a[j + 1].at);
                swap(&a[j].bt, &a[j + 1].bt);
            }
        }
    }
    
    a[0].wt = 0;
    a[0].tat = a[0].bt - a[0].at;
    comp_time = a[0].bt;
    total_wt = a[0].wt;
    total_tat = a[0].tat;
    
    for(i = 1; i < n; i++){
        a[i].wt = comp_time - a[i].at;
        total_wt += a[i].wt;
        comp_time += a[i].bt;
        a[i].tat = comp_time - a[i].at;
        total_tat += a[i].tat;
    }
    
    avg_wt = total_wt / n;
    avg_tat = total_tat / n;
    
    printf("Average waiting time: %f\n", avg_wt);
    printf("Average turnaround time: %f\n", avg_tat);
 
    return 0;
}

ouput
Enter the number of processes: 4
Enter the arrival time and burst time:
AT	BT
0   2
2   3
2   4
3   3
Average waiting time: 2.250000
Average turnaround time: 5.250000

 
 
