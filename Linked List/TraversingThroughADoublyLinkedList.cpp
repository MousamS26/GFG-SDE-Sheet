#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
	Node* prev;
	Node(int x)
	{
		data = x;
		next = NULL;
		prev = NULL;
	}
};
void traversingForward(Node *head)
{
	Node* curr = head;
	while (curr != NULL)
	{
		cout << curr->data << " ";
		curr = curr->next;
	}
}
void traversingBackward(Node* head)
{
	Node* tail = head;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	while (tail != NULL)
	{
		cout << tail->data << " ";
		tail = tail->prev;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	Node* head = new Node(10);
	Node* temp1 = new Node(20);
	Node* temp2 = new Node(30);
	Node* temp3 = new Node(40);

	head->next = temp1;
	temp1->prev = head;
	temp1->next = temp2;
	temp2->prev = temp1;
	temp2->next = temp3;
	temp3->prev = temp2;

	traversingForward(head);
	cout << "\n";
	traversingBackward(head);
}