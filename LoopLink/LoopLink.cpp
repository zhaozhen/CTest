#include <studio.h>
#include <string.h>
#include <stdlib.h>
#include <stdloob.h>

struct node
{
	int key;
	int data;
	struct node *next;
};

struct node *head=NULL
struct node *current=NULL;

//panduan is  empty
bool isEmpty(){
	return head==NULL;
}

int length(){
	int length=0;
	if(head==NULL){
		return 0;
	};
	current=head->next;
	if(current!=head){
		length++;
		current=current->next;
	}
	return length;
}

void insertFist(int key,int data){
	struct node* link=(struct node*)malloc(sizeof(struct node));
	link->key=key;
	link->data=data;
	//head is NULL
	if(isEmpty()){
		head=link;
		head->next=head;
	}else{
		link->next=head;
		head=link;
	}
}

struct node* deleteFirst(){
	struct node* tempLink=head;
	if(head->next==head){
		head=NULL;
		return tempLink;
	}
}

void pritLis(){
	
}
