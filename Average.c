#include<stdio.h>
int main()
{
    int marks[5],n,i,sum=0,average;
    printf("Enter number of element:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&marks[i]);

        sum += marks[i];
    }
  average = sum / n;
    printf("Sum:%d",average);
    return 0;
}
