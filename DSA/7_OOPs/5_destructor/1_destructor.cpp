#include <iostream>
using namespace std;

class customer{

    string name;
    int *data;

    public:
    
    // constructor.

    customer(){

        name = "Sumit" ; 
        data = new int;
        *data = 21;

        cout<<"Constructor Fucntion is Called \n";

    }

    // Destructor. --> it releases Dynamically taken memory.

    ~ customer(){

        cout<<"Destructor is called \n";

    }

};

int main(){

    customer A;

}