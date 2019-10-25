#include<stdio.h>

int main()
{
    int hr, min, result;

    do
    {
        printf("hr: ");
        scanf("%d", &hr);

        printf("min: ");
        scanf("%d", &min);
    } while(hr>12 || hr<1 || min>12 || min<1);

    result=hr-min;

    if(result>6)
    {
        result-=12;
    }

    if(result<0)
    {
        result*=-1;
    }

    printf("Angle: %d\n", result*30);

    return 0;
}