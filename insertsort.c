#include<stdio.h>
#define M 10

void Crelist(int a[])
{
	int i;
	for(i=1;i<=M;i++)
		scanf("%d",&a[i]);
}

/*你实现的sortThree的代码将出现在这里*/
void SortThree(int a[])
{
	int i=0,j=0;
	int tmp=0;
	for(i=1;i<M+1;i++){
		tmp=a[i];
		j=i;
		while(j>0 && a[j-1]>tmp){
			a[j]=a[j-1];
			j--;
		}
		a[j]=tmp;
	}
	for(i=0;i<M;i++){
		printf("%d ",a[i]);
	}
}
int main()
{
	int a[M+1];
	Crelist(a);
	SortThree(a);

}
