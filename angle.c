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

    if(result==1)
    {
        printf("Angle: 30\n");
    } else if(result==2)
    {
        printf("Angle: 60\n");
    } else if(result==3)
    {
        printf("Angle: 90\n");
    } else if(result==4)
    {
        printf("Angle: 120\n");
    } else if(result==5)
    {
        printf("Angle: 150\n");
    } else if(result==6)
    {
        printf("Angle: 180\n");
    } else if(result==0)
    {
        printf("Angle: 0\n");
    }

    return 0;
}