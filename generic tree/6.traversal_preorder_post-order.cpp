#include <bits/stdc++.h>
using namespace std;


struct Node
{
	int data;
	vector<Node*> children;
};


// contruction of tree
Node* construct_of_generic_tree(int a[], int n)
{
	Node *root;

	stack<Node*> st;

	for(int i = 0; i < n; i++)
	{
		if(a[i] == -1){
			st.pop();
		}
		else{
			Node *t = new Node;
			t-> data = a[i];

			if(st.size() > 0){
				st.top()->children.push_back(t);
			}
			else{
				root = t;
			}

			st.push(t);
		}
	}

	return root;
}


void display_Tree(Node *node)
{
	cout << node->data << "-> ";

	for(int i = 0; i < node->children.size(); i++){
		cout << node->children[i]->data << " "; 
	}
	cout << endl;

	for(int i = 0; i < node->children.size(); i++){
		display_Tree(node->children[i]);
	}
}

// preOrder Traversal
void preOrder(Node *node)
{
	cout << node->data << " ";

	for(int i = 0; i < node->children.size(); i++){
		preOrder(node->children[i]);
	}
}


// In order Traversal of tree
void postOrder(Node *node)
{
	for(int i = 0; i < node->children.size(); i++){
		postOrder(node->children[i]);
	}

	cout << node->data << " ";
}



int main()
{
	int n;
	cin>>n;

	int a[n];

	for(int i = 0; i < n; i++){
		cin>>a[i];
	}

	Node *root = construct_of_generic_tree(a, n);

	display_Tree(root);

	cout << "Pre Order Traversal of tree: ";
	preOrder(root);
	cout << endl;


	cout << "Post Order Traversal of tree: ";
	postOrder(root);

}