#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"Enter The Year: ";
    cin>>y;
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
            {
                cout<<"Leap Year";
            }
            else
            {
                cout<<"Not Leap Year";
            }
        }
        else
        {
            cout<<"Leap Year";
        }
    }
    else
    {
        cout<<"Not Leap Year";
    }
return 0;
}