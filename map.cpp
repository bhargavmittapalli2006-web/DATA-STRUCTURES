#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    map<string, int> m;
    //Here 1st place (ex: string) is known as key and 2nd place(ex:int ) is known as value
    //keys are unique values like address in arrays
    m["tv"]=50;
    m["headphones"]=100;
    m["televisions"]=25;
    m.insert({"light",10});//insertion
    m.emplace("fridge",7000);//insertion but emplace auto detect that it is pair 
    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;//pairs concept
    }
    cout<<m["tv"];//also can be used to print
    //out put comes in the order of ascending order if key is int type .
    //here key is alphabets so it compares the astreic values 
    
}