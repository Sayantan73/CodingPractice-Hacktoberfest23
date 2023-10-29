#include<stdio.h>
int main ()
{
    int count,num,temp;
    printf("Enter a number in inch: ");
    scanf("%i",&num);
    temp = num/12;
    count=num%12;
    printf("The output is %d foot %d inches",temp, count);
    return 0;
}
