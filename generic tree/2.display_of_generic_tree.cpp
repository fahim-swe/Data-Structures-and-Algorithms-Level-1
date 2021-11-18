#include <bits/stdc++.h>
using namespace std;


struct Node
{
	int data;
	vector<Node*> children;
};



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
				st.top()-> children.push_back(t);
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
	cout << node-> data << " -> ";

	for(int i = 0; i < node-> children.size(); i++){
		cout << node-> children[i] -> data << " ";
	}

	cout << endl;

	for(int i = 0; i < node-> children.size(); i++){
		display_Tree(node->children[i]);
	}
}

int main()
{
	

	int a[] =  {10, 20, 50, -1, 60, -1, -1, 30, 70, -1, 80, 110, -1, 120, -1, -1, 90, -1, -1, 40, 100, -1, -1, -1};


	Node *root = construct_of_generic_tree(a, sizeof(a)/sizeof(a[0]));
	display_Tree(root);
}
