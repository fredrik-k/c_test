#include "linkedlist.h"
#include <limits.h>
#include <stdlib.h>


// Creats a empty list
struct Node * initializeList(){
	struct Node *head;
	head = (struct Node *)malloc(sizeof(struct Node));
	head -> next = 0;
	return head;
}

// Inserts number num at the begining of the list
void addFirst(struct Node *head, int num){
	
	struct Node *temp;

	temp = (struct Node *)malloc(sizeof(struct Node));
	temp -> data = num;

	if((head -> next) == 0){
		head -> next = temp;
		temp -> next = 0;
	}else{
		temp -> next = head -> next;;
		head -> next = temp;
	}


}
// Inserts number num at the end of the list
void addEnd(struct Node *head, int num){
	
	struct Node *temp;

	temp = (struct Node *)malloc(sizeof(struct Node));
	temp -> data = num;
	
	if((head -> next) == 0){
		head -> next = temp;
		temp -> next = 0;
	}else{

	}

}
// Inserts number num at the place p of the list. If the list is 
// shorter than p, has the same function as addEnd(int num).
void addAtP(struct Node *head, int num, int p){

}

// Returns first value of the list without removing it. Returns 
// INT_MAX from "limits.h" if the list is empty.
int peekfirst(struct Node *head){
	return 0;
}
// Returns last value of the list without removing it. Returns 
// INT_MAX from "limits.h" if the list is empty.
int peekEnd(struct Node *head){
	return 0;
}
// Returns value at point p of the list without removing it. Returns 
// INT_MAX from "limits.h" if the list is shorter than p.
int peekP(struct Node *head, int p){
	return 0;
}

// Removes the first node and removes its value. Returns 
// INT_MAX from "limits.h" if the list is empty.
int getFirst(struct Node *head){
	return 0;
}
// Removes the last node and returns its value. Returns 
// INT_MAX from "limits.h" if the list is empty.
int getLast(struct Node *head){
	return 0;
}
// Removes the node at point p and returns its value. Returns 
// INT_MAX from "limits.h" if the list is shorter than p.
int getP(struct Node *head, int p){
	return 0;
}

//Removes first node without returning its value. Returns true if 
// list is non-empty. 
int removeFirst(struct Node *head){
	return 0;
}
//Removes last node without returning its value. Returns true if 
// list is non-empty. 
int removeLast(struct Node *head){
	return 0;
}
// Removes node at p without returning its value. Returns false if 
// the list is shorter than p. 
int removeAtP(struct Node *head, int p){
	return 0;
}
// Removes all the nodes in the list including the head, nessessary 
// when the list is no longer needed to free memory.
void removeList(struct Node *head){

}

//Returns the number of nodes in the list.
int getSize(struct Node *head ){
	return 0;
}

