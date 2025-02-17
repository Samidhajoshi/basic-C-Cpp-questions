#include<stdio.h>
// To check whether the entered string is pallindrome or not
#include <string.h>
int pallin(char[]);

int main()
{int i,l;
    char a[50];
    char b[50];
printf("Enter your string  ");
gets(a);

//a[strcspn(a, "\n")] = '\0';
l=pallin(a);
if(l==0)
{printf("Pallindrome");}
else
{
    printf("Not pallindrome");
}
return 0;
}
int pallin(char a[]){
    int k=strlen(a)-1;
    int i;
    for(i=0;a[i]!='\0';i++){
        if(a[i]!=a[k])
        {
            return 1;
        }
k--;
    }
    return 0;

}
