#include<iostream>
using namespace std;
int main()
{
    int a[2][2],i,j,sum=0;
    //initialize the array
    cout<<"Enter the elements: "<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    //print the array
    cout<<"Enter the elements: "<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
    //sum all elements
    cout<<"Sum of all elements: ";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            
            sum += a[i][j];

        }
        
    }
    cout<<sum<<endl;
    
    return 0;
}