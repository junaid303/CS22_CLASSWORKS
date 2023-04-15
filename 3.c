#include<stdio.h>
int main()
{
    int num1, num2, sum =0;;
    printf("ENter A value : ");
    scanf("%d",&num1);

    printf("enter b value : ");
    scanf("%d",&num2);

    printf("Step 1 \n");

    while(num1 != 1)
    {
         if(num1 % 2 ==1)
        {
        sum += num2;
        }
        printf(" \t\t %d \t%d \n",num1, num2);
        num1 = num1 / 2;
        num2 = num2 * 2;
       
    }
    sum += num2;
    printf(" \t\t %d \t%d \n",num1,num2);
    printf("sum is %d",sum);
    return 0;
    
}