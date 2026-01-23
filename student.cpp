#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    string name;
    int age;
    string branch;
    public:
    void setData(string n, int a, string b)
    {
        name = n;
        age = a;
        branch =b;
    }
    void displayData(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Branch:   " << branch << endl;
    }
};
int main(){
    student student1;
    student1.setData("Alice",20,"CSE");
    student1.displayData();
    return 0;
}