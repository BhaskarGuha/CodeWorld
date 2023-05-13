#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,discriminant,root,root2;
    cout<<"Enter The Co-efficient of X^2: ";
    cin>>a;
    cout<<"Enter The Co-efficient of X: ";
    cin>>b;
    cout<<"Enter The Constant Term: ";
    cin>>c;
    discriminant= (b*b) - (4*a*c);
    if(discriminant==0)
    {
        root=- b / (2*a);
        cout<<"The Equation Of Same Roots: "<<root<<endl;
    }
    else if(discriminant>0)
    {
        root=(-b  + sqrt(discriminant)) / (2*a);
        root2=(-b - sqrt(discriminant)) / (2*a);
        cout<<"The Equation Of The Real Roots: "<<root<<"  "<<"and"<<"  "<<root2<<endl;;
    }
    else
    {
        double real_part=- b / (2*a);
        double imaginary_part= sqrt (-discriminant) / (2*a);
        cout<<"The Equation Of Complex Root 1: "<<real_part<<"+"<<imaginary_part<<"i"<<endl;
        cout<<"The Equation Of complex Root 2: "<<real_part<<"-"<<imaginary_part<<"i"<<endl;
    }
    return 0;
}