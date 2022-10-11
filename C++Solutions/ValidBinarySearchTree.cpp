#include<iostream>
using namespace std;
#include<queue>


struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	
	TreeNode() : val(0), left(nullptr), right(nullptr){}
	
	TreeNode(int x) : val(x) , left(nullptr), right(nullptr){}
	
	TreeNode(int x,TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
	
};

TreeNode* createNode(int x){
	TreeNode* newNode= new TreeNode(x);
	
	return newNode;
	
};

bool isValidBST(TreeNode* root){
	queue<pair<TreeNode*,int>> que;

    pair<TreeNode*,int> p;
    p.first = root;
    p.second = 1;
	
	que.push(p);

    int rootVal = root->val;
	
	while(!que.empty()){
        int side = que.front().second;
	    TreeNode *head = que.front().first;
		
		que.pop();
		
		
		if(head->left != NULL){
            int lval = head->left->val;
			if(lval < head->val){
                
                if(side == 0){
                    if (rootVal > lval)
                    {
                        pair<TreeNode*,int> pl(head->left,0);
                        que.push(pl);
                    }else{
                        return false;
                    }
                    
                }else{
                    if (rootVal < lval)
                    {
                        pair<TreeNode*,int> pl(head->left,0);
                        que.push(pl);
                    }else{
                        return false;
                    }
                }
			   
		    }else{
			   return false;
		    }
		}
		
		if(head->right != NULL){
            int rval = head->right->val;
			if(rval > head->val){
                
                if(side == 0){
                    if (rootVal > rval)
                    {
                        pair<TreeNode*,int> pl(head->right,1);
                        que.push(pl);
                    }else{
                        return false;
                    }
                    
                }else{
                    if (rootVal < rval)
                    {
                        pair<TreeNode*,int> pl(head->right,1);
                        que.push(pl);
                    }else{
                        return false;
                    }
                }
			   
		    }else{
			   return false;
		    }
		}
		
		
	}
	
	return true;
};

int main(){

    TreeNode *root = createNode(5);
	root->left = createNode(4);
	root->right = createNode(6);
	root->right->left = createNode(3);
	root->right->right= createNode(7);
	
	TreeNode *root2 = createNode(2);
	root2->left = createNode(1);
	root2->right = createNode(3);
	
	cout<<"is valid: "<<isValidBST(root)<<endl;
    return 0;

}