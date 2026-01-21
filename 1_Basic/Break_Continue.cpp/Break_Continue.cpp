// 1 2 3 4 

#include <iostream>
using namespace std;

int main(){

    for(int i = 1 ; i<=10 ; i++){

        cout<<i<<" ";
    
        if(i==4){
            break;
        }

    }

}






// 1 2 3

#include <iostream>
using namespace std;

int main(){

    for(int i = 1 ; i<=10 ; i++){

        if(i==4){
            break;
        }
        
        cout<<i<<" ";

    }

}




// 1 2 3 5 6 7 8 9 10  (4 is not inlcuded)

#include <iostream>
using namespace std;

int main(){

    for(int i = 1 ; i<=10 ; i++){

        if(i==4){
            continue;
        }
        
        cout<<i<<" ";

    }

}




// 1 2 3 4 5 6 7 8 9 10  (4 is included)

#include <iostream>
using namespace std;

int main(){

    for(int i = 1 ; i<=10 ; i++){

        cout<<i<<" ";
    
        if(i==4){
            continue;
        }

    }

}


