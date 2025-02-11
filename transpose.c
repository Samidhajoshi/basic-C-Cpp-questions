#include<stdio.h>
int main()
//To Find Transpose of a given array
  {
    int n,m;
    printf("Enter the number of rows and columns");
    scanf("%d%d",&n,&m);
    int a[n][m];
    printf("For matrix \n");
       for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("Enter the element a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);

        }
    }
    printf("The entered matrix is \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");    
    }
    int t[m][n];
       for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        t[i][j]=a[j][i];
        }
       
  }

    printf("The transpose matrix is \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",t[i][j]);
        }
       printf("\n");
  }
  return 0;
  }
