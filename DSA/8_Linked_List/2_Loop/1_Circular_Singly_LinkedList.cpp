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

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    Node *head = NULL , *tail = NULL;
    for(int i=0 ; i<10 ; i++){
        if(head == NULL){
            head = new Node(arr[i]);
            tail = head;
        }
        else{
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }
    tail->next = head;

    int count = 0;
    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
        if(temp->data == 1){
            count++;
        }
        if(count == 3){
            break;
        }
    }
}