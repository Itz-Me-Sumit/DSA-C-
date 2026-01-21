#include <iostream>
using namespace std;

class customer{

    public:

    string name;
    int account_number;
    int balance;

    customer(string n , int acc, int bal){

        name = n;
        account_number = acc;
        balance = bal;

    }

    customer(customer &B){ // 'B' Should Passed By Reference.

        name = B.name;
        account_number = B.account_number;
        balance = B.balance;

    }

};

int main(){

    customer A("sumit" , 123 , 34);

    customer copy_A(A);  
        // OR
    customer B = A;

    cout<<copy_A.name<<" "<<copy_A.account_number<<" "<<copy_A.balance<<endl;
    cout<<B.name<<" "<<B.account_number<<" "<<B.balance<<endl;

}