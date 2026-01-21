#include <iostream>
using namespace std;

class customer{

    string name;
    int account_number;
    int balance;
    static int total_customer;
    
    public:

    customer(string name , int account_number , int balance){

        this -> name = name;
        this -> account_number = account_number;
        this -> balance = balance;
        total_customer++;
    }

    void display(){

        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;

    }

};

int customer :: total_customer = 0;

int main(){

    customer A1("sumit" , 123 , 1000);
    customer A2("shivam" , 234 , 1000);

    A1.display();
    A2.display();

}