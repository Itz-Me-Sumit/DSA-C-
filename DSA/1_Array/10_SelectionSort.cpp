#include <iostream>
using namespace std;

int main(){

    int arr[8] = {3,8,1,2,5,65,56,22};

    
    for(int i = 7 ; i >= 0 ; i--){

        for(int j = 0 ; j < 8 ; j++){

            if(arr[j]>arr[i]){
                
                int a = arr[i];

                arr[i] = arr[j];

                arr[j] = a;

                i=j;
            }

        }

    }
    
    for(int i = 0 ; i < 8 ; i++){

        cout<<arr[i]<<" ";

    }

}






#include <iostream>
using namespace std;

int main(){

int arr[6] = {10,8,2,3,1,4};

    for(int i = 0 ; i < 6 ; i++){

        int temp = arr[i];
        int replace = i ;
        for(int j = i ; j < 6 ; j++){

            if(arr[j]<temp){

                temp = arr[j];
                replace = j;

            }

        }

        arr[replace] = arr[i];

        arr[i] = temp;

    }

    for(int i = 0 ; i < 6 ; i++){

        cout<<arr[i]<<" ";

    }

}