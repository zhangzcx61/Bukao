#include  <stdio.h>
#include  <stdlib.h>
#define   N   15
int  fun( int *s, int x){
/**********Program**********/
    int i=0;
    while(s[i]!=x&&i!=15)
    {i++;}
    if(i!=15)
        return i;
    else return -1;

    /**********  End  **********/
}
void main(){
    int a[N]={ 29,13,5,22,10,9,3,18,22,25,14,15,2,7,27},i,x,index;
    printf("a数组中的数据 :\n");
    for(i=0; i<N; i++) printf("%4d",a[i]);
    printf("\n");
    printf("给x输入待查找的数 :  ");
    scanf("%d",&x);
    index=fun( a, x );
    printf("index=%d\n",index);}
}
