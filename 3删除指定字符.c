#include <stdio.h>

fun(char s[],char c)
{
/**********Program**********/
    int i=0;
    char *p;
    p=s;
    while(*p){
        if(*p!=c){
            s[i]=*p;
            i++;
        }
        p++;
    }
    s[i]='\0';







/**********  End  **********/
}

void main()
{
    static char str[]="turbo c and borland c++";
    char c='a';
    fun(str,c);
    printf("str=%s\n",str);
}
