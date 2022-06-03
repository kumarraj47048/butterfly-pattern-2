#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        if(j>n-i && j<=n || j>=n && j<n+i)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
        cout<<endl;
    }

    for(i=n+1;i<=2*n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=i-n && j<=n || j>n && j<=(2*n)+n-i )
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}