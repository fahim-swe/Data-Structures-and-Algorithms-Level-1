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

	for(int i = 0; i < n; i++){
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

	for(int i = 0; i < node->children.size(); i++){
		cout << node->children[i]->data << " ";
	}

	cout << endl;

	for(int i = 0; i < node-> children.size(); i++){
		display_Tree(node-> children[i]);
	}
}


int max_of_generic_tree(Node *node)
{
	int mx = INT_MIN;

	for(int i = 0; i < node-> children.size(); i++)
	{
		mx = max(mx, max_of_generic_tree(node->children[i]));
	}

	return max(mx, node-> data);
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

	cout << "Max of generic tree: ";

	cout << max_of_generic_tree(root) << endl;
}