#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the last number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum = sum + (i*i);
    }
    for(i=1;i<=n;i++)
    {
        if(i==n || i+1>n)
            cout<<i<<" ^ 2 ";
        else
            cout<<i<<" ^ 2 + ";
    }
    cout<<" = "<<sum<<endl;
}
