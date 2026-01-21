#include <iostream>
using namespace std;

int main (){


    int num ;
    cout << "Enter your num : ";
    cin>>num;

    if (num <2){
        cout<<"Not prime"<<endl;
        return 0;
    }
    else {

        for (int i = 2 ; i<num ; i++){
            if (num%i==0){
                cout<<"Prime"<<endl;
                break;
            }
            else {
                cout <<"Prime"<<endl;
                break;
            }
        }

    }

    
}

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