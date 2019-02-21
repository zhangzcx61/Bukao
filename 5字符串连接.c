#include <stdio.h>
void main()
{
    char str1[200];
    char str2[80];
    void scat(char *s1,char *s2);
    printf("请输入第1个字符串:");
    gets(str1);
    printf("请输入第2个字符串:");
    gets(str2);
    scat(str1,str2);
    printf("连接后的字符串：%s\n",str1);
}
void scat(char *s1,char *s2) //将s2字符串连接到s1串之后
{
    char *p,*q;

    /**********Program**********/
    p=s1,q=s2;
    for(;*p!=0;p++);
    for(;*q!=0;p++,q++)
        *p=*q;
     *p=0;





    /**********  End  **********/
}
