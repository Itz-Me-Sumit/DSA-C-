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

Node* LinkedList(int a[] , int index , int size){

    if(index == size){

        return NULL;

    }
    
    Node *temp;
    temp = new Node(a[index]);
    temp -> next = LinkedList(a , index+1 , size);
    
    return temp;

}


int main(){

    Node *head;
    head = NULL;

    int arr[5] = {1,2,3,4,5};
    head = LinkedList(arr , 0 , 5);

    for(int i = 0 ; i < 5 ; i++){

        cout<<head -> data <<" ";
        head = head -> next ;

    }

}
