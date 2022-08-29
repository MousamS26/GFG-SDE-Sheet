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