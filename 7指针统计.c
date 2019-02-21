#include<stdio.h>
#define N 100
void fun(char str[],int*p1,int*p2,int*p3)
{
    int i;

    /**********Program**********/
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            (*p1)++;
        if(str[i]>='A'&&str[i]<='Z')
            (*p2)++;
        if(str[i]>='1'&&str[i]<='9')
            (*p3)++;
    }




        /**********  End  **********/
    }
    void main()
    {
        char str[N];
        int a=0,b=0,c=0;
        gets(str);
        fun(str,&a,&b,&c);
        printf("小写字母个数为a=%d,大写字母个数为b=%d,数字个数为c=%d\n",a,b,c);
    }
