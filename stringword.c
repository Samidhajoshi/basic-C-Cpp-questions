#include<stdio.h>
//Count number of words from a particular letter
int main()
{
    char a[50];
    int i,l=0;
    char b;
    printf("---Enter Your string---\n");
    gets(a);
    printf("Enter the chrachter \n");
    scanf("%c",&b);

    for(i=0;a[i]!='\0';i++){
if(a[i]!=32 && (i==0|| a[i-1]==32)){
if(a[i]==b){
    l++;
}
}
    }
    printf("The number of words staring from %c is %d ",b,l);
    return 0;
}
