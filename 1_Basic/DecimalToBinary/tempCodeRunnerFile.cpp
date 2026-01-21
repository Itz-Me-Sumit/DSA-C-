
#include <iostream>
using namespace std;

int main(){

int bin , rem , mul = 1 ,sum = 0 ;
cout<<"Enter Your Dirty Ass Binary Number, Bitch : ";
cin>>bin;

    while(bin){

        rem = bin%2;
        bin = bin/10;
        sum = rem*mul + sum;
        mul = mul * 2;
    
    }
    cout<<sum;

}