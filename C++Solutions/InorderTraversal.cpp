// C++ program to print inorder traversal
// using stack.
#include<iostream>
#include<stack>
using namespace std;

/* A binary tree Node has data, pointer to left child
and a pointer to right child */
struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
	Node (int data)
	{
		this->data = data;
		left = right = NULL;
	}
};

/* Iterative function for inorder tree
traversal */
void inOrder(struct Node *root)
{
    stack <Node*> nums;
    Node* current=root;
    nums.push(current);
    while(current!=NULL || !(nums.empty())){  
        while(current!=NULL){ 
            cout<<current->data<<" ";
            nums.push(current);
            current=current->left;           
            
        }    
        current=nums.top();                    
        nums.pop();

        nums.push(current);        
        current=current->right;   
    
    }
}

/* Driver program to test above functions*/
int main()
{

	/* Constructed binary tree is
			1
			/ \
		2	 3
		/ \
	4	 5
	*/
	struct Node *root = new Node(1);
	root->left	 = new Node(2);
	root->right	 = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);

	inOrder(root);
	return 0;
}
