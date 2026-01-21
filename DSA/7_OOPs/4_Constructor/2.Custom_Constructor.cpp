#include <iostream>
using namespace std;

class customer{

    public:

    string name;
    int account_number;
    int balance;

    customer(string a , int b , int c){

        name = a;
        account_number = b ;
        balance = c ;

    }

                    //OR 
    
    customer(string name , int account_number , int balance){

        this -> name = name;
        this -> account_number = account_number;
        this -> balance = balance;

    }

    // Both Does

};

int main(){

    customer S("Sumit" , 123 , 2111);

    cout<<S.name<<" "<<S.account_number<<" "<<S.balance;

}