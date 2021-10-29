#include<bits/stdc++.h>
using namespace std;
struct Node{
	int key;
	struct Node* left;
	struct Node* right;
	Node(int key)
	{
		this->key=key;
		left=right=NULL;
	}
};
void iterativePreorder(struct Node* root)
{
	if(root==NULL)
	   return;
	stack<Node*> st;
	Node* curr=root;
	while(curr!=NULL||st.empty()==false)
	{
		while(curr!=NULL)
		{
			cout<<(curr->key)<<" ";
			if(curr->right!=NULL)
			   st.push(curr->right);
			curr=curr->left;
		}
		if(st.empty()==false){
			curr=st.top();
			st.pop();
		}
	}
}
int main()
{
	struct Node* root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	root->left->left->left=new Node(70);
	root->left->left->right=new Node(80);
	root->left->right->right=new Node(90);
	iterativePreorder(root);
	return 0;
	
}
