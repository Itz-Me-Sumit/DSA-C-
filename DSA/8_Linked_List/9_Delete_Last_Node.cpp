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

    // Delete Last Node.
        
        /*Last Node delete karne ke liye agar hame second last element mil jaye to ham 2nd_last Node 
          ke next me jo last_Node ka address hoga usko delete kar denge and phir 2nd_last_Node ke next 
          ko NULL kar denge.
        */ 

    Node *snd_last;
    Node *last;
    snd_last = NULL;
    last = head;

    while(last -> next != NULL){

        snd_last = last;
        last = last->next;

    }
    
    // here we got 2nd_Last Node....

    Node *Last_Node_address;
    Last_Node_address = snd_last -> next;
    delete Last_Node_address;
    
    snd_last -> next = NULL;

// -----------------------------------------------

    temp = head;

    while(temp != NULL){

        cout<<temp -> data<<" ";
        temp = temp -> next;

    }   

}

