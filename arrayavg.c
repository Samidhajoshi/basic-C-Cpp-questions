/* program to store age of n students in a class using array. Calculate the average age and find
the count of all the students above and below the average age. Print the higher count with an
appropriate message.    */


#include<stdio.h>
int main()
{int n,i,hc=0,lc=0,sum=0;
float avg;
printf("Enter the number of students");
scanf("%d",&n);
int age[n];
for(i=0;i<n;i++)
{
    printf("Enter the age");
    scanf("%d",&age[i]);
}
for(i=0;i<n;i++)
{
 sum=sum+age[i];
}
avg=sum/(float)n;

for(i=0;i<n;i++)
{
    if(age[i]>avg)
    {hc++;}
    else
    {lc++;}
}
printf("The number of student having age above the average age %0.2f is %d",avg,hc);
return 0;

}
