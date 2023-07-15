#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j,search_value,key = -1,key2 = -1;
    cout<<"Enter your elements: "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"See your elements"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //Linear search
    cout<<"Enter Your Search Element: "<<endl;
    cin>>search_value;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(a[i][j] == search_value)
           {
                key = 0;
                key = i;
                key2 = 0;
                key2 = j;
                break;
           } 
        }

    }
    if(key == -1 && key2 == -1)
    {
        cout<<"No elements is found";
    }
    else
    {
        cout<<"The element is: "<<" "<<search_value<<" and the element row and column is "<< key <<" "<< key2;
    }

return 0;
}
