#include<iostream>
using namespace std;
#include<vector>
#include<stack>


struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

 vector<int> inorderTraversal(TreeNode* root){
    vector<int> indorList;

    stack<TreeNode*> stack;

    //pair<TreeNode*,int> n1;
    // n1.first = root;
    // n1.second = 1;

    stack.push(root);

    while (!stack.empty()){
        TreeNode* curr = stack.top();

        stack.pop();

        indorList.push_back(curr->val);


        if(curr->left!=NULL){
            stack.push(curr->left);
        }
        
        if (curr->right!=NULL){
            stack.push(curr->right);
        }



        

    }

    return indorList;
 }

 TreeNode* createNode(int val){
    TreeNode* newNode = new TreeNode(val);
    return newNode;
 }

 int main(){
    TreeNode* root= new TreeNode(1);

    root->left= nullptr;
    root->right= createNode(2);
    root->right->left = createNode(3);

    vector<int> result = inorderTraversal(root);

    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    



 }

