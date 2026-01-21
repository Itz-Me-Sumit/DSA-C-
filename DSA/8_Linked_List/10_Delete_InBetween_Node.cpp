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

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    Node *head;
    Node *tail;
    head = NULL;
    tail = NULL;

    for(int i = 0 ; i < 11 ; i++){

        if(head == NULL){

            head = new Node(arr[i]);
            tail = head;

        }

        else{

            tail -> next = new Node(arr[i]);
            tail = tail -> next;

        }

    }

//--------------------------------------------------------------------------------

    // Delete Node In-Between.

        // kisi Node ko bich se delete karne ke liye agar ham ye kare ki... hame jis node ko delete karna hai ham us node ke just pehle wale node ka address store kar le...

//             step 1) -> jis node ko delete karna hai uske just pehle Node ke address ko store kar lenge 
//                        " previous " naam ke node me
//             step 2) -> "previous" ke next me jake ham uss Node pe pahuch jayenge jisko hame delete karna hai
//             step 3) -> Jis Node ko delete kara hai uske next me jake uska next me jake deleted Node ke just
//                        aage wale Node ka address store kar lenge.


Node *prev_of_deleted_node;
Node *deleted_node;
prev_of_deleted_node = head;
deleted_node = head;

int a;
cout<<"Which Node You Wanna Delete : ";
cin>>a;

int count = 0;

    while(deleted_node -> next != NULL){

        if( deleted_node -> data != a ){

            prev_of_deleted_node = deleted_node;
            deleted_node = deleted_node -> next;

            count+=1;

        }

        else{

            break;

        }

    }

    Node *new_head;
    new_head = NULL;

    if(count == 0){

        new_head = head -> next;
        delete head;

    }   

    else{
        
        prev_of_deleted_node -> next = deleted_node -> next;
        delete deleted_node;
    
    }

//--------------------------------------------------------------------------------

    Node *temp;

    if(count == 0){

        temp = new_head;

    }

    else{

        temp = head;

    }

    while(temp -> next != NULL){

        cout<<temp -> data <<" ";
        temp = temp -> next;

    }

}