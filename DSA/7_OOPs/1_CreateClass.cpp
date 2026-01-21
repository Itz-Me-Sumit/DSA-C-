#include <iostream>
using namespace std;

class student{

    public:

    string name;
    int age ; 
    int roll_num ;
    string grade ;

};

int main(){

    student s1;

    s1.name = "Sumit";
    s1.age = 20 ;
    s1.roll_num = 233;
    s1.grade = "A";
    
    cout<<s1.age<<" ";

    student s2;

    s2.name = "shivam";
    s2.age = 14;
    s1.roll_num = 1;
    s2.grade = "A";

    cout<<s2.grade;

}