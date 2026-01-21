#include <iostream>
using namespace std;

class engineer{

    public:
    string specilization;

    void work(){

        cout<<"Branch : "<<specilization<<endl;

    }

};

class youtuber{
    public:
    int subscriber;

    void sub(){

        cout<<"Subscribers : "<<subscriber<<endl;

    }

};

class Code_Teacher : public engineer , public youtuber{ // multiple Inheritence.

    public:
    string name;

    Code_Teacher(string specilization , int subscriber , string name){

        this -> specilization = specilization;
        this -> subscriber = subscriber;
        this -> name = name;

    }

    void show(){

        cout<<"My name : "<<name<<endl;
        work();
        sub();

    }

};

int main(){

    Code_Teacher A("Artificial Intelligence" , 10000 , "Sumit");

    A.show();

}