#include "bits/stdc++.h"
using namespace std;

struct Node
{
	int data;
	Node* next;
	Node* prev;
	Node(int z)
	{
		data = z;
		next = NULL;
		prev = NULL;
	}
};
Node* insertAtTail(Node* head, int y)
{
	Node* temp = new Node(y);
	if (head == NULL)
	{
		temp->next = temp;
		temp->prev = temp;
		return temp;
	}
	temp->prev = head->prev;
	temp->next = head;
	head->prev->next = temp; //changing links of last node of LL
	head->prev = temp; //changing old head links
	return head;
	//this is same as insertAtHead, just dont return modified head.
}
void traverse(Node* head)
{
	if (head == NULL)
		return;
	cout << (head->data) << " ";
	for (Node* f = head->next; f != head; f = f->next)
		cout << (f->data) << " ";
}

int main()
{
	Node* head = new Node(10);
	Node* one = new Node(20);
	Node* two = new Node(30);
	Node* three = new Node(40);

	head->prev = three;
	head->next = one;
	one->prev = head;
	one->next = two;
	two->prev = one;
	two->next = three;
	three->prev = two;
	three->next = head;
	head = insertAtTail(head, 5);
	traverse(head);
}