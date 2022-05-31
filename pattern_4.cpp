#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=2*n;i++)
    {
        for(j=1;j<=2*n;j++)
        {
            if(j>i && j<=(2*n)-i || i>n && j<i && j>=(2*n)+2-i )
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
    return 0;
}