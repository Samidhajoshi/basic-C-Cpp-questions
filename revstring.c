#include<stdio.h>
void reverse(char[]);
int main()
{
    char a[20];
printf("-----Enter Your String------ \n");
gets(a);
reverse (a);
printf("----Reversed String is -----\n");
puts(a);
return 0;
}
void reverse(char a[]){

    int l,i;
    char t;
    for(l=0;a[l]!='\0';l++){
        
    }
    for(i=0;i<l/2;i++){
        t=a[l-i-1];
        a[l-i-1]=a[i];
        a[i]=t;
    }
}
