#include<iostream>
using namespace std;

int main(){

    char arr[6] = {'a','b','c','d','e','\0'};
    
    char *ptr = arr;

    cout<<(void*)arr<<endl;

    cout<<(void*)ptr<<endl;

}


#include<iostream>
using namespace std;

int main(){

    char arr[6] = {'a','b','c','d','e','\0'};
    
    cout<<static_cast<void*>(arr);

}


