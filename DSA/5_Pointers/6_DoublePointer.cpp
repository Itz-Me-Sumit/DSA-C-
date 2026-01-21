#include<iostream>
using namespace std;

int main(){

    int a = 10 ;

    int *p1 = &a; 

    // data a is stored at address '0x61ff08' and pointer p1 stored this address at some place

    int **p2 = &p1; 

    // as p1 stored address of a , so p1 must have stored that address of a at some place
    // so p2 will store address of p1.

    cout<<p1<<endl<<p2<<endl;

    cout<<**p2; // it will print 10

}