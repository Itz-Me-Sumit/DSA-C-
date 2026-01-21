#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector< vector<int> >matrix = {  {3,6,4,2},
                                     {7,8,11,5},
                                     {17,8,5,9} };

    int  col = 4;

    int row = 0 ;

    for(int i = 0 ; i < col ; i++){

        if(i%2==0){

            row = 0;
            
            while(row<3){

                cout<<matrix[row][i]<<" ";
                row++;

            }
            
        }

        else{

            row = 2;

            while(row>=0){

                cout<<matrix[row][i]<<" ";
                row--;

            }

        }

    }

}