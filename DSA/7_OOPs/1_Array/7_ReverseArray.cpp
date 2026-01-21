#include <iostream>
using namespace std;

int main (){

    int arr[6] = {1,2,3,4,5,6};

    int rev_arr[6];

    for(int i = 5 ; i>=0 ; i--){

        rev_arr[5-i] = arr[i];

    }

    for(int i = 0 ; i<6 ; i++){

        cout<<rev_arr[i]<<" ";

    }

}


#include <iostream>
using namespace std;

int main(){

    int arr[6] = {1,2,3,4,5,6};

    int i = 0 , j = 5;

    while(i<j){

        swap(arr[i] , arr[j]);
        i++ , j--;

    }

    for(int i = 0 ; i<6 ; i++){
        
        cout<<arr[i]<<" ";

    }
    cout<<endl;


    cout<<arr.size();
}