#include<iostream>
#include<vector>
using namespace std;

int main (){

    vector<int>v;

    cout<<"Size Of Vector : "<<v.size()<<endl;
    cout<<"Capacity Of Vector : "<<v.capacity()<<endl;

    cout<<endl;

    v.push_back(2);
    v.push_back(3);

    cout<<"Size Of Vector : "<<v.size()<<endl;
    cout<<"Capacity Of Vector : "<<v.capacity()<<endl;

    v.push_back(4);

    cout<<endl;

    cout<<"Size Of Vector : "<<v.size()<<endl;
    cout<<"Capacity Of Vector : "<<v.capacity()<<endl;


    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    cout<<endl;

    cout<<"Size Of Vector : "<<v.size()<<endl;
    cout<<"Capacity Of Vector : "<<v.capacity();



}