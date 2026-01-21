#include <iostream>
using namespace std;

int main(){

    int *ptr1 = new int ;

//    1. this "new" keyword is used to create data in 'heap' and " *ptr1 " stores
//       the location of that created data

    *ptr1 = 5;

    cout<<*ptr1<<endl;

//    2. This "5" will stored in heap.
//    3. but that "ptr1" which indecate address of '5' will stored in stack.

//    4. that Data sotred at heap will not deleted automatically, so we have to
//       delete it manually. by using keyword  "delete" 

delete ptr1 ; 

}





#include <iostream>
using namespace std;

int main(){

    int *ptr1 = new int;

    *ptr1 = 7;

    float *ptr2 = new float;
    
    *ptr2 = 3.55;

    int n;
    cout<<"Enter Array Size : ";
    cin>>n;

    int *ptr3 = new int [n];

    for(int i = 0 ; i < n ; i++){

        ptr3[i] = i + 1;

    }

    for(int i = 0 ; i < n ; i++){

        cout<<ptr3[i]<<" ";

    }


    delete ptr1;
    delete ptr2;
    delete [] ptr3;


}