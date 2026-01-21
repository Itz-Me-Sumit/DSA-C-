#include <iostream>
using namespace std;

class stack{

    int size;
    int *arr;
    int top;

    public:

    bool flag;

    stack(int s){
        
        size = s;
        arr = new int [s];
        top = -1;
        flag = true;

    }

    void push(int value){

        if(top == size-1){

            cout<<"Stack OverFlow.\n";
            return;

        }
        else{

            top++;
            arr[top] = value;
            cout<<"Pushed "<<arr[top]<<"\n";
            flag = false;

        }   

    }

    void pop(){
        
        if(top == -1){
            
            cout<<"Stack UnderFlow.\n";
            return;
        
        }
        else{

            cout<<"Element is "<<arr[top]<<" Popped\n";
            top--;
            
            if(top == -1){

                flag = true;

            }

        }

    }

    int peek(){

        if(top != -1){

            return arr[top];

        }

        else{
            
            return -1;

        }

    }

    bool isempty(){

        return top == -1;

    }

    int issize(){
        
        cout<<"size is : ";
        return top+1;

    }

};

int main(){

    stack s(5);
    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    int value = s.peek();
    if(s.flag == 0){
        cout<<value;
    }
    
}