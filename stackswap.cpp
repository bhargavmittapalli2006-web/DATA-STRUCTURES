#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    //swaping 
stack<int> s2;
s2.swap(s);
cout<<endl<<"s2 elements are"<<endl;
while(!s2.empty())
{
cout<<s2.top()<<" ";
s2.pop();
}
}