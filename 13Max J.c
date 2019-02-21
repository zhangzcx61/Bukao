#include <stdio.h>

float Max=0;
int J=0;

float fun(float array[],int n)
{
/**********Program**********/
    int i;
    float s=0;
    for(i=0;i<n;i++)
        if(array[i]>Max)
            Max=array[i];
    for(i=0;i<n;i++)
        if(array[i]==Max)
            J++;
    for(i=0;i<n;i++)
        s=s+array[i];
    s=s/n;
    return s;






/**********  End  **********/
}

void main(  )
{
    float  a[10],ave;
    int i=0;
    for(i=0;i<10;i++)
        scanf("%f",&a[i]);
    ave=fun(a,10);
    printf("ave=%f\n",ave);
    printf("max=%f\n",Max);
    printf("Total:%d\n",J);
}
