#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout<<"top element "<<s.top()<<endl;
    while(!s.empty())
{
cout<<s.top()<<" ";
s.pop();
}

}