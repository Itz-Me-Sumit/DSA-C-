#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int val){
        data = val;
        prev = next = NULL;
    }
};

Node* Delete(Node *head , int pos){

    // delete first node
    if(pos == 1){
        Node *newhead = head->next;
        if(newhead) newhead->prev = NULL;
        delete head;
        return newhead;
    }

    // delete last node (10th)
    else if(pos == 10){
        Node *temp = head;
        Node *last = NULL;

        // move till last node
        while(temp->next){
            last = temp;
            temp = temp->next;
        }

        // now temp is last node
        last->next = NULL;
        delete temp;
        return head;
    }

    // delete middle node
    else if(pos > 1 && pos < 10){
        Node *temp = head;
        Node *prevNode = NULL;

        int p = pos;
        while(--p){
            prevNode = temp;
            temp = temp->next;
        }

        // temp = node to delete
        // prevNode = node before deletion

        Node *delnode = temp;
        Node *after = delnode->next;

        prevNode->next = after;
        if(after) after->prev = prevNode;

        delete delnode;

        return head;
    }

    return head;
}

int main(){

    int pos;
    cout<<"Enter Position : ";
    cin>>pos;

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    Node *head = NULL , *tail = NULL , *temp = NULL;

    for(int i = 0 ; i < 10 ; i++){
        if(head == NULL){
            head = new Node(arr[i]);
            tail = head;
        }
        else{
            tail->next = new Node(arr[i]);
            temp = tail;
            tail = tail->next;
            tail->prev = temp;
        }
    }

    temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    temp = tail;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<endl;

    temp = Delete(head , pos);

    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
