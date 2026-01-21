#include<iostream>
using namespace std;


int main(){

    int arr[8] ={5,2,8,2,39,20,43,23};
    int n = 8;  // sizeof(arr)/sizeof(arr[0]);

	for(int i = 0 ; i<n-1 ; i++){

        bool swapped = false;

		for(int j = 0 ; j<n-i-1; j++){

			if(arr[j]>arr[j+1]){

				swap(arr[j],arr[j+1]);
			
                swapped = true;

			}
	
		}	
	
        if(swapped == false){

            break;

        }
	
	} 

    for (int i = 0 ; i<8 ; i++){

        cout<<arr[i]<<" ";

    }
	
}