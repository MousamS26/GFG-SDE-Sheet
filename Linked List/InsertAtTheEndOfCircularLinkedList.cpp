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
Node* insertAtTheTail(Node* head, int x)
{
	Node* temp = new Node(x);
	if (head == NULL)
	{
		temp->next = temp;
		return temp;
	}
	else
	{
		temp->next = head->next; //inserting after head
		head->next = temp;
		int exchange = temp->data; //swapping data
		temp->data = head->data;
		head->data = exchange;
		return temp;               //returning temp as head
	}
}