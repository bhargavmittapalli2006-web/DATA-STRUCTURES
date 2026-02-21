#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    //first element in the queue is
    cout<<q.front();
    //here pop function deletes the front element
    while(!q.empty())
    {
        cout<<endl<<q.front()<<" ";
        q.pop();
    }
}