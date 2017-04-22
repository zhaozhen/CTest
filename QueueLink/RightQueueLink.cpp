#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 6

int intArray[MAX];
int itemCount=0;

int peek(){
	return intArray[itemCount-1];
}
int isEmpty(){
	return itemCount==0;
}
bool isFull(){
	return itemCount==MAX;
}
int size(){
	return itemCount;
}
void insert(int data){
	int i=0;
	if(!isFull()){
		if(itemCount==0){
			intArray[itemCount++]=data;
		}else{
			for(i=itemCount-1;i>=0;i--){
				if(data>intArray[i]){
					intArray[i+1]=intArray[i];
				}else{
					break;
				}
			}
			intArray[i+1]=data;
			itemCount++;
		}
	}
}

int removeData(){
	return intArray[--itemCount];
}

int main(int argc, char const *argv[])
{
	insert(3);
	insert(5);
	insert(9);
	insert(1);
	insert(12);
	printf("the elements is \n");
	while(!isEmpty()){
		int n=removeData();
		printf("%d\n",n);
	}
	return 0;
}