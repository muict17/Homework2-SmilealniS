#include<stdio.h>

int main()
{
    int hr, min;
    float dhr, dmin, result;
    
    while(hr<1 || hr>12)
    {
        printf("Hr: ");
        scanf("%d", &hr);
    }

    while(min<0 || min>60)
    {
        printf("Min: ");
        scanf("%d", &min);
    }

    dhr=0.5*((60*hr)+min);

    dmin=6*min;

    result=dhr-dmin;
    
    do
    {
        if(result<0)
        {
            result*=-1;
        }

        if(result>180)
        {
            result-=360;
        }
    } while(result<0);

    printf("%d:%d\n", hr, min);
    printf("Angle between hands: %.2f\n", result);

    return 0;
}