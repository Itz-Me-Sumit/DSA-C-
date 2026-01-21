#include <iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};

    int No_Of_Element = sizeof(arr) / sizeof(arr[0]) ;

    cout<<No_Of_Element;

    return 0;
}