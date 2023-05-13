#include<iostream>
using namespace std;
int main()
{
    float angle_1,angle_2,angle_3,sum;
    cout<<"Enter the Angle 1: ";
    cin>>angle_1;
    cout<<"Enter the Angle 2: ";
    cin>>angle_2;
    cout<<"Enter the Angle 3: ";
    cin>>angle_3;
    sum = angle_1 + angle_2 + angle_3;
    if(angle_1>0 && angle_2>0 && angle_3>0)
    {
        if(sum==180)
        {
            cout<<"Its a valid triangle"<<endl;
        }
        else
        {
            cout<<"Its not a triangle"<<endl;
        }
    }
    else
    {
        cout<<"Sorry!! the angles are not valid input"<<endl;
    }
return 0;
}