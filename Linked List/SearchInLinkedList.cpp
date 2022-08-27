#include "bits/stdc++.h"
using namespace std;

struct Node
{
	int data;
	Node* next;
	Node(int x)
	{
		data = x ;
		next = nullptr;
	}
};
int searchInLL(Node*head, int x)
{
	Node* curr = head;
	int pos = 1;
	while (curr != nullptr)
	{
		if (curr->data != x)
		{
			curr = curr->next;
			pos++;
		}
		else
			return pos;
	}
	return -1;
}

int main()
{
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);

	int position = searchInLL(head, 30);
	cout << position << endl;
}