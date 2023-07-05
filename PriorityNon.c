#include<stdio.h>
#include<stdlib.h>

struct process{
	int id, wt, at, bt, tat, pr;
};

struct process a[10];

void swap(int *b, int *c){
	int item;
	item = *c;
	*c = *b;
	*b = item;
}

int main(){
	int n, check_ar = 0, i, j, min = 0, comp_time = 0;
	float total_wt = 0, total_tat = 0, avg_wt = 0, avg_tat = 0;
	
	printf("Enter the number of processes: ");
	scanf("%d", &n);
	
	printf("Enter the arrival time, burst time, and priority:\n");
	printf("AT\tBT\tPT\n");
	
	for(i = 0; i < n; i++){
		scanf("%d %d %d", &a[i].at, &a[i].bt, &a[i].pr);
		a[i].id = i + 1;
	}
	
	if(i == 0){
		check_ar = a[i].at;
	}
	
	if(check_ar != a[i].at){
		check_ar = 1;
	}
	
	if(check_ar != 0){
		for(i = 0; i < n; i++){
			for(j = 0; j < n - 1 - i; j++){
				if(a[j].at > a[j + 1].at){
					swap(&a[j].id, &a[j + 1].id);
					swap(&a[j].at, &a[j + 1].at);
					swap(&a[j].bt, &a[j + 1].bt);
					swap(&a[j].pr, &a[j + 1].pr);
				}
			}
		}
	}
	
	if(check_ar != 0){
		a[0].wt = a[0].at;
		a[0].tat = a[0].bt - a[0].at;
		comp_time = a[0].tat;
		total_wt = total_wt + a[0].wt;
		total_tat = total_tat + a[0].tat;
		
		for(i = 1; i < n; i++){
			min = a[i].pr;
			
			for(j = i + 1; j < n; j++){
				if(min > a[j].pr && a[j].at <= comp_time){
					min = a[j].pr;
					swap(&a[i].id, &a[j].id);
					swap(&a[i].at, &a[j].at);
					swap(&a[i].bt, &a[j].bt);
					swap(&a[i].pr, &a[j].pr);
				}
			}
			
			a[i].wt = comp_time - a[i].at;
			total_wt = total_wt + a[i].wt;
			comp_time = comp_time + a[i].bt;
			a[i].tat = comp_time - a[i].at;
			total_tat = total_tat + a[i].tat;
		}
	}
	else{
		for(i = 0; i < n; i++){
			min = a[i].pr;
			
			for(j = i + 1; j < n; j++){
				if(min > a[j].pr && a[j].at <= comp_time){
					min = a[j].pr;
					swap(&a[i].id, &a[j].id);
					swap(&a[i].at, &a[j].at);
					swap(&a[i].bt, &a[j].bt);
					swap(&a[i].pr, &a[j].pr);
				}
			}
			
			a[i].wt = comp_time - a[i].at;
			total_wt = total_wt + a[i].wt;
			comp_time = comp_time + a[i].bt;
			a[i].tat = comp_time - a[i].at;
			total_tat = total_tat + a[i].tat;
		}
	}
	
	avg_wt = total_wt / n;
	avg_tat = total_tat / n;
	
	printf("Average waiting time: %f\n", avg_wt);
	printf("Average turnaround time: %f\n", avg_tat);
 
	return 0;
}
Output
Enter the number of processes: 4
Enter the arrival time, burst time, and priority:
AT	BT	PT
0   5   3
1   2   4
2   2   1
3   6   2
Average waiting time: 4.750000
Average turnaround time: 8.500000
