#include <iostream>
using namespace std;

int main(){


	int arr[10] = {3,4,1,16,2,5,1,8,9,7};
	int n = 10 ; 

	
		for(int i = 1 ; i<n ; i++){

			for(int j = i ; j>0 ; j--){

				if(arr[j]<arr[j-1]){

					swap(arr[j],arr[j-1]);
				
				}

				else{

					break;

				}

			}

		}

        for(int i = 0 ; i<n ; i++){
            
            cout<<arr[i]<<" ";

        }

}