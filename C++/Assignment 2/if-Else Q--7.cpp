#include<iostream>
using namespace std;
int main()
{
    float sub1,sub2,sub3;
    cout<<"Enter The First Subject Marks: ";
    cin>>sub1;
    cout<<"Enter The Second Subject Marks: ";
    cin>>sub2;
    cout<<"Enter The Third Subject Marks: ";
    cin>>sub3;
    float avg=(sub1 + sub2 + sub3)/(3);
    if(avg>=90 && avg<=100)
    {
        cout<<"Congratulation! You passed with 'A' Grade"<<endl;
        cout<<"Your Marks: "<<avg<<endl;
    }
    else if(avg>=80 && avg<=89)
    {
        cout<<"Congratulation! You passed with 'B' Grade"<<endl;
        cout<<"Your Marks: "<<avg<<endl;
    }
    else if(avg>=70 && avg<=79)
    {
        cout<<"Congratulation! You passed with 'C' Grade"<<endl;
        cout<<"Your Marks: "<<avg<<endl;
    }
    else if(avg>=60 && avg<=69)
    {
        cout<<"Congratulation! You passed with 'D' Grade"<<endl;
        cout<<"Your Marks: "<<avg<<endl;
    }
    else
    {
        cout<<"Sorry!!You Fail"<<endl;
        cout<<"Your Marks: "<<avg<<endl;
    }
    return 0;

}