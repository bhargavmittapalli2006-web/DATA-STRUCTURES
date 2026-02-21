#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int fact=1;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    cout<<"factorial of given number is "<<fact<<endl;
    int count=0;
    while(fact%10==0)
    {
        count++;
        fact=fact/10;
    }
    cout<<"no of zeroes are  "<<count;
}
