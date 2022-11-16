#include<stdio.h>
#include<stdlib.h>
void activity(int s[],int f[],int n)
{
    int j=0;
    printf("%d ",j);
    int i;
    for(i=1;i<n;i++)
    {
        if(s[i]>=f[j])
        {
            printf("%d",i);
            j=i;
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of activities");
    scanf("%d",&n);
    int s[n],f[n];
    printf("Enter the start time of activities");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    printf("Enter the finish time of activities");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&f[i]);
    }
    activity(s,f,n);
    return 0;
}
     //     int s[] = { 1, 3, 0, 5, 8, 5 };
    // int f[] = { 2, 4, 6, 7, 9, 9 };