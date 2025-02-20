#include<stdio.h>
int main()
{
    char a[50];
    int i;
    printf("----Enter Your string ---- \n");
    gets(a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]>='A'&&a[i]<='Z'){
            a[i]=a[i]+32;
        }
        else if(a[i]>='a'&& a[i]<='z'){
            a[i]=a[i]-32;
        }
    }
    printf("----New string is---- \n");
    puts(a);
    return 0;
}
