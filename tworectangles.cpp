#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    vector<int> v2;
    int value;
    cout<<"Enter the values of rectangle 1";
    for(int i=0; i<4; i++)
    {
        cin>>value;
        v1.push_back(value);

    }
    cout<<"Enter the values of rectangle 2";
    for(int i=0; i<4; i++)
    {
        cin>>value;
        v2.push_back(value);

    }
    int x1=v1[0];
    int y1=v1[1];
    int x2=v1[2];
    int y2=v1[3];
    int x3=v2[0];
    int y3=v2[1];
    int x4=v2[2];
    int y4=v2[3];
    if(y3>=y2||x3>=x2||y4<=y1||x4<=x1)
    return 100;
    else return -1
    ;
}
