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


int pathsum =0;
bool hasPath = false;

bool hasPathSum(TreeNode* root,int target) {
    int* sum = &pathsum;

    if (root == NULL){
        return hasPath;
    }

    pathsum= pathsum+root->val;

    if(root->left == NULL && root->right ==NULL){
        if(pathsum == target){
            hasPath = true;
        }
        pathsum -= root->val;
        return hasPath;
    }

    hasPathSum(root->left,target);

    //pathsum = pathsum - valLeft;

    hasPathSum(root->right,target);

    pathsum = pathsum - root->val;

    return hasPath;

}





int main()
{
    //Level 1
    TreeNode* root = createNode(25); 
    //Level 2
    root->left = createNode(15);
    //root->right = createNode(50);
    //Level 3
     root->left->left = createNode(10);
     root->left->right = createNode(22);
    //root->right->left = createNode(35);
    //root->right->right = createNode(70);
    //Level 4
    root->left->right->left = createNode(18);
    root->left->right->right = createNode(24);
    // root->right->right->left = createNode(66);
    // root->right->right->right=createNode(90);
    root->left->left->left = createNode(4);
    root->left->left->right=createNode(12);
    // root->right->left->right=createNode(44);
    bool lastval = hasPathSum(root,62);
    cout<<"Has path: "<<lastval<<endl;
    //cout<<printNode(root);
    // for(int i=0;i<size(nums);i++){
    //     cout<<nums[i]<<" ";
    // }
}