#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 6

int intArray[MAX];
int front =0;
int rear =-1;
int itemCount=0;

int  peek(){
	return intArray[front];
}
bool isEmpty(){
	return itemCount==0;
}
bool isFull(){
	return itemCount==MAX;
}
int size(){
	return itemCount;
}

//opertation
void insert(int data){
	if(!isFull()){
		if(rear==MAX-1){
			rear=-1;
		}
		intArray[++rear]==data;
		itemCount++;
	}
}

int removeData(){
	int data=intArray[front++];
	if(front==MAX){
		front=0;
	}
	itemCount--;
	return data;
}

int main(int argc, char const *argv[])
{
	
	insert(3);
	insert(3);
	insert(9);
	insert(1);
	insert(12);

	int num=removeData();
	printf("%d\n",num);
	return 0;
}