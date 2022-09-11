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

Node* insertAtTheHead(Node* head, int x)
{
	Node* temp = new Node(x);
	if (head == NULL)
	{
		temp->next = temp;  //IF LL EMPTY
		return temp;
	}
	else
	{
		temp->next = head->next;
		head->next = temp;
		int exchange = head->data;
		head->data = temp->data;
		temp->data = exchange;
		return head;
	}
}
int main()
{
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);
	head->next->next->next->next = head;
}