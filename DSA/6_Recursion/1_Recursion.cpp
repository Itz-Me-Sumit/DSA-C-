#include <iostream>
using namespace std;

void Recr(int a){

    if(a == 0 ){  // Recursion Breaking Point.

        cout<<"Happy Birthday !! ";
        return;

    }

    else{

        cout<<a<<" Days Left to Birthday..."<<endl;
        
        Recr(a-1); // Recurcive Statement.

    }


}

int main(){

    Recr(4);

}



// factorial

#include<iostream>
using namespace std;

long long factorial(long long n){

    if(n == 1 || n == 0){

        return 1;

    }

    return n * factorial(n-1);

}

int main(){

    long long n ;
    cout<<"Enter : ";
    cin>>n;

    long long result = factorial(n);

    cout<<result;

}


// print 1,2,3,4,..till n.

#include <iostream>
using namespace std;

void print(int n){

    if(n == 1){

        cout<<1<<endl;
        return;

    }

    print(n-1);
    
    cout<<n<<endl;

}

int main(){

    int n;
    cout<<"Enter : ";
    cin>>n;

    print(n);

}





// print even number till N.

#include <iostream>
using namespace std;

void even(int n){

    if(n <= 2){

        cout<<2<<endl;
        return;

    }

    if(n%2 == 0){

        even(n - 2);

        cout<<n<<endl;

    }

    else{

        even(n - 1);

    }

}

int main(){

    int num;
    cout<<"Enter : ";
    cin>>num;

    even(num);

}