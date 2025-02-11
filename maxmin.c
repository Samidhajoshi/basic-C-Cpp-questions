#include<stdio.h>
int main()

//To find min and max in particular column of a 2d matrix
{
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
    int ind;
    printf("Enter the column index for which we have to find max and min");
    scanf("%d",&ind);
    int max,min;
    max=min=a[0][ind];
  for(int j=1;j<n;j++)
        {
    
            if(max<a[j][ind])
            {max=a[j][ind];}
            if(min>a[j][ind])
            {min=a[j][ind];}
        }
    printf("The max and min of %d column is %d and %d",ind+1,max,min);
    return 0;
}
