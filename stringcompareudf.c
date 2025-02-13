#include<stdio.h>
//Comparing two strings using a user defined function
int compare(char a[],char b[]){
    int i;
    for ( i=0;a[i]!='\0'&& b[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {return a[i]-b[i];}

    }
    return a[i]-b[i];
}
int main(){
     char a[50] ;
     char b[50];
     int l;
     printf("Enter your first string \n");
     fgets(a,sizeof(a),stdin);
     printf("Enter your second string \n");
     fgets(b,sizeof(b),stdin);
     l=compare(a,b);
     if(l==0)
     {printf("The strings are equal");}
     else
     {
        printf("The strings are Not equal");
     }
     return 0;


}
