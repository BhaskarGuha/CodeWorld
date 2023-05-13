#include<iostream>
using namespace std;
#define n 5
int main()
{
    int a[]={0,2,3,4,30},i;
    int max_value = a[0];
    int min_value = a[0];
    for(i=0;i<n;i++)
    {
        if(a[i] > max_value)
        {
            max_value = a[i];
            
            
        }
    }
    cout<<max_value<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i] < min_value)
        {
            
            min_value = a[i];
            
            
        }
    }
    cout<<min_value<<endl;
    
    return 0;

}