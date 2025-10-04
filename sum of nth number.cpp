#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the last number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    for(i=1;i<n;i++)
    {
        cout<<i<<" + ";
    }
    cout<<n<<" = "<<sum<<endl;
    return 0;
}
