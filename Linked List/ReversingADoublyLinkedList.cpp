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
Node* reverseDLL(Node* head)
{
	if (head == NULL || head->next == NULL)
		return head;
	Node* prev = NULL;
	Node* curr = head;
	while (curr != NULL)
	{
		prev = curr->prev;      //SWAPPING
		curr->prev = curr->next;//SWAPPING
		curr->next = prev;      //SWAPPING
		curr = curr->prev;
	}
	return prev->prev;
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
}