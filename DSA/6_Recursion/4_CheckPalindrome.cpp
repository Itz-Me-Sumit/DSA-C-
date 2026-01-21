#include <iostream>
using namespace std;

bool ispalindrome(string s , int start , int end){

    if(start >= end){

        return 1;

    }
    
    if(s[start] != s[end]){

        return 0;

    }
    
    else{
        
        return ispalindrome(s , start + 1 , end - 1);
    
    }
    

}


int main(){

    string str ;

    cout<<"Enter : ";
    cin>>str;

    cout<<ispalindrome(str , 0 , 4);

}