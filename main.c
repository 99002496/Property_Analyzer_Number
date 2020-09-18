#include "properties_number.h"
enum properties{ PRIME=1, ARMSTRONG, EVEN_ODD, PALINDROME, POWER, EXIT };
int properties_available(void);
int properties(int);
int main()
{
   int result;
   printf("------Discover the amazing properties of your number------\n\n");
   while(1)
   {
       result=properties_available();
       if(result!=0)
       {
           properties(result);
       }
   }
}
int properties_available(void)
{
    int index;
    printf("Check whether your number is \n 1)Prime \n 2)Armstrong \n 3)Even/Odd \n 4)Palindrome\n ");
    printf("5)Power of 2 \n 6)Harshad number\n 7)Perfect square \n 8)Perfect cube \n 9)Automorphic Number \n ");
    printf("10)Divisibility by 3 \n 11)Divisibility by 5 \n 12)Divisibility by 7 \n 13)Exit\n \n");
    printf("Enter the number associated with the property you want to check\n");
    scanf("%d", &index);
    if(index==13)
    {
        printf("Exiting\n");
        return 0;
    }
    if(index>12 || index<1)
    {
       printf("Invalid index");
       return 0;
    }
    else
    return index;
}
int properties(int condition)
{
    int number,flag;
    printf("Enter your number to be checked\n");
    scanf("%d", &number);
    if(number>0)
    {
    switch(condition)
    {
    case 1:
        flag=prime(number);
        if(flag==1)
        {
            printf("The number is a prime number\n\n");
        }
        else
        {
            printf("The number is not a prime number\n\n");
        }
        break;

    case 2:

        flag=armstrong(number);
        if(flag==1)
        {
            printf("The number is an armstrong number\n\n");
        }
        else
        {
            printf("The number is not an armstrong number\n\n");
        }
        break;

    case 3:
        flag=even_odd(number);
        if(flag==1)
        {
            printf("The number is an even number\n\n");
        }
        else
        {
            printf("The number is an odd number\n\n");
        }
        break;

    case 4:
        flag=palindrome(number);
        if(flag==1)
        {
            printf("The number is Palindrome\n\n");
        }
        else
        {
            printf("The number is Not Palindrome\n\n");
        }
        break;

    case 5:
        flag=power(number);
        if(flag==1)
        {
            printf("The number is Power of 2\n\n");
        }
        else
        {
            printf("The number is Not Power of 2\n\n");
        }
        break;

    case 6:
        flag=harshad(number);
        if(flag==1)
        {
            printf("The number is a Harshad number\n\n");
        }
        else
        {
            printf("The number is Not a Harshad number\n\n");
        }
        break;

    case 7:
        flag=perfect_square(number);
        if(flag==1)
        {
            printf("The number is a perfect square\n\n");
        }
        else
        {
            printf("The number is Not a perfect square\n\n");
        }
        break;

    case 8:
        flag=perfect_cube(number);
        if(flag==1)
        {
            printf("The number is a perfect cube\n\n");
        }
        else
        {
            printf("The number is Not a perfect cube\n\n");
        }
        break;

    case 9:
        flag=automorphic_number(number);
        if(flag==1)
        {
            printf("The number is an Automorphic number\n\n");
        }
        else
        {
            printf("The number is Not an Automorphic number\n\n");
        }
        break;

     case 10:
        flag=divisibility_3(number);
        if(flag==1)
        {
            printf("The number is divisible by 3\n\n");
        }
        else
        {
            printf("The number is Not divisible by 3\n\n");
        }
        break;

     case 11:
        flag=divisibility_5(number);
        if(flag==1)
        {
            printf("The number is divisible by 5\n\n");
        }
        else
        {
            printf("The number is Not divisible by 5\n\n");
        }
        break;

    case 12:
        flag=divisibility_7(number);
        if(flag==1)
        {
            printf("The number is divisible by 7\n\n");
        }
        else
        {
            printf("The number is Not divisible by 7\n\n");
        }
        break;
    }
    }
}
