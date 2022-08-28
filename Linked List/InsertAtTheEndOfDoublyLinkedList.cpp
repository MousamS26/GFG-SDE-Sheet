#include "bits/stdc++.h"
using namespace std;

struct Node
{
	int data;
	Node* prev;
	Node* next;
	Node(int x)
	{
		data = x;
		prev = NULL;
		next = NULL;
	}
};
Node* insertAtEnd(Node* head, int x)
{
	Node* temp = new Node(x);
	if (head == NULL)
		return temp;
	Node* curr = head;
	while (curr != NULL)
		curr = curr->next;

	curr->next = temp;
	temp->prev = curr;
	return head;
}