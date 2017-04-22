#include <stdio.h>

#define MAX 20

int intArray[MAX]={1,2,3,4,6,7,9,11,12,14,15,16,17,19,33,34,43,45,55,66};
void printLine(int count){
	for (int i = 0; i < count; ++i)
	{
		printf("=");
	}
	printf("=\n");
}

int find(int data){
	//shangxian
	int lowerBound=0;
	//xia xian
	int  upperBound=MAX-1;
	int midPoint=-1;
	int comparisons=0;

	int index=-1;
	while(lowerBound<=upperBound){
		printf("comparisons %d,\n",(comparisons+1));

		printf("lowerBound:%d\n ,intArray[%d]=%d\n",lowerBound,lowerBound,intArray[lowerBound]);
		printf("upperBound:%d\n,intArray[%d]=%d\n",upperBound,upperBound,intArray[upperBound] );
		comparisons++;

		midPoint=(lowerBound+upperBound)/2;

		if(intArray[midPoint]==data){
			index=midPoint;
			break;
		}else{
			if(intArray[midPoint]<data){
				lowerBound=midPoint+1;
			}else{
				upperBound+midPoint-1;
			}

		}
	}
	printf("Total comparisons made: %d" , comparisons);
	return index;
}

void display(){
	int i;
	printf("[");
	for ( i = 0; i < MAX; i++)
	{
		printf("%d",intArray[i]);
	}
	printf("]\n");
}

int main(int argc, char const *argv[])
{
	
	printf("This is Element code\n");
	display();
	printLine(50);

	int localtion=find(55);
	if(localtion!=-1)
		printf("\n Element found at localtion:%d",(localtion+1));
	else
		printf("\nElement not found");	
	
	return 0;
}