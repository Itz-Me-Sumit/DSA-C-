#include <iostream>
using namespace std;

class Node{

    public:

    int data;
    Node *prev;
    Node *next;

    Node(int val){

        data = val;
        prev = NULL;
        next = NULL;

    }

};

int main(){

    int arr[10] = {0,1,2,3,4,5,6,7,8,9};

    Node *head = NULL;
    Node *tail = NULL;
    Node *temp = NULL;

    for(int i = 0 ; i < 10 ; i++){

        if(head == NULL){

            head = new Node(arr[i]);
            head -> prev = tail;
            tail = head;

        }

        else{

            tail -> next = new Node(arr[i]);
            temp = tail;
            tail = tail -> next;
            tail -> prev = temp;

        }

    }

    temp = tail;

    while(temp){

        cout<<temp->data<<" ";
        temp = temp->prev;

    }

    cout<<endl;

    temp = head;

    while(temp){

        cout<<temp->data<<" ";
        temp = temp->next;
    
    }

}