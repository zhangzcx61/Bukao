#include <stdio.h>
#include <conio.h>
#include <string.h>

#define N 81

void fun(char *str,int n)
{
/**********Program**********/
    char a[N];
    int i;
    for(i=0;i<n;i++)
        a[i]=*(str+i);
    for(i;i>0;i--,str++)
        *str=a[i-1];
    /**********  End  **********/

}
void main()
{
    char s [N];
    int l;
    printf("input a string:");gets(s);
    l=strlen(s);
    fun(s,l);
    printf("The new string is :");puts(s);
}
