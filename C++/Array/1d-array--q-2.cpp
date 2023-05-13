#include<iostream>
using namespace std;
#define n 5
int main()
{
    int a[n],i,search_element,key=0;
    cout<<"Enter The elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    
    cout<<"Enter Your Search Element: ";
    cin>>search_element;
    for(i=0;i<n;i++)
    {
        if(a[i]==search_element)
        {
            key = i;
            break;
        }
    }
    if(key == 0)
    {
        cout<<"Element is not found!!"<<endl;
    }
    else
    {
        cout<<"The element is "<<search_element<<" and index is "<<key<<endl;
    }
        
        

    return 0;
}