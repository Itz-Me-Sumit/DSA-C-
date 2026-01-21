#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Your Num : ";
    cin>>n;

    int arr[5] = {1,2,3,4,5};

    for(int i=0 ; i<5 ; i++){

        if(n == arr[i]){

            cout<<i<<endl;

        }

        
    }
    
    cout<<-1;

}