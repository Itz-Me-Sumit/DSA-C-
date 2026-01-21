#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector< vector<int> > matrix = {{1,2,3,4,5,6},
                                    {7,8,9,10,11,12},
                                    {13,14,15,16,17,18},
                                    {19,20,21,22,23,24},
                                    {25,26,27,28,29,30},
                                    {31,32,33,34,35,36} };

    int top = 0 , bottom = 6 ;
    int left = 0 , right = 6 ;

    int count = 10;

    int pointer1 = 0 , pointer2 = 5;

    while(count>=10){

        while(pointer1 <= pointer2){

            cout<<matrix[pointer2][pointer1];

            pointer1++;

        }  
    
        

        count--;

    }



}


