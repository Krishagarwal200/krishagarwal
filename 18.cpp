#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<a;j++)
        {
            cout<<" ";
            
        }
        a=a+2;
        for(int j=i;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    a=a-2;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<a;j++)
        {
            cout<<" ";
        }
        a=a-2;
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}