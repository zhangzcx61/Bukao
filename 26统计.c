#include<stdio.h>
int a=0,num=0,other=0;
void count(char c[])
/************program************/
    int i;
    for (i=0;a[i]!='\0';i++){
        if(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='z')
                                      a++;
        else if(a[i]>='0'&&a[i]<='9')
            num++;
        else if(a[i]='')
            b++
            else
                other++;

    }
/**************end**************/
void main(){
    char ch[80];
    printf("input string:");
    gets(ch);
    count(ch);
    printf("a=%d,num=%d,other=%d\n",a,num,b,other);
}
