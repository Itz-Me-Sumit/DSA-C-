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

int main(){

    int arr[5] = {1,2,3,4,5};

    Node *head;
    Node *tail;
    tail = NULL;
    head = NULL;

    for(int i = 0 ; i < 5 ; i++){

        if(head == NULL){

            head = new Node(arr[i]);
            tail = head;
        
        }

        else{

            tail -> next = new Node(arr[i]);
            tail = tail->next;

        }

    }

    // Reverse The LinkedList.

    Node *prev;
    Node *curr;
    Node *nextnode;
    nextnode = NULL;
    curr = head;
    prev = NULL;

    while(curr){

        nextnode = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = nextnode;
        
    }

    Node *temp;
    temp = prev;

    while(temp != NULL){

        cout<<temp->data<<" ";
        temp = temp->next;

    }

}

// Reverse By Recursion !!

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

Node* reverse(Node *prev , Node *curr) {
    
    if(curr == NULL){

        return prev;

    }

    Node *fut = curr -> next;
    curr -> next = prev;

    return reverse(fut , curr);

}


int main(){

    int arr[5] = {1,2,3,4,5};

    Node *head;
    Node *tail;
    tail = NULL;
    head = NULL;

    for(int i = 0 ; i < 5 ; i++){

        if(head == NULL){

            head = new Node(arr[i]);
            tail = head;
        
        }

        else{

            tail -> next = new Node(arr[i]);
            tail = tail->next;

        }

    }

    // Reverse The LinkedList.

    Node *temp;
    temp = reverse(NULL , head);

    while(temp != NULL){

        cout<<temp->data<<" ";
        temp = temp->next;

    }

}