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

Node* insertAtBeginning(Node* head, int x)
{
	Node* temp = new Node(x);
	temp->next = head;
	if (head != NULL)
		head->prev = temp;
	return temp;
}
