#include<stdio.h>
void main()b
{
    int a=3,b=5;
    void swap(int *,int *);
    printf("Before change :a=%d,b=%d\n",a,b)
        swap(&a,&b);
    printf("After change :a=%d,b=%d\n",a,b);

}
void swap(int *x,int *y){
    /****************program**********/
    int t;
    t=*x;
    *x=*y;
    *y=t;
    /****************end*********/
}

