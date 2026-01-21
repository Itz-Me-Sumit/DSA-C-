#include<iostream>
using namespace std;

int main(){

    string s;
    cout<<"Enter : ";
    cin>>s;
 
    bool palindrome = true;

    int n = s.size();

    int start = 0 , end = n-1;

    while(start<=end){

        if(s[start] != s[end]){

            palindrome = false;            

                break;

        }

        else{

            start++,end--;

        }

    }

    cout<<palindrome;

}