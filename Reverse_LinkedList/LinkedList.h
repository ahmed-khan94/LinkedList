#pragma once

#include<iostream>

using namespace std;


struct node {
	int val;
	node *link;
};

class LinkedList
{
public:
	node* first = new node;
	node* prev = new node;
	node* curr = new node;
	node* next = new node;

public:

	LinkedList()
	{
		first = '\0'; // To make first node of linked list NULL on creation.
	}

	//Insertion of temporary data in newly created Linked list
	void insert_temp_data()
	{
		first = '\0';
		prev = '\0';
		curr = '\0';

		node* newnode=new node;

		for (int i = 1; i <= 20; i++)
		{
			if (first == '\0')
			{
				newnode->val = i;
				newnode->link = '\0';
				first = newnode;
				curr = newnode;
				prev = newnode;
			}
			else
			{
				newnode = new node;
				curr = newnode;
				curr->val = i;
				curr->link = '\0';
				prev->link = curr;
				prev = curr;
			}
		}
	}

	//Display Current Linked List
	void display_data()
	{
		if (first != '\0')
		{
			curr = first;
			while (true)
			{
				cout << curr->val << ", ";
				curr = curr->link;
				if (curr == '\0')
					break;
				else
					continue;
			}
		}
	}

	//Reversing Current Linked List
	void reverse_list()
	{
		if (first!='\0')
		{
			curr = first;
			prev = '\0';
			next = '\0';
			while (true)
			{
				next = curr->link;
				curr->link = prev;
				prev = curr;
				curr = next;
				if (curr->link == '\0')
					break;
				else
					continue;
			}
			curr->link = prev;
			first = curr;
		}
	}

	~LinkedList()
	{
	}
};

