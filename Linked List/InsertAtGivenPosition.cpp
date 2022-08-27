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

Node *insertAtPos(Node* head, int pos, int data)
{
	Node *temp = new Node(data);

	if (pos == 1) //if inserting at first position
	{
		temp->next = head;
		return temp;
	}
	Node* curr = head;
	for (int i = 1; i <= pos - 2 && curr != NULL; i++)
		curr = curr->next;
	if (curr == NULL)  //if position out of bound
		return head;

	temp->next = curr->next; //first connecting new node to right half to LL
	curr->next = temp; //then connecting left half of LL to new node
	return head;

}
int main()
{
	Node* head = new Node(100);
	head->next = new Node(200);
	head->next->next = new Node(300);
	head->next->next->next = new Node(500);
	head = insertAtPos(head, 4, 400);
	for (Node* temp = head ; temp != NULL; temp = temp->next)
		cout << temp->data << " ";
	return 0;
}