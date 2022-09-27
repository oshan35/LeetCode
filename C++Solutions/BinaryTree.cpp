#include<iostream>
using namespace std;
#include<vector>

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}
// que = [7,9]

void leftView(Node* root){
    vector<Node*> que;

    que.push_back(root);

    while (que.size() != 0) // size = 2
    {
        Node* currNode = que[0]; // 6

        cout<<currNode->data<<endl;

        que.erase(que.begin());

        if(currNode->left!=NULL){
            que.push_back(currNode->left);
        }

        if(currNode->right!=NULL){
            que.push_back(currNode->right);
        }

    }   

}

int leafNodes(Node* root,int num){
    if(root == NULL){
        return num;
    }

    if(root->left == NULL && root->right ==NULL){
        return num++;
    }else{
        leafNodes(root->left,num);
        leafNodes(root->right,num);
    }

    return num;
}

int main()
{
    //Level 1
    Node* root = createNode(1);
    //Level 2
    root->left = createNode(2);
    root->right = createNode(3);
    //Level 3
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    //Level 4
    root->left->right->left = createNode(9);
    root->right->right->left = createNode(15);

    //printTree(root);
    //vector<int> result = leftView(root);
    //leftView(root);
    cout<<leafNodes(root,0)<<endl;
}