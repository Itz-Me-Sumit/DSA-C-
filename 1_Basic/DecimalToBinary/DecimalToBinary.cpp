// Decimal To Binary


#include <iostream>
using namespace std;

int main (){

    int num , rem , sum = 0 ,mul = 1;
    cout<<"Ente Your Num : ";
    cin>>num;

        if(num<0)
            return 0;

    while(num){

        rem = num%2;
        num = num/2;

        sum = rem * mul + sum ;
        mul = mul*10;

    }
    cout<<sum;

}





// Binarty To Decimal


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