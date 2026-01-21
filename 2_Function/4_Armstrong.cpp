#include <iostream>
using namespace std;

bool arms(int n){

    int num1 = n ;
    int count = 0;
   
    while(num1){

        num1 = num1/10;
        count+=1;

    }
    
    int sum = 0 , rem ;
    int num2 = n;
    while(num2){

        rem = num2%10;

            int digit = 1;

            for(int i = 1 ; i <= count ; i++ ){
                 digit = digit * rem;
            }

            sum += digit;
            num2 = num2/10;

    }

     return n == sum;

}


int main (){
    
    
    int n;
    cout<<"Enter Your Dirty Ass Num , Bitch : ";
    cin>>n;

    cout<<arms(n);


}