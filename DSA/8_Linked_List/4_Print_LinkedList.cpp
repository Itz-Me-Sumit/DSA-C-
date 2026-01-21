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

    int arr[5] = {1 , 2 , 3 , 4, 5};

    // Insertion Of Node.

    Node *Head = NULL;

    for(int i = 0 ; i<5 ; i++){    

        // If Linked_List Doesn't Exist.

            if(Head == NULL){

                Head = new Node(arr[i]);

            }
        // if Linked_List Already Exists.
            else{

                Node *temp;

                temp = new Node(arr[i]);
                temp -> next = Head;
                Head = temp;

            }
           
    }

    // Print Linked_List.

    Node *temp = Head;

    while(temp != NULL){

        cout<<temp -> data <<" ";
        temp = temp -> next;

    }

}