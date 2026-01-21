#include <iostream>
using namespace std;

int main(){

    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int row = 3 , col = 4;

    for(int i = 0 ; i < row ; i++){

        for(int j = 0 ; j < col ; j++){

            cout<<arr1[i][j] + arr2[i][j]<<"  ";

        }

        cout<<endl;

    }

}




// which row have max sum

//             [  14  28  5  11  ]  sum : 14+28+5+11 =>58
//             [  30  9   21  2  ]  sum : 30+9+21+2 =>62
//             [  17  24   6  19 ]  sum : 17+24+6+19 =>66

//                  maxsum : 66

#include<iostream>
using namespace std;

int main(){

    int arr[3][4] = {14, 28, 5, 11, 30, 9, 21, 2, 17, 24, 6, 19};
    
    int row = 3 , col = 4;

    int maxsum = 0;
    int sum = 0;
    for(int i=0 ; i<row ; i++){
        
        int sum = 0;

        for(int j = 0 ; j<col ; j++){

            sum+=arr[i][j];

        }
        
        maxsum = max(maxsum,sum);

    }

    cout<<maxsum;

}





// Sum of diagonal Element

int DiagonalSum(int arr[][3], int row, int col) {
    int totalsum = 0;

    for (int i = 0; i < row; i++) {
        totalsum += arr[i][i];  // main diagonal: (0,0), (1,1), (2,2)
    }

    return totalsum;
}

int main() {
    int arr[3][3] = { {14, 28, 5},
                      {11, 30, 9},
                      {21, 2, 17} };

    int result = DiagonalSum(arr, 3, 3);
    cout << "Diagonal Sum Is : " << result;

    return 0;
}



#include<iostream>
using namespace std;

int main(){

    int arr[3][3] = {14, 28, 5, 11, 30, 9, 21, 2, 17};

    int result = DiagonalSum(arr , 3 , 3) ;   

    cout<<"Diagonal Sum Is : "<<result;

    return 0;

}



#include <iostream>
using namespace std;
int main(){

    
    int arr[3][3] = {14, 28, 5, 11, 30, 9, 21, 2, 17};

    int row , col = 3;

    int DigonalSum = 0;

    for(int i = 0 ; i<row ; i++){

        for(int j = 0 ; j<col ; j++){

            if(i == j){

                DigonalSum+=arr[i][j];

            }

        }

    }

    cout<<DigonalSum;

}