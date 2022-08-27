#include "bits/stdc++.h"
using namespace std;

struct Node
{
	int data;
	Node* next;
	Node(int x)
	{
		data = x;
		next = nullptr;
	}
};

Node* deleteLastNode(Node* head)
{
	if (head == nullptr) //For 0 node
		return nullptr;
	if (head->next == nullptr) //For 1 node
	{
		delete head;
		return nullptr;
	}
	Node* curr = head;
	while (curr->next->next != nullptr)
		curr = curr->next;
	delete(curr->next);
	curr->next = nullptr;
	return head;
}

int main()
{
	Node *head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head = deleteLastNode(head);
	for (Node* temp = head; temp != nullptr; temp = temp->next)
		cout << temp->data << " ";
	return 0;
}