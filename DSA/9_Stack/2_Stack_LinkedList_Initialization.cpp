#include <iostream>
using namespace std;

class Node{
    public:
    
    int data;
    Node *next;

    Node(int val){
    
        data = val;
        next = NULL;
    
    }

};

class stack{

    Node *top;
    int size;

    public:

    stack(){
        top = NULL;
        size = 0;
    }

    void push(int val){
        Node *temp = new Node(val);
        if(temp == NULL){
        cout<<"Stack OverFlow.\n";
        }
        else{
            temp->next = top;
            top = temp;
            cout<<"Pushed "<<val<<endl;
            size++;
    
        }
    }

    void pop(){
        if(size != 0 && top != NULL){
            Node *temp = top;
            cout<<"Popped "<<top->data<<endl;
            top = top->next;
            delete temp;
            size--;
        }
        else{
            cout<<-1;
        }
    }

    int peek(){
        if(top!=NULL){
            return top->data;
        }
        else{
            return -1;
        }
    }

    bool isempty(){
        if (top == NULL) return 1;
        else return 0; 
    }

    int issize(){
        return size;
    }


};

int main(){
    
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    s.pop();

    cout<<s.issize()<<endl;

    cout<<s.peek()<<endl;

    cout<<s.isempty();

}