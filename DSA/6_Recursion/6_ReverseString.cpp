#include <iostream>
using namespace std;

string reverse( string s , int index){

    if(index < 0){

        return "";

    }

    return s[index] + reverse(s , index - 1);

}

int main(){

    string str;
    cout<<"Enter : ";
    cin>>str;

    cout<<reverse(str , str.size() - 1);
    
}