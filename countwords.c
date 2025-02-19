#include<stdio.h>
int main()
{
char a[50];
int wc=0,i;
printf("----ENTER YOUR STRING ----\n");
gets(a);
for(i=0;a[i]!='\0';i++){
    if(a[i]!=32&& (i==0|| a[i-1]==32)){
        wc++;
    }
}
printf("The word count is %d ",wc);
return 0;
}
