#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* createNode(int val){

    TreeNode* root = new TreeNode(val);
    return root;

}
int maxdepth = 0;
int pathsum=0;

int maxDepth(TreeNode* root){

    if(root == NULL){
        return pathsum;
    }

    pathsum++;

    if (root->left == NULL && root->right == NULL){
        if (maxdepth < pathsum)
        {
            maxdepth = pathsum;
        }

        return pathsum--;
    }

    maxDepth(root->left);
    maxDepth(root->right);

    pathsum--;

    return maxdepth;
    
}

int maxDepth2(TreeNode* root) {
    if(!root) return 0;
    int maxLeft = maxDepth(root->left);
    int maxRight = maxDepth(root->right);
    return max(maxLeft, maxRight)+1;
}


int main(){
        //Level 1
    TreeNode* root = createNode(25); 
    //Level 2
    root->left = createNode(15);
    root->right = createNode(50);
    //Level 3
    root->left->left = createNode(10);
    root->left->right = createNode(22);
    root->right->left = createNode(35);
    root->right->right = createNode(70);
    //Level 4
    root->left->right->left = createNode(18);
    root->left->right->right = createNode(24);
    root->right->right->left = createNode(66);
    root->right->right->right=createNode(90);
    root->left->left->left = createNode(4);
    root->left->left->right=createNode(12);
    root->right->left->right=createNode(44);

    int max = maxDepth2(root);

    cout<<"Max Depth: "<<max<<endl;
}