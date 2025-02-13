#include <stdio.h>
int main()
//To check whether the given matrix is diagonal or not
{
        int n,m;
        printf("Enter the number of rows and columns");
        scanf("%d%d",&n,&m);
  if(n==m){
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
        int c=0;
        int k=(n*m)-n;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {  
                if(i!=j)
                {
                    if(a[i][j]=0)
                    {c++;}
                    
                }
             }   
    }  
    if(c==k)
   { printf("The matrix is  Diagonal");}
    else
   {printf("The matrix is not diagonal");}
  }
  else
  {printf("For entered number of rows and columns Diagonal matrix is not possible");}
   return 0;

    }
