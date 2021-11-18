#include <bits/stdc++.h>
using namespace std;


struct Node
{
	int data;
	vector<Node*> children;
};


Node* newNode(int key)
{
	Node *temp = new Node;
	temp-> data = key;

	return temp;
}

Node* construct(int a[], int n)
{
	Node *root;

	stack<Node*> st;

	for(int i = 0; i < n; i++)
	{
		if(a[i] == -1){
			st.pop();
		}
		else{
			Node* t = newNode(a[i]);
			if(st.size() > 0)
			{
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
	cout << node-> data << "-> ";

	vector<Node*> children = node-> children;

	for(Node *child: children){
		cout << child-> data << ", ";
	}

	cout << ".\n";

	for(Node *child: children){
		display_Tree(child);
	}
}



int main()
{
	

	int a[] =  {10, 20, 50, -1, 60, -1, -1, 30, 70, -1, 80, 110, -1, 120, -1, -1, 90, -1, -1, 40, 100, -1, -1, -1};


	Node* root = construct(a, sizeof(a)/sizeof(a[0]));

	// Display Node

	display_Tree(root);


}