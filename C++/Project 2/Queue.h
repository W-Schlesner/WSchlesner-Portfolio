#ifndef QUEUE_HEADER
#define QUEUE_HEADER

#include <iostream>
#include "Student.h"

using namespace std;

struct node
{
	Student studentData;
	node *next;
};

class Queue
{
private:
	int SIZE;
	node *head;
	int count;
public:
	/*
	* Non-parametrized constructor
	*/
	Queue();

	/*
	* Method to add student to waiting list
	*/
	void enqueueStudent(Student value);


	/*
	Method to pop student from waiting list and add to course
	*/
	Student dequeueStudent();

	/*
	* Method to check if stack is empty or not
	*/
	bool isEmpty();

	/*
	* Method to check if stack is full or not
	*/
	bool isFull();

	/*
	* Method to display the details of students who are in waiting list
	*/
	void displayItems();

};
#endif // !QUEUE_HEADER
