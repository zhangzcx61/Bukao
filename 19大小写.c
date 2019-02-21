#include <stdio.h>
#include <string.h>
#include <conio.h>
#define N 80
char fun(char a[]){
/**********Program**********/
    Int i;
    For(i=0;a[i]!=’\0’;i++){
        If(a[i]>=’A’&&a[i]<=’Z’)
            a[i]=a[i]+32;
        Else if(a[i]=’a’&&a[i]<=’z’)
            a[i]=a[i]-32;
        Else;
    }


    /**********  End  **********/}
void main(){
    char a[80];
    char s;
    gets(a);
    s=fun(a);
    puts(a);  }
