#include <iostream>
#include <vector>
using namespace std;

void SubsetSum(int arr[] , int index , int n , vector<vector<int> > &ans , vector<int> &temp){

    if(index == n){

        ans.push_back(temp);
        return;

    }

    SubsetSum(arr , index + 1 , n , ans , temp);
    temp.push_back(arr[index]);
    SubsetSum(arr , index + 1 , n , ans , temp);
    temp.pop_back();

}

int main(){

    int arr[4] = {1,2,3,4};

    vector<vector<int> > ans;
    vector<int> temp;

    SubsetSum(arr , 0 , 4 , ans , temp);

    for(int i = 0 ; i < ans.size() ; i++){

        int sum = 0;

        cout<<"{";

        for(int j = 0 ; j < ans[i].size() ; j++){

            sum += ans[i][j];
            cout<<ans[i][j]<<" ";

        }

        cout<<"} -> ";
        cout<<sum<<endl;

    }

}