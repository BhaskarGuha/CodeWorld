#include<iostream>
using namespace std;
#define n 5
int main()
{
    int a[n],i;
    cout<<"Enter your elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
cout<<"Before reverse the array: "<<endl;
for(i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<endl;
    }
cout<<"After reverse the array: "<<endl;
for(i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
return 0;

}