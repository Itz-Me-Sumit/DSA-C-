// *  *  *  *  *  
// *  *  *  *  *
// *  *  *  *  *
// *  *  *  *  *
// *  *  *  *  *




#include <iostream>
using namespace std;

int main (){

int row,col; 
cout<<"Enter Your ROW : ";
cin>>row;
cout<<"Enter Your COL : ";
cin>>col;

    int r = row ;
    while(r>=1){


        int c = col;
        while(c>=1){

            cout<<"*  ";

            c--;

        }cout<<endl;
    r--;

    }

}


// 5
// 10
// 15
// 20
// 25
// 30
// 35
// 40
// 45
// 50


#include <iostream>
using namespace std;

int main(){

int n;
cout<<"Enter Your Num : ";
cin>>n;


    int i = 1 ;
    while(i<=10){

        cout<<n*i<<endl;
        i++;
    }

}




// 1 2 3 5 6 10 15 30


#include <iostream>
using namespace std;

int main(){

int n;
cout<<"Enter Your Num : ";
cin>>n;


    int i = 1 ;
    while(i<=n){

        
        if(n%i==0){

            cout<<i<<" ";

        }
        
        i++;
        

    }


}