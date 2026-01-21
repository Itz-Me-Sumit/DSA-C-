#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int *ptr = &a;
    cout<<ptr<<endl;


    float m = 2.4;
    float *ptr1 = &m;
    cout<<ptr1<<endl;

    cout<<*ptr1;
    cout<<*ptr; 
}


#include<iostream>
using namespace std;

int main(){

    int *p ;

    int a = 40;

    p =&a;
    
    cout<<p<<endl; // print address

    cout<<*p; // print value which present at that address

}