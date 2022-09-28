#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int val){
    Node* newNode = new Node();
    newNode->data = val;
    newNode->left=newNode->right = nullptr;
    return newNode;
}

Node* sortedArrayToBST(int arr[],int start,int end){

    if(start>end){
        return NULL;
    }

    Node* root = new Node();
    int middleIndex = (start+end)/2;

    root->data = arr[middleIndex];

    root->left = sortedArrayToBST(arr,start,middleIndex-1);

    root->right = sortedArrayToBST(arr,middleIndex+1,end);

    return root;

}

void printBinTree(Node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    printBinTree(root->left);
    printBinTree(root->right);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    /* Convert List to BST */
    Node *root = sortedArrayToBST(arr, 0, n-1); 
    cout << "PreOrder Traversal of constructed BST \n"; 
    printBinTree(root); 

    return 0;
}