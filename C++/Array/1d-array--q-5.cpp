#include<iostream>
using namespace std;
#define n 5
int main()
{
    int a[n],i,t;
    cout<<"Enter The Elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Before Sorting The array: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"After Sorting The array: ";
    for(int pass=0;pass<n;pass++)
    {
        for(i=pass+1;i<n;i++)
        if(a[pass] > a[i])
        {
            t = a[pass];
            a[pass] = a[i];
            a[i] = t;
        
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
return 0;  
}