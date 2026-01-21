// finding Factorial...!!


#include<iostream>
using namespace std;

int factorial(int n){

    if(n <= 1){

        if(n == 1){

            return 1;

        }

    }

    return n * factorial(n-1);

}

int main(){

    int a ;

    cout<<"Enter : ";
    cin>>a;

    int res = factorial(a);

    cout<<res;

}