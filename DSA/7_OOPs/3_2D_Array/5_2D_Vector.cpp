#include<iostream>
#include<vector>
using namespace std;

int main(){



    vector<vector<int> >matrix(3, vector<int>(4,1));
//                              ^              ^
//                              |              |
//                             row           column

    int row = 3 , col = 4;
    
    for(int i = 0 ; i < row ; i++){

        for(int j = 0 ; j < col ; j++){

            cout<<matrix[i][j]<<" "; 

        }

        cout<<endl; 

    }

        cout<<"Rows = "<<matrix.size()<<endl;
        cout<<"Column = "<<matrix[0].size()<<endl;

}