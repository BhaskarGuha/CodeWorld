#include<iostream>
using namespace std;
int main()
{
    int num_calls,bills;
    cout<<"Enter The Number Of Calls: ";
    cin>>num_calls;
    if(num_calls<=100)
    {
       bills=200;
       cout<<"Bill Is :"<<bills<<endl;         
    }
    else if(num_calls<=150)
    {
        bills=200+(num_calls-100)*0.6;
        cout<<"Bill Is: "<<bills<<endl;
    }
    else if(num_calls<=200)
    {
        bills=200+50*0.6+(num_calls-150)*0.5;
        cout<<"Bill Is: "<<bills<<endl;
    }
    else
    {
        bills=200+50*0.6+50*0.5+(num_calls-200)*0.4;
        cout<<"Bill Is: "<<bills<<endl;
    }
    return 0;
}
