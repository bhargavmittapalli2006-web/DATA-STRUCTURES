#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,num=1;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

for(i=0; i<=5; i++)
    {
        for(j=0; j<i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

for(i=0; i<=5; i++)
    {
        for(j=0; j<i; j++)
        {
            char ch='A'+i;
            cout<<ch<<" ";
            
        }
        cout<<endl;
    }
}