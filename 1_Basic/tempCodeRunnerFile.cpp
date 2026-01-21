#include <iostream>
using namespace std;

int main (){

int n , fst = 0 , snd = 1;

cout << "Enter your num : ";
cin>>n;

	for (int i=1 ; i <=n ; i++){

		cout<<fst<<" ";
		
		fst = snd;
		snd = fst+snd;

	}   



}