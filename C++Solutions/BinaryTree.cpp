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
    vector<pair<Node*,int>> que;

    pair<Node*, int> newNode;
    newNode.first = root;
    newNode.second = 1;

    que.push_back(newNode);

    while (que.size() != 0) // size = 2
    {
        Node* currNode = que[0].first; // 6
        int side = que[0].second;
        
        if (side == 0){
            cout<<currNode->data<<endl;
        }
        
        
        //cout<<currNode->data<<endl;

        que.erase(que.begin());

        if(currNode->left!=NULL){
            pair<Node*, int> nodeLeft;
            nodeLeft.first = currNode->left;
            nodeLeft.second = 0;

            que.push_back(nodeLeft);

        }

        if(currNode->right!=NULL){
            pair<Node*,int> nodeRight;
            nodeRight.first = currNode->right;
            nodeRight.second = 1;
            que.push_back(nodeRight);
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
    leftView(root);
    //cout<<leafNodes(root,0)<<endl;
}