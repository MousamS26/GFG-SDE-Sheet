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
Node* delFirstNode(Node* head)
{
	if (head == NULL)
		return NULL;
	if (head->next == NULL)
		return NULL;
	Node* temp = head;
	head = head->next;
	head->prev = NULL;
	delete temp;
	return head;
}
int main()
{
	Node* head = new Node(10);
	Node* temp1 = new Node(20);
	Node* temp2 = new Node(30);

	head->next = temp1;
	temp1->prev = head;
	temp1->next = temp2;
	temp2->prev = temp1;

	head = delFirstNode(head);   //Always store whatever is being returned by Function in a variable.
	for (Node* tempo = head; tempo != NULL; tempo = tempo->next)
		cout << tempo->data << " ";
	return 0;
}