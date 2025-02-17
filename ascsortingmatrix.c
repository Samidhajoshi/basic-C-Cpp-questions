#include<stdio.h>
int main()
{
    int n,m,i,j;
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
int b[n*m];
int l=0;
for(i=0;i<n;i++){
for(j=0;j<m;j++){
    b[l]=a[i][j];
    l++;
}
}
int k=n*m;
for(i=0;i<k-1;i++){
    for(j=i+1;j<k;j++){
        if(b[i]<b[j])
        {
            int temp=b[i];
            b[i]=b[j];
            b[j]=temp;
        }
    }
}
l=0;
printf("The sorted array is \n");
for(i=0;i<n;i++)
{for(i=0;j<m;j++){
    
    printf("%d ",b[l]);
    l++;

}
printf("\n");
}
return 0;
}
