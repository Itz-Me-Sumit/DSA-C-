
// *
// **
// ***
// ****
// *****

#include <iostream>
using namespace std;

int main(){

	int rows;
	cout<<"Enter rows : ";
    cin>>rows;

	for (int i=1 ; i<=rows ; i++){

		for(int j = 1 ; j<=i ; j++){

			cout<<"*";
		
		} cout<<endl;	

	}

}




// *****
// ****
// ***
// **
// *


#include <iostream>
using namespace std;

int main(){


	int height;
	
    cout<<"Enter height : "; 
    cin>>height;

	for (int i=height ; i>=1 ; i--){

		for(int j = 1 ; j<=i ; j++){

			cout<<"*";
		
		} cout<<endl;

    }


}   




// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5


#include <iostream>
using namespace std;

int main(){


int n ;
cout<<"Enter Your Name : ";
cin>>n;

	for (int i = 1 ; i<=n ; i++){

		for (int j = 1 ; j<=i ; j++){
			
			cout<<j<<" ";
		}cout<<endl;

	}

}





// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 

#include <iostream>
using namespace std;

int main(){

int n ;
cout<<"Enter Your Name : ";
cin>>n;

	for (int i = 1 ; i<=n ; i++){

		for (int j = i ; j<=i ; j++){
			
			cout<<i<<" ";
		}cout<<endl;

	}

}





// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1


#include<iostream>
using namespace std;

int main (){

int n;
cout <<"Enter Your Num :" ;
cin>>n;

	for(int i=1 ; i<=n; i++){
		
		for(int j = i ; j>=1 ; j--){

			cout<<j<<" ";		
	
		}cout<<endl;

	}


}




// a 
// a b 
// a b c 
// a b c d 
// a b c d e


#include <iostream>
using namespace std;

int main(){

int n;
cout<<"Enter Your Num : ";
cin>>n;


	for(int i = 0 ; i<n ; i++){
		
		for(int j = 0; j<=i ; j++){

			char charector = 'a';
			char result = charector + j ;


			cout<<result<<" ";	
	
		}cout<<endl;

	}


}




// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1


#include<iostream>
using namespace std;

int main (){

int n;
cout<<"Enter Your Num : ";
cin>>n;

	for(int i = n ; i>=1; i--){

		for(int j = 1 ; j<=i ; j++){

			cout<<j<<" ";

		}cout<<endl;

	}

}








//     *
//    **
//   ***
//  ****
// *****

#include <iostream>
using namespace std;

int main (){

int n;
cout<<"Enter Your Num : ";
cin>>n;

	for(int i = 1 ; i<=n ; i++){
	
		for(int j = n-i ; j>=1 ; j--){

			cout<<" ";

		}
		
		for(int j = i ; j>=1; j--){

			cout<<"*";

		}cout<<endl;
	
	}


}





//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * *


#include <iostream>
using namespace std;

int main (){

int n;
cout<<"Enter Your Num : ";
cin>>n;

	for(int i = 1 ; i<=n ; i++){
	
		for(int j = n-i ; j>=1 ; j--){

			cout<<" ";

		}
		
		for(int j = i ; j>=1; j--){

			cout<<"* ";

		}cout<<endl;
	
	}


}





//     1
//    12
//   123
//  1234
// 12345

#include <iostream>
using namespace std;

int main (){

int n;
cout<<"Enter Your Num : ";
cin>>n;


	for(int i = 1 ; i<=n ; i++){

		for(int j = n-i ; j>=1 ; j--){

			cout<<" ";

		}

		for(int j = 1 ; j<=i ; j++){

			cout<<j;

		}cout<<endl;

	}

}





//         * 
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *


#include <iostream>
using namespace std;

int main(){

int n ;
cout << "Enter Your Num : ";
cin>>n;


	for(int i = 0 ; i<n ; i++){

		for(int j = n-i-1 ; j>=1 ; j--){

			cout<<"  ";

		}

		for(int j = (2*i)+1 ; j>=1 ; j--){

			cout<<"* ";

		}cout<<endl;

	}

}





//     1
//    121
//   12321
//  1234321
// 123454321


#include <iostream>
using namespace std;


int main(){

int n;
cout<<"Enter Your Num :";
cin>>n;

	for(int i = 1 ; i<=n ; i++){

		for(int j = n-i ; j>=1 ; j--){

			cout<<" ";

		}

		for(int j = 1 ; j<=i ; j++){

		cout<<j;

		}

		for(int j = i-1 ; j>=1 ; j--){

			cout<<j;

		}cout<<endl;

	}

}




//     1
//    121
//   12321
//  1234321
// 123454321
//  1234321
//   12321
//    121
//     1


#include <iostream>
using namespace std;


int main (){

int n;
cout<<"Enter Your Num : ";
cin>>n;

	for(int i = 1 ; i<=n ; i++){

		for(int j = n-i ; j>=1 ; j--){

			cout<<" ";
		}

		for(int j = 1 ; j<=i ; j++){

			cout<<j;

		}

		for(int j = i-1 ; j>=1 ; j--){

			cout<<j;

		}cout<<endl;

	}

	for(int i = 1 ; i<n ; i++){


		for(int j = 1 ; j<=i ; j++){

			cout<<" ";

		}

		for(int j = 1 ; j<=n-i ; j++){

			cout<<j;

		}


		for(int j = n-i-1 ; j>=1 ; j--){

			cout<<j;

		}cout<<endl;

	}

}






// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********


#include <iostream>
using namespace std;

int main (){

int n;
cout<<"Enter Your Num : ";
cin>>n;

	for(int i = 1 ; i<=n ; i++){

		for(int j = n ; j>=i; j--){

			cout<<"*";

		}

		for(int j = i-1 ; j>=1 ; j--){
			
			cout<<" ";

		}

		for(int j = i-1 ; j>=1; j--){

			cout<<" ";

		}

		for(int j = n; j>=i ; j--){

			cout<<"*";

		}cout<<endl;

	}


	for(int i = 1 ; i<=n ; i++){

		for(int j = 1 ; j<=i ; j++){

			cout<<"*";

		}

		for(int j = n-i ; j>=1 ; j--){

			cout<<" ";

		}

		for(int j = n-i ; j>=1 ; j--){

			cout<<" ";

		}

		for(int j = i ; j>=1 ; j--){

			cout<<"*";

		}cout<<endl;

	}

}