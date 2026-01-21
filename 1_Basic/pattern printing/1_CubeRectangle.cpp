// CUBE

#include <iostream>
using namespace std;

int main(){


int n;
	
cout << "Enter Number : " ;
cin>>n;

	for(int i = 1 ; i<=n ; i++){

		for (int i=1 ; i<=n ; i++){

			cout<<"*"<<"  ";		

		}   cout<<endl;

	}



}


// RECTANGLE

#include <iostream>
using namespace std;

int main (){

	int height , width;
	
	cout<<"Enter height : ";
	cin>>height;
	cout<<"Enter width : ";
	cin>>width;

		for (int i=1 ; i<=height ; i++){

			for (int j = 1 ; j<= width ; j++){

				cout<<"*"<<"  ";
			
			} cout<<endl;

		}

}




// 1  2  3  4  5 
// 1  2  3  4  5
// 1  2  3  4  5
// 1  2  3  4  5
// 1  2  3  4  5

#include<iostream>
using namespace std;

int main(){

int n ;
cout<<"Enter your number : ";
cin>>n;

	for(int i=1 ; i<=n ; i++){

		for (int j=1 ; j<=n ; j++){
		
			cout<<" "<<j<<" ";

		} cout<<endl;

	}

}




// 1  1  1  1  1 
// 2  2  2  2  2 
// 3  3  3  3  3 
// 4  4  4  4  4 
// 5  5  5  5  5 

#include <iostream>
using namespace std;

int main (){

int n ;
cout<<"Enter num : ";
cin>>n;

	for(int i=1 ; i<=n ; i++){

		for(int j=1 ; j<= n ; j++){

			cout<<" "<<i<<" ";

		} cout<<endl;

	}

}





// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1

#include <iostream>
using namespace std;

int main(){

int n;

cout<<"enter your num :  ";
cin>>n;

	for (int i = 1 ; i<=n ; i++){

		for (int j = n; j>=1 ; j--){

			cout<<" "<<j;

		}cout<<endl;

	}

}





// 1 4 9 16 25 
// 1 4 9 16 25 
// 1 4 9 16 25 
// 1 4 9 16 25 
// 1 4 9 16 25 

#include<iostream>
using namespace std;

int main (){

int n ;
cout<<"Enter num : ";
cin>>n;

		for(int i = 1 ; i <= n ; i++){

			for(int j = 1 ; j <= n ; j++){
			
				cout<<j*j<<" ";

			} cout<<endl;

		}


}



// a b c d e 
// a b c d e
// a b c d e
// a b c d e
// a b c d e

#include <iostream>
using namespace std;

int main(){

    int n;
   
    cout<<"Enter num : ";
    cin>>n;

    for (int i = 1 ; i<=n ; i++){
        
        for(int j=0;j<n;j++){

           char charecters = 'a' + j;
            cout<<charecters<<" ";

        } cout<<endl;


    }


}



