#include<bits/stdc++.h>
//array is a pointer u can access any memory location
using namespace std;
int main()
{
  int arr[5]={1,2,3,4,5};
  arr[8]=15;
  cout<<arr[8];//it prints the 15 even though above the array size is declared as 5  
}