#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class stackusingvector{
    vector<int> v;
    public:
    void push(int value){
        v.push_back(value);
    }
    void pop(){
        v.pop_back();
    }
    bool isempty(){
        return v.size()==0;
    }
    int top(){
        return v[v.size()-1];

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