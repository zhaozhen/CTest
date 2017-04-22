#include <stdio.h>

#define MAX 20
int intArray[MAX]={1,2,3,4,6,7,9,11,12,14,15,16,17,19,33,34,43,45,55,66};
//print line
void pirntLine(int count){
	int i;
	for (int i = 0; i < count; i++)
	{
		printf("=");
	}
	printf("=\n");
}

int find(int data){
	int comparisons=0;
	int index=-1;
	int i;

	for(i=0;i<MAX;i++){
		comparisons++;
		if(data==intArray[i]){
			index=i;
			break;
		}
	}
	printf("Total comparisons made %d",comparisons);
	return index;
}

void display(){
	int i;
	printf("[");

	for (int i = 0; i < MAX; i++)
	{
		printf("%d ",intArray[i]);
	}
	printf("]\n");
}

int main(int argc, char const *argv[])
{
	printf("Input Array:");
	display();
	pirntLine(50);

	int location=find(55);
	if(location!=-1)
		printf("Element found at location:%d\n",(location+1));
	else
		printf("Element not found\n");
	return 0;
}