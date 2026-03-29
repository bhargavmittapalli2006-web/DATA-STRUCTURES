#include<iostream>
#include<list>
using namespace std;
class stackusingvector{
    list<int> ll;
    public:
    void push(int value){
        ll.push_front(value);
    }
    void pop(){
        ll.pop_front();
    }
    bool isempty(){
        return ll.size()==0;
    }
    int top(){
        return ll.front();

    }


};
int main(){
    stackusingvector s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
while(!s.isempty()){
    cout<<s.top()<<" ";
    s.pop();

}
return 0;
}