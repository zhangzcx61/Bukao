#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void fun(int a[],int n, int *max, int *d)
{
/**********Program**********/
    int i;
    for(i=0,*max=0,*d=0;i<n;i++)
    {
        if( a[i] > *max )  *max=a[i],*d=i;
    }

/**********  End  **********/
}
void main()
{

    int i, x[20], max,  index, n=10;
    srand((unsigned)time(NULL));
    for(i=0;i<n;i++)
    {
        x[i]=rand()%50;
        printf("%4d",x[i]);    /*输出一个随机数组*/
    }
    printf("\n");
    fun(x,n,&max,&index);
    printf("Max=%5d,Index=%4d\n",max,index);
}
