#include <iostream>
using namespace std;

class student{

    public:

    string name;
    int age;
    int roll_num;
    string grade;

};

int main(){

    student *s = new student;

    (*s).name = "sumit";
//          OR
    s ->name = "sumit";

    cout<<(*s).name<<endl;
    cout<<s -> name<<endl;

}