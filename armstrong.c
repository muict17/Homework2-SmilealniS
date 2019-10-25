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

    int arr[c], a[c];

    for(int i=0; i<c; i++)
    {
        arr[i]=n%10;
        a[i]=1;
        n/=10;
    }

    int sum=0, mul=1;

    for(int i=0; i<c; i++)
    {
        for(int j=0; j<c; j++)
        {
            a[i]=a[i]*arr[i];
        }
    }

    for(int i=0; i<c; i++)
    {
        sum+=a[i];
    }

    if(sum==check)
    {
        printf("It's armstrong number.\n");
    } else printf("It's not armstrong number.\n");

    return 0;
}