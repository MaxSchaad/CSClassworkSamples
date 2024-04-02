#pragma once
#include <iostream>
using namespace std;

class Stack {


private:

	int* arr; // (The array used to store values)
	int capacity; // (The max size of the Stack)
	int count; // (The current size of the Stack)

public:

	Stack(int size); // Constructor for the class, takes in the total amount of elements the stack can hold
	~Stack() // Destructor for Stack. WILL TALK ABOUT THIS

	int pop(); // Takes the int off the top of the Stack and returns it
	void push(int data); // Takes an int, and places it at the top of the stack
	int peek(); // Returns the value at the top of the Stack, but does not remove it
	int size(); // Returns the current size of the Stack
	bool isEmpty(); // Return true if the Stack is at capacity, false otherwise

};