#include <iostream>
#include <fstream> // used for file hendling
using namespace std;


// Note :- " ofstream " used to write into file.

int main(){
    
    ofstream fout;
    
    // Opening File.
    
    fout.open("example.txt");  // it opens file , if file doesn't exist then it create file.

    // 1) Write ->

    fout<<"I am Sumit\n";

    // close file

    fout.close();

}