#include<iostream>
using namespace std;
int main()
{
    float salary,hra,da,gross_salary;
    cout<<"Enter basic salary :";
    cin>>salary;
    if(salary<1500)
    {
        hra = 0.1*salary;
        da  = 0.9*salary;
    }
    else
    {
        hra = 500;
        da  = 0.98*salary;
    }
gross_salary = salary + hra + da;
cout<<"Gross salary : "<<gross_salary<<endl;
return 0;
}

