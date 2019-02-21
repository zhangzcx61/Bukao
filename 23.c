#include <stdio.h>

#define    N    80

void fun(int *w, int p, int n)
{
/**********Program**********/
    int a[N],i,j;
    for(i=0;*(w+i)!='\0';i++)
        a[i]=*(w+i);
    for(i=p;i<n;i++,w++)
        *w=a[i];
    for(i=0;i<p;i++,w++)
        *w=a[i];







/**********  End  **********/
}

void main()
{
    int  a[N]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int  i,p,n=15;
    printf("The original data:\n");
    for(i=0; i<n; i++)
        printf("%3d",a[i]);
    printf("\n\nEnter  p:  ");
    scanf("%d",&p);
    fun(a,p,n);
    printf("\nThe data after moving:\n");
    for(i=0; i<n; i++)printf("%3d",a[i]);
    printf("\n\n");
}
