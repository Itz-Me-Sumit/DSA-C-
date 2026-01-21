#include <iostream>
using namespace std;

int main(){

    int i;
    cout<<"Enter Your Num : ";
    cin>>i;

    switch(i){

        case 1 :        // here "1" can be any "Integer" , "Charectar" but not any "Float" or "Double"
            cout<<"Sumit";
                break;

        case 2 :
            cout<<"Anjali";
                break;
        
        case 3 :
            cout<<"Mayuri";
                break;

        case 4 :
            cout<<"Shivani";
                break;
        
        case 5 :
            cout<<"Shruti";
                break;

        case 6 :
            cout<<"Isha";
                break;

        default :  // not nessessary to wite default
            cout<<"Meri Pyaari Wife";
    }

} 