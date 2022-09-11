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
}
Node* delHead(Node* head)
{
	if (head == NULL)
		return NULL;
	if (head->next == NULL) {
		delete head;
		return NULL;
	}
	head->data = head->next->data;
	Node* temp = head->next;
	head->next = head->next->next;
	delete temp;
	return head;
}