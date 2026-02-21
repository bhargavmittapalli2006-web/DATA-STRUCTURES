#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(5);
    s.insert(4);
    s.insert(1);
    s.insert(3);
    s.insert(2);
for(auto x:s)
{
    cout<<x<<" ";//set does not print the repeated values and  print the data in ascending order
}
cout<<endl;
cout<<s.size();//size does not count the same values




}