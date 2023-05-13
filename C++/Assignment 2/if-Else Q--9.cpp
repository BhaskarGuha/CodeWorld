#include<iostream>
using namespace std;
int main()
{
    char alphabet;
    cout<<"Enter The Alphabet: ";
    cin>>alphabet;
    if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u')
    {
        cout<<"Your alphabet is a vowel"<<endl;
    }
    else
    {
        cout<<"Its a consnant"<<endl;
    }
    return 0;

}