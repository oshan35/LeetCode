#include<iostream>
using namespace std;

// 
// Implimentation of linked List class
// LinkedList l1;
// l1.addNode(1);
// l1.addNode(2);
// l1.removeNode()

// 2,3,5,6 = [1,3,8,5,6] = O(n)
// 2 -> 3 -> 5 -> 6 -> 7 = O(1)


class LinkedList{

    class Node{
        public:
            int data;
            Node* next;

            // Node(int date, Node* next){
            //     this->data = data;
            //     this->next = next;
            // }
    };





    public:
    Node* head; // 7

    LinkedList(){
        head = new Node();
    }

    void addNode(int data){
        Node* newNode = new Node();
        newNode->data = data;
        Node* temp = head;
        // 2 -> 3 -> 5 -> 6 -> 7 -> data
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        //head -> 7 - address
        temp->next = newNode;
    

    }

    void print()
    {
        while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

};




 

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



