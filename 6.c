#include <stdio.h>
char newstr[80];
void main()
{
    char str[80],c_begin,c_end;
    char *fun(char *p,char c_begin,char c_end);

    scanf("%s",str);
    getchar();
    c_begin=getchar();
    getchar();
    c_end=getchar();
    puts(fun(str,c_begin,c_end));
}

char *fun(char *p,char c_begin,char c_end)
{
/**********Program**********/
    int i,j=0;
    for(i=0;p[i]!='\0';i++){
        if(p[i]==c_begin)
            while(p[i]!=c_end)
                newstr[j++]=p[i++];
    }
    return newstr;





/**********  End  **********/

}
