#include<stdio.h>
int main()

{//To find sum of each row in a 2d array
        int n,m;
    printf("Enter the number of rows and columns");
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("Enter the element a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);

        }
    }
    printf("The entered array is \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");    
    }
    int s;
    for(int i=0;i<n;i++)
    { int s=0;
        for(int j=0;j<m;j++)
        {s=s+a[i][j]; }
        printf("The sum of %d row is %d \n",i+1,s);
    }
    return 0;
}
