#include <stdio.h>

int a[20],b[20],n;
//这个合并排序算法不能好好使用，我也不知道问什么，真累
void merging(int low,int mid,int hight){
	int l1,l2,i;
	for(l1=low,l2=mid+1,i=low;l1<=mid && l2<=hight;i++){
		if(a[l1]<=a[l2])
			b[i]=a[l1++];
		else
			b[i]=a[l2++];
	}

	while(l1<mid)
		b[i++]=a[l1++];

	while(l2<=hight)
		b[i++]=a[l2++];

	for(i=low;i<=hight;i++){
		a[i]=b[i];
	}
}
void sort(int low,int hight){
	int mid;

	if(low<hight){
		mid=(low+hight)/2;
		sort(low,mid);
		sort(mid+1,hight);
		merging(low,mid,hight);
	}else{
		return ;
	}
}

int main(int argc, char const *argv[])
{
	int i;

	printf("Enter N "); 
	scanf("%d",&n);

	printf("Enter elements\n");

	for(i = 1; i <= n; i++)
		scanf("%d",& a[i]);

	sort(1,n);

	printf("After sorting\n");

	for(i = 1; i <= n; i++)
		printf("%d\n", a[i]);
}