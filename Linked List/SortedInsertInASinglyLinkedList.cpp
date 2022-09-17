#include "bits/stdc++.h"
using namespace std;

struct Node
{
	int data;
	Node* next;
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};
Node* sortedInsert(Node* head, int x)
{
	Node* temp  = new Node(x);
	if (head == NULL)
		return temp;
	if (x < head->data)
	{
		temp->next = head;
		return temp;
	}
	Node* curr = head;

	while (curr->next != NULL && curr->next->data < x)
		curr = curr->next;
	temp->next = curr->next;
	curr->next =  temp;
	return head;
}
int main()
{
	Node *head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);

	head = sortedInsert(head, 25);
	for (Node* t = head; t != NULL; t = t->next)
		cout << (t->data) << " " ;
}