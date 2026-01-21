#include <iostream>
using namespace std;

class Node{

    public:

    int data;
    Node *next;

    Node(int value){

        data = value;
        next = NULL;

    }

};


Node* LinkedList( int a[] , int index , int size , Node *previous ){

    if(index == size){

        return previous;

    }

    Node *temp;

    temp = new Node(a[index]);
    temp -> next =  previous;

    LinkedList(a , index + 1 , size , temp); 

}


int main(){

    int arr[5] = {1,2,3,4,5};

    Node *head;
    head = NULL;

    head = LinkedList(arr , 0 , 5 , NULL);
    
    for(int i = 0 ; i < 5 ; i++){

        cout<<head -> data <<" ";
        head = head -> next;

    }

}