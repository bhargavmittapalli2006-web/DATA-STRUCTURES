#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>  v;
    int n;
    cout<<"Enter the no of elements"<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"enter element "<<i+1<<endl;
        int value;
        cin>>value;
        v.push_back(value);
    }
    sort(v.begin(),v.end(),greater<int>());//to print vector in descending order after sorting

    for(auto val: v)
    {
        cout<<val<<" ";
    }
    }
