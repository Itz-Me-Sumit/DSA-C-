#include <iostream>
using namespace std;

class student{

    private:

    string name;
    int age ; 
    int roll_num ;
    string grade ;

    public:
        void name_is(string n){

            name = n;

        }

        void age_is(int a){

            age = a;

        }

        void roll_number(int n){

            roll_num = n;

        }

        void changegrade(string a){

            grade = a;

        }

        void getname(){

            cout<<name<<endl;

        }

        void getage(){

            cout<<age<<endl;

        }

        void get_the_roll_num(){

            cout<<roll_num<<endl;

        }

        void getprintgrade(){

            cout<<grade<<endl;

        }

};

int main(){

    student s1;

    s1.name_is("Sumit");
    s1.age_is(21);
    s1.roll_number(22);
    s1.changegrade("A++");


    s1.getname();
    s1.getage();
    s1.get_the_roll_num();
    s1.getprintgrade();

}