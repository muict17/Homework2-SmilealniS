#include<stdio.h>

int main()
{
    int n, c=0;

    scanf("%d", &n);

    int num=n, check=n;
    do
    {
        num/=10;
        c++;
    } while(num>9);

    c++;

    int arr[c];

    for(int i=0; i<c; i++)
    {
        arr[i]=n%10;
        n/=10;
    }

    int sum=0;

    for(int i=0; i<c; i++)
    {
        arr[i]=arr[i]*arr[i]*arr[i];
    }

    for(int i=0; i<c; i++)
    {
        sum+=arr[i];
    }

    if(sum==check)
    {
        printf("It's armstrong number.\n");
    } else printf("It's not armstrong number.\n");

    return 0;
}