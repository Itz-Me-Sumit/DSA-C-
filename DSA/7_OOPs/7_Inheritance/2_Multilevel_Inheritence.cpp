#include <iostream>
using namespace std;

class person{

    protected:
    string name;

    public:
    void introduce(){

        cout<<"My name : "<<name<<endl;

    }

};

class employee : public person{

    protected:
    int salary;
    
    public:
    void employee_salary(){

        cout<<"My salary : "<<salary<<endl;

    }

};

class manager : public employee{  // multilevel inheritance.

    
    string department;
    
    public:
    manager(string name , int salary , string department){

        this -> name = name;
        this -> salary = salary;
        this -> department = department;

    }

    void work(){

        cout<<"Leading Department : "<<department<<endl;

    }

};

int main(){

    manager A("sumit" , 200 , "Artificial Intelligence");
    
    cout<<endl;

    A.introduce();
    A.employee_salary();
    A.work();
    
}