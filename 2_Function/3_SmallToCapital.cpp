#include <iostream>
using namespace std;


char MakeCapital( char a ){

    int alpha = a - 32;
    return alpha ;

}


int main(){

    char ch;
    cout<<"Enter : ";
    cin>>ch;

    cout<<MakeCapital(ch);

}