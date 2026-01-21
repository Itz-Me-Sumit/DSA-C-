#include <iostream>
#include <fstream> // used for file hendling
using namespace std;

// Note :- " ifstream " used to write into file.

int main(){

    ifstream fin;
    
    // Opening File.
    
    fin.open("example.txt");  // it opens file , if file doesn't exist then it create file.

    // 1) Read ->

    char c;

    c = fin.get();

    while(!fin.eof()){

        cout<<c;
        c = fin.get();

    }

    // close file

    fin.close();

}