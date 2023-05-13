#include<iostream>
using namespace std;
int main()
{
    float cost,selling;
    cout<<"Enter The costing price:";
    cin>>cost;
    cout<<"Enter The selling price:";
    cin>>selling;
    if(selling>cost)
    {
        float price = selling - cost;
        cout<<"You made a profit"<<endl<<"Your profit: "<<price<<"Rs"<<endl;
    }
    else if(selling<cost)
    {
        float price = cost - selling;
        cout<<"You made a incurred loss"<<endl<<"Your loss: "<<price<<"Rs"<<endl;
    }
    else
    {
        cout<<"The seller has neither made a profit nor incurred a loss"<<endl;
    }
    return 0;
}