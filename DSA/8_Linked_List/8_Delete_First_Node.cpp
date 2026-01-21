#include <iostream>
using namespace std;

class Node{

    public:

    int data ;
    Node *next;

    Node(int value){

        data = value;
        next = NULL;

    }

};

int main(){

    int arr[10]= {1,2,3,4,5,6,7,8,9,10};

    Node *head;
    Node *temp;
    head = NULL , temp = NULL;

    for(int i = 0 ; i < 10 ; i++){

        if(head == NULL){

            head = new Node(arr[i]);
            temp = head;

        }

        else{

            temp -> next = new Node(arr[i]);
            temp = temp -> next;

        }

    }

// -----------------------------------------------

    // detete at starting :- delete First Node.

    Node *new_head;
    new_head = head -> next;

    delete head;

// -----------------------------------------------

    temp = new_head;

    while(temp != NULL){

        cout<<temp -> data<<" ";
        temp = temp -> next;

    }   

}

