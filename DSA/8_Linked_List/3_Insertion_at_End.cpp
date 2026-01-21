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

    int arr[5] = { 1 , 2 , 3 , 4 , 5 };

    /* 1) Hamne pehle do pointers banaya named " head and tail " hamne use "Node type" ka pointer banaya jisse wo data aur adderess dono store kar sake*/
    
    Node *head;
    Node *tail;

    /* aab jaise hi hamne "head and tail = NULL" kiya to jaisa hamne class banaya hua tha jo value aur address dono store karta hai to NULL karte hi wo address me NULL fill kar dega apne aap */

    head = NULL;
    tail = NULL;

        for(int i = 0 ; i < 5 ; i++){
            
            // If Node Doesn't Exist.
            
            if(head == NULL){

                head = new Node(arr[i]); /* Hamne pehle ek new Node create kiya , aab kyuki Node me value dalte hi wo do chiz karta hai value ko as data store kar leta hai and next ko NULL kar deta hai */
                
                tail = head; /* here we stores address of head into tail */

            }

            else{

                tail -> next = new Node(arr[i]);
                /* Note:- pehle hamne head ka address ko tail me store kar rakha tha jo ki tail ke next me jake save hua hoga okay.
                To to "tail -> next " ko open karke usme new node ka address save kar rhe hai. */

                /* but main point tail ka address to head ke address ko point kar rha hai to jaise hi ham ye karte hai to...
                head ke next pe jake new node ka address store ho jata hai. */

                tail = tail -> next;
            
            }

        }

        Node *temp ;
        temp = head;

        while(temp){

            cout<<temp -> data<<" ";
            temp = temp -> next;

        }

        cout<<endl;

        temp = head;
        int count = 0;
        while(temp){

            count++;
            temp = temp -> next;

        }

        cout<<count;

}


