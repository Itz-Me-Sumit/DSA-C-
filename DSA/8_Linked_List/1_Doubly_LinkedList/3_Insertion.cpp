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

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int p , n;
    cout<<"Insertion Position : ";
    cin>>p;
    cout<<"Value : ";
    cin>>n;

    Node *head = NULL , *tail = NULL , *temp = NULL;

    for(int i = 0 ; i < 10 ; i++){
        
        if(head == NULL){

            head = new Node(arr[i]);
            head -> prev = tail;
            tail = head;

        }

        else{

            tail -> next = new Node(arr[i]);
            temp = tail;
            tail = tail->next;
            tail->prev = temp;

        }

    }
    
    Node *prev = NULL;
    temp = head; 
    for(int i = 1 ; i < p ; i++){

        prev = temp;
        temp = temp -> next;

    }

    Node *curr , *front;
    front = prev -> next;

    curr = new Node(n);
    prev -> next = curr;
    front -> prev = curr;
    curr->prev = prev;
    curr->next = front;


    temp = head;
    while(temp){

        cout<<temp->data<<" ";
        temp = temp -> next;

    }

    cout<<endl;

    temp = tail;
    while(temp){

        cout<<temp->data<<" ";
        temp = temp->prev;

    }

}