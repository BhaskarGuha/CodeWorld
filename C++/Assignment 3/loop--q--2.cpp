#include<iostream>
using namespace std;
int main()
{
    int value,i,sum=0;
    cout<<"Enter Your Value: ";
    cin>>value;
    for(i=1;i<=value;i++)
    {
       sum += i;
        
    }
    cout<<sum;
    return 0;
}