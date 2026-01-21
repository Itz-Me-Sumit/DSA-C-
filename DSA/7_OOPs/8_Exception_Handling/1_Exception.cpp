#include <iostream>
using namespace std;

class customer{

    string name;
    int balance , account_number;

    public:

    customer(string name , int balance , int account_number){

        this -> name = name;
        this -> balance = balance;
        this -> account_number = account_number;

    }

    // deposit

    void deposit(int amount){

        if(amount > 0){

            balance+=amount;
            cout<<amount<<" Amount Credited "<<endl;

        }

        else{

            throw "Amount Should be Greater Then Zero";

        }

    }

    void withdraw(int amount){

        if(amount > 0 && balance >= amount){

            balance-=amount;
            cout<<amount<<" Amount Debited"<<endl;

        }

        else{

            throw "Not Enough Balance";

        }

    }

    void display(){

        cout<<"Name : "<<name<<"\n"<<"Account Number : "<<account_number<<"\n"<<"Balance : "<<balance<<endl;

    }

};

int main(){

    customer A("Sumit" , 123 , 23333);

    try{
        A.deposit(100);
        A.display();
    
        cout<<endl;
    
        A.withdraw(200);
        A.display();
    
    }

    catch(const char *e){

        cout<<"Exception Occured : "<<e<<endl;

    }

}