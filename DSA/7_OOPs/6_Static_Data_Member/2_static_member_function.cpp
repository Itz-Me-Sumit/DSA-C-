#include <iostream>
using namespace std;

class customer{

    string name;
    int account_number;
    int balance;

    static int total_customer;
    static int total_balance;

    public:

    customer(string name , int account_number , int balance){

        this -> name = name;
        this -> account_number = account_number;
        this -> balance = balance;
        total_customer++;
        total_balance += balance;
    }

    static void static_func(){

        cout<<"Total Number Of Customer : "<<total_customer<<endl;
        cout<<"Total Balance : "<<total_balance<<endl;

    }

    void deposit(int amount){

        if(amount>0){

            balance += amount;
            total_balance += amount;

        }

    }

    void withdraw(int amount){

        if(amount > 0 && amount<=balance){

            balance -= amount;
            total_balance -=amount;

        }

    }

    void diaplay_total_customer(){

        cout<<total_customer<<endl;

    }

};

int customer :: total_customer = 0;
int customer :: total_balance = 0;

int main(){

    customer A1("sumit" , 123 , 1000);
    customer A2("shivam" , 234 , 1000);
    customer A3("Sunit" , 234 , 1000);

    A1.deposit(400);
    A2.withdraw(200);

    customer :: static_func();

}