#include<stdio.h>

int main()
{
    int i, NOP, sum=0, count=0, y, quant, wt=0, tat=0, at[10], bt[10], temp[10];
    float avg_wt, avg_tat;
    
    printf("Total number of processes in the system: ");
    scanf("%d", &NOP);
    y = NOP;

    for(i=0; i<NOP; i++)
    {
        printf("\nEnter the Arrival and Burst time of Process[%d]\n", i+1);
        printf("Arrival time: ");
        scanf("%d", &at[i]);
        printf("Burst time: ");
        scanf("%d", &bt[i]);
        temp[i] = bt[i];
    }

    printf("Enter the Time Quantum for the process: ");
    scanf("%d", &quant);

    printf("\nProcess No \tBurst Time \tTAT \t\tWaiting Time");
    
    for(sum=0, i=0; y!=0;)
    {
        if(temp[i] <= quant && temp[i] > 0)
        {
            sum = sum + temp[i];
            temp[i] = 0;
            count=1;
        }
        else if(temp[i] > 0)
        {
            temp[i] = temp[i] - quant;
            sum = sum + quant;
        }
        
        if(temp[i]==0 && count==1)
        {
            y--;
            printf("\nProcess No[%d] \t%d\t\t%d\t\t%d", i+1, bt[i], sum-at[i], sum-at[i]-bt[i]);
            wt = wt + sum - at[i] - bt[i];
            tat = tat + sum - at[i];
            count = 0;
        }
        
        if(i == NOP-1)
        {
            i = 0;
        }
        else if(at[i+1] <= sum)
        {
            i++;
        }
        else
        {
            i = 0;
        }
    }

    avg_wt = wt * 1.0 / NOP;
    avg_tat = tat * 1.0 / NOP;
    printf("\nAverage Turnaround Time: %f", avg_wt);
    printf("\nAverage Waiting Time: %f", avg_tat);
    
    return 0;
}
ouput

Total number of processes in the system: 4

Enter the Arrival and Burst time of Process[1]
Arrival time: 0
Burst time: 8

Enter the Arrival and Burst time of Process[2]
Arrival time: 1
Burst time: 5

Enter the Arrival and Burst time of Process[3]
Arrival time: 2
Burst time: 10

Enter the Arrival and Burst time of Process[4]
Arrival time: 3
Burst time: 11
Enter the Time Quantum for the process: 6

Process No 	Burst Time 	TAT 		Waiting Time
Process No[2] 	5		10		5
Process No[1] 	8		25		17
Process No[3] 	10		27		17
Process No[4] 	11		31		20
Average Turnaround Time: 14.750000
Average Waiting Time: 23.250000
