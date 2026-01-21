#include <iostream>
using namespace std;

class Node{

    public:

    Node *prev;
    Node *next;
    int data;

    Node(int val , Node *previous){

        data = val;
        prev = previous;
        next = NULL;

    }

};

int main(){

    int arr[10] = {0,1,2,3,4,5,6,7,8,9};

    Node *head = NULL;
    Node *tail = NULL;

    for(int i = 0 ; i < 10 ; i++){

        if(head == NULL){

            head = new Node(arr[i] , tail);
            tail = head;

        }

        else{

            tail -> next = new Node(arr[i] , tail);
            tail = tail -> next;

        }

    }

    Node *temp = head;

    while(temp){

        cout<<temp->data << " ";
        temp = temp -> next;

    }

    cout<<endl;

    temp = tail;

    while(temp){

        cout<<temp->data<<" ";
        temp = temp->prev;

    }

}