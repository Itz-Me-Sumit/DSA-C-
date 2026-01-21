#include <iostream>
using namespace std;

class costumer{

    public:

    string name;
    int account_number;
    int balance ;
    
    // Default constructor containa no perameters.

    costumer(){

        cout<<"Default Constructor Start Here !! "<<endl<<endl;

    }

};

int main(){

    costumer S;

    S.name = "sumit";
    S.account_number = 223;
    S.balance = 999999999;

    cout<<S.name<<" "<<S.account_number<<" "<<S.balance<<endl;

}