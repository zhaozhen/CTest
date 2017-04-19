#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
	int key;
	int data;
	struct node *next;
};

struct node *head=NULL;
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
	head=head->next;
	return tempLink;
}

void pritList(){
	struct node* ptr=head;
	printf("\n[");

	if(head!=NULL){
		while(ptr->next!=ptr){
			printf("(%d,%d)",ptr->key,ptr->data);
			ptr=ptr->next;
		}
	}
	printf("]\n");

}
int main(int argc, char const *argv[])
{
	insertFist(1,10);
	insertFist(2,20);
	insertFist(3,30);
	insertFist(4,1);
	insertFist(5,4);
	insertFist(6,56);

	printf("print Origin List\n");
	pritList();

	while(!isEmpty()){
		struct node* temp=deleteFirst();
		printf("delete the value");
		printf("(%d,%d)\n",temp->key,temp->data);
	}

	printf("delete after");
	pritList();

	return 0;
}