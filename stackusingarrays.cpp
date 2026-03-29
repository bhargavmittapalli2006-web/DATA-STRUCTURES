#include<iostream>
using namespace std;
#define SIZE 100
class stackusingarrays{
private:

    int arr[SIZE];
    int topindex;
public:
stackusingarrays(){
    topindex=-1;
}
void push(int value){
    if(topindex==SIZE-1)
    {
        cout<<"Stack overflow\n";
        return;
    }
    arr[++topindex]=value;
}
void pop(){
    if(isempty()){
        cout<<"stack underflow\n";
        return;
    }
    topindex--;
}
bool isempty(){
    return topindex==-1;
}
int top(){
    if(isempty()){
        cout<<"stack is empty\n";
    return -1;

}
return arr[topindex];
}
};
int main(){
    stackusingarrays s;
    s.push(10);
     s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}