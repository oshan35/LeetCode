#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* next;

        // Node(int date, Node* next){
        //     this->data = data;
        //     this->next = next;
        // }
};

void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}
 

int main(){
    Node* head = NULL; // 0xdshjbdd
    Node* firstNode = NULL; // 0xbhwdfbhf
    Node* secondNode = NULL; // 0xnjkwd
    Node* tail = NULL;


    head = new Node();
    firstNode = new Node();
    secondNode = new Node();
    tail = new Node();

    head -> data = 1;
    head -> next = firstNode;

 
    firstNode-> data = 2;
    firstNode-> next = secondNode;


    
    secondNode-> data = 3;
    secondNode-> next = tail;


    tail -> data = 4;
    tail -> next = nullptr;


    printList(secondNode);

    // while (firstNode != NULL)
    // {
    //     cout<<head->data<<" ";
    //     head = head->next;

    // }
    
}



