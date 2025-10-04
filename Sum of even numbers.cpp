#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the last number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum = sum+i;
        }
    }
    for(i=2;i<=n;i+=2)
    {
        if(i==n || i+2>n)
            cout<<i;
        else
        cout<<i<<" + ";
    }
    cout<<" = "<<sum<<endl;
    return 0;
}
