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

void InsertAfter(Node *head , int where , int value){

    while(head){

        if(head -> data == where){

            Node *new_node = new Node(value);
            new_node -> next = head -> next;
            head -> next = new_node;

        }

        head = head -> next;

    }


}

int main(){

    int arr[5] = {1,2,3,4,5};

    Node *head;
    Node *tail;
    head = NULL;
    tail = NULL;

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

    InsertAfter(head , 2 , 9);

    Node *temp;
    temp = head;

    for(int i = 0 ; i < 6 ; i++){

        cout<<temp -> data <<" ";
        temp = temp->next;

    }

}


/*   

|   2   |   add(9)  | --->> |   9   |     | --->> |   3   |      |

*/