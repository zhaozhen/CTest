#include <stdio.h>

int MAXSIZE=8;
int stack[8];
int top=-1;

int isEmpty(){
	if(top==-1){
		return 1;
	}else{
		return 0;
	}
}

int isFull(){
	if(top==MAXSIZE){
		return 1;
	}else{
		return 0;
	}
}

int peek(){
	return stack[top];
}
int pop(){
	int data;
	if(!isEmpty()){
		data=stack[top];
		top=top-1;
		return data;
	}else{
		printf("Could not retrieve data,Stack is empy\n");

	}
}

int push(int data){
	if(!isFull()){
		top=top+1;
		stack[top]=data;
	}else{
		printf("Could not insert data,Stack is full");
	}
}


int main(int argc, char const *argv[])
{
	push(3);
	push(5);
	push(9);
	push(1);
	push(12);
	push(15);
while(!isEmpty()){
	int data=pop();
	printf("%d\n",data);
}

	printf("Stack full:%s\n",isFull()?"true":"false");
	printf("Stack empty:%s\n",isEmpty()?"true":"false");

	return 0;
}


