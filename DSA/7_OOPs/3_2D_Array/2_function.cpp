#include <iostream>
using namespace std;

void matrix(int arr[][4] , int row_count , int col){

    int rows = row_count;

    for(int i = 0 ; i < rows ; i++){

        for(int j = 0 ; j < col ; j++){

            cout<<arr[i][j]<<"  ";

        }

        cout<<endl;

    }

}

int main(){

    int array[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    matrix(array , 3 , 4);

}
