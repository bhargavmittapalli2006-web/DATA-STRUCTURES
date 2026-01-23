#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"1.tea\n2.coffee\n3.jucie\n";
    cout<<"Enter your choice:";
    cin>>choice;
    switch (choice)
    {
    case 1:
    cout<<"You selected tea";
        break;
        case 2:
    cout<<"You selected coffee";
        break;
        case 3:
    cout<<"You selected juice";
        break;
    
    default:
        break;
    }
}