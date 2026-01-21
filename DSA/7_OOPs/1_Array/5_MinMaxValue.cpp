// Max_Number

#include <iostream>
#include <climits>
using namespace std;

int main(){

    int arr[6] = {3,5,2,6,2,5};
    int ans = INT_MIN;

    for(int i = 0 ; i<6 ; i++){

        if(arr[i]>ans){
            ans=arr[i];
        }

    }
    
    cout<<ans;

}

//Min_Number

#include <iostream>
#include <climits>
using namespace std;

int main(){

    int arr[6] = {3,5,2,6,2,5};
    int ans = INT_MAX;

    for(int i = 0 ; i<6 ; i++){

        if(arr[i]<ans){
            ans=arr[i];
        }

    }
    
    cout<<ans;

}

