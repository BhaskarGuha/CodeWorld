#include<stdio.h>
#include<stdlib.h>
struct process{
	int wt,at,bt,tat;
};
struct process a[10];
int main(){
	int n,i,t=0,temp[10],count=0,short_p;
	float total_wt=0,total_tat=0,avg_wt=0,avg_tat=0;
	printf("Enter the number of process:");
	scanf("%d",&n);
	printf("Enter the value of arrival time and burst time:");
	printf("\n AT \t BT\n");
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i].at, &a[i].bt);
		temp[i]=a[i].bt;
	}
	a[9].bt=10000;
	for(t=0;count!=n;t++){
		short_p=9;
		for(i=0;i<n;i++){
			if(a[i].bt<a[short_p].bt && (a[i].at<=t && a[i].bt>0))
			short_p=i;
		}
		a[short_p].bt=a[short_p].bt-1;
		if (a[short_p].bt==0){
			count++;
			a[short_p].wt=t+1-a[short_p].at-temp[short_p];
			a[short_p].tat=t+1-a[short_p].at;
		}
	}
	total_wt=total_wt+a[short_p].wt;
	total_tat=total_tat+a[short_p].tat;
 
avg_wt=total_wt/n;
avg_tat=total_tat/n;
printf("Average waiting time  %f:",avg_wt);
printf("Average turn around time  %f:",avg_tat);
}

ouput
Enter the number of process:3
Enter the value of arrival time and burst time:
 AT 	 BT
0
7
2
3
7
2
Average waiting time  1.666667:Average turn around time  4.000000:
 
