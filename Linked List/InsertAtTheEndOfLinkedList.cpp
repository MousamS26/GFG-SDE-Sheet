#include "bits/stdc++.h"
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};

Node *insertAtTheEnd(Node *head, int x)
{
	Node *temp = new Node(x);
	if (head == NULL)
		return temp;

	Node *curr = head;
	while (curr->next != NULL)
		curr = curr->next;

	curr->next = temp;
	return head;
}

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
	Node *head = NULL;
	head = insertAtTheEnd(head, 30);
	head = insertAtTheEnd(head, 20);
	head = insertAtTheEnd(head, 10);
	traverseLL(head);
	return 0;
}