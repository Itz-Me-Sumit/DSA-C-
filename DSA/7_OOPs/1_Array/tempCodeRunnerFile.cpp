#include <iostream>
using namespace std;

int main(){

    int arr[20] = {5,25,2,5,7,8,6,3,5,2,6,25,9,7,3,9,2,25,6,2};

    int n = 20;

    for(int i = 1 ; i < n ; i++){

        for(int j = i ; j>0 ; j--){

            if(arr[j]<arr[j-1]){

                swap(arr[j],arr[j-1]);

            }

            else{

                break;

            }

        }

    }

    cout<<"Sorted Array : ";

    for(int i = 0 ; i < n ; i++){

        cout<<arr[i]<<" ";

    }

    cout<<endl;

    int start = 0 , end = n-1;
    int srh;
    bool found = false;

    int start_index , end_index;

    cout<<"Enter Your Search : ";
    cin>>srh;

    while(end>=start){

        int mid = start + (end-start)/2;

        if(arr[mid]==srh){

            found = true;

            int start_index = mid , end_index = mid;

            while(start_index > 0 && arr[start_index ] == arr[start_index - 1]){

                start_index--;

            }   


            while(end_index < n-1 && arr[end_index] == arr[end_index + 1]){

                end_index++;
                
            }

            cout<<start_index<<" "<<end_index;

            break;

        }

        else if(arr[mid]>srh){

            end = mid-1;

        }

        else{

            start = mid+1;

        }
        
    }

    if(!found){

        cout<<"Not Found !!";

    }

}