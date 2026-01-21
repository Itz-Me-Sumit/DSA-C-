#include <iostream>
using namespace std;


void  incr(int *ptr){

    *ptr = *ptr + 1;

}


int main(){

    int a = 10 ;

    int temp = a;

    incr(&temp);

    cout<<temp;

}



int dubl(int *ptr){

    *ptr = 2 * (*ptr);

    return *ptr;

}

#include <iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};

    for(int i = 0 ; i < 5 ; i++){

        int temp = arr[i];

        cout<<dubl(&temp)<<' ';

    }

    cout<<endl;


}


#include<iostream>
using namespace std;

void swapping(int *ptr1 , int *ptr2){

    int temp = *ptr1;

    *ptr1 = *ptr2;

    *ptr2 = temp;

}

int main(){

    int fst = 10;
    int snd = 12;

    cout<<&fst<<' '<<fst<<endl;
    cout<<&snd<<' '<<snd<<endl;

    cout<<endl<<endl;

    swapping(&fst , &snd);

    cout<<&fst<<' '<<fst<<endl;
    cout<<&snd<<' '<<snd<<endl;

}


// Without Using Pointers



#include <iostream>
using namespace std;

void swap(int &p1 , int &p2){  // here ' & ' used for passed by reference.

    int temp = p1;
    p1 = p2 ;
    p2 = temp;

}

int main(){

    int fst = 10 ;
    int snd = 20 ;

    cout<<&fst<<' '<<fst<<endl;
    cout<<&snd<<' '<<snd<<endl;

        // 0x61ff0c 10
        // 0x61ff08 20

    cout<<endl<<endl;

    swap(fst,snd);

    cout<<&fst<<' '<<fst<<endl;
    cout<<&snd<<' '<<snd<<endl;

        // 0x61ff0c 20
        // 0x61ff08 10

}

