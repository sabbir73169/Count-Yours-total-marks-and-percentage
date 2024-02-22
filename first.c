#include <stdio.h>

void main ()
{
    float marks[5];
    float sum=0;
    float per;
    int i;
    printf("Enter your 5 sub marks:");
    for (i=0;i<5;i++)
    {
        scanf("%f",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    printf("total marks: %f",sum);

    per=(sum/500)*100;
    printf("Percentage is %f",per);

getch();
}
