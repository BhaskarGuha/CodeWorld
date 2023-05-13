#include<iostream>
using namespace std;
int main()
{
    int days;
    cout<<"Enter the number: ";
    cin>>days;
    if(days==1)
    {
        cout<<"Its Monday";
    }
    else if(days==2)
    {
        cout<<"Its Tuesday";
    }
    else if(days==3)
    {
        cout<<"Its Wednesday";
    }
    else if(days==4)
    {
        cout<<"Its Thursday";
    }
    else if(days==5)
    {
        cout<<"Its Friday";
    }
    else if(days==6)
    {
        cout<<"Its Saturday";
    }
    else if(days==7)
    {
        cout<<"Its Sunday";
    }
    else
    {
        cout<<"Invaild Input";
    }
    return 0;
}