#include<iostream>
using namespace std;
void myfun(int p[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }

}

int main()
{
    int a[5],j;
    cout<<"Enter the element: ";
    for(j=0;j<5;j++)
    {
        cin>>a[j];

    }
    cout<<"Print the array"<<endl;
    myfun(a,5);
    return 0;
    
}