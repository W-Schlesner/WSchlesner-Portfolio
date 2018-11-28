#include "Queue.h"

/*
* Non-parametrized constructor
*/
Queue::Queue()
{
	SIZE = 10;
	head = NULL;
	count = 0;
}

/*
* Method to add student to waiting list
*/
void Queue::enqueueStudent(Student value)
{
	if (!isFull())
	{
		node *e = new node();
		e->studentData = value;
		e->next = NULL;
		if (head == NULL)
		{
			head = e;
		}
		else
		{
			node *temp = head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = e;
		}
		count++;
	}
	else
		cout << "Waiting list is full. No space to add new student." << endl;
}

/*
Method to pop student from waiting list and add to course
*/
Student Queue::dequeueStudent()
{
	Student st;
	if (head == NULL)
	{
		cout << "Queue is EMPTY..." << endl;
	}
	else
	{
		st = head->studentData;
		head = head->next;
	}
	return st;
}

/*
* Method to check if stack is empty or not
*/
bool Queue::isEmpty()
{
	if (head == NULL)
		return true;
	return false;
}

/*
* Method to check if stack is full or not
*/
bool Queue::isFull()
{
	if (count == SIZE - 1)
		return true;
	return false;
}

/*
* Method to display the details of students who are in waiting list
*/
void Queue::displayItems()
{
	if (!isEmpty())
	{
		node *temp = head;
		while (temp != NULL)
		{
			Person *ptr;
			ptr = &temp->studentData;
			ptr->print();
			temp = temp->next;
		}
		cout << endl;
	}
	else
		cout << "Stack is EMPTY!!!" << endl;
}
