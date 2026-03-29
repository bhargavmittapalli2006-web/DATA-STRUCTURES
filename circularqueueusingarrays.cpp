#include<iostream>
using namespace std;
#define SIZE 5
class CQueue{
      private:
  
      int arr[SIZE];
      int front,rear;
      public:
      CQueue()
      {
        front=-1;
        rear=-1;
      }
      void enqueue(int val){
        if((rear+1)%SIZE==front)
        {
            cout<<"Queue overflow\n";
            return;
        }
        if(front==-1)
        {
            front=0;
        }
        rear=(rear+1)%SIZE;
        arr[rear]=val;
        cout<<val<<"inserted successfully\n";
      }
      void dequeue(){
        if(front==-1)
        {
            cout<<"Queue underflow\n";
            return;
        }
        cout<<"deleted element"<<arr[front]<<endl;
        if(front==rear){
            front=rear=-1;
        }
        else {
            front = (front + 1) % SIZE;
        }
      }
      void display(){
        if(front==-1){
            cout<<"Queue is underflow\n";
            return;
        }
        cout<<"Queue elements are:\n";
        int i=front;
        while(true){
            cout<<arr[i]<<" ";
            if(i==rear)
            break;
            i=(i+1)%SIZE;
        }
        cout<<endl;
      }
};
int main(){
    CQueue q1;
    
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
  q1.display();
    q1.dequeue();
    q1.display();
    return 0;
}