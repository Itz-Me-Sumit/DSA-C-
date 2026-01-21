#include <iostream>
using namespace std;

class customer{

    public:

    string name;
    int account_number;
    int balance;

    customer( string a , int b , int c ) : name(a) , account_number(b) , balance(c){

        // it should be empty

    }

};

int main(){

    customer A("sumit" , 213 , 21);

    cout<<A.name<<" "<<A.account_number<<" "<<A.balance<<endl;

}