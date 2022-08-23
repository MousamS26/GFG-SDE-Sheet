#include "bits/stdc++.h"
using namespace std;

struct Node
{
	int data;
	Node *next; //self referential structure
	Node(int x) //constructor
	{
		data = x;
		next = NULL;
	}
};

void traverseLL(Node *head)
{
	Node *curr = head;
	while (curr != NULL)
	{
		cout << (curr->data) << " ";
		curr = curr->next;
	}
}
int main()
{
	Node *head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);
	traverseLL(head);
	return 0;
}