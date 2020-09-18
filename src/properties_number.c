#include "properties_number.h"
int prime(int number)
{
    int flag=1, half, iteration ;
    half=number/2;
    for(iteration=2;iteration<=half;iteration++)
    {
      if(number%iteration==0)
      {
         printf("The number is not a prime number\n\n");
         flag=0;
         break;
      }
    }
    if(flag==1)
      printf("The number is a prime number\n\n");
}
int armstrong(int number)
{
   int reminder, sum=0, copy_number;
   copy_number = number;
   while (number != 0)
   {
      reminder = number % 10;
      sum = sum + (reminder*reminder*reminder);
      number = number / 10;
   }
   if(sum==copy_number)
   {
       printf("The number is an Armstrong number\n\n");
   }
   else
    printf("The number is not an Armstrong Number\n\n");
}
int even_odd(int number)
{
    if(number%2 == 0)
    {
        printf("The number is even\n\n");
    }
    else
        printf("The number is odd\n\n");
}
int palindrome(int number)
{
    int remainder, reversed_number=0, copy_number;
     copy_number=number;
     while (number != 0)
        {
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
       }
     if(reversed_number==copy_number)
     {
         printf("The number is palindrome\n\n");
     }
     else
        printf("The number is not palindrome\n\n");
}
int power(int number)
{
    int flag=1, copy_number;
    copy_number = number;
     while(copy_number!=1)
    {
        if(copy_number%2!=0){
            flag=0;
            break;
        }
        copy_number=copy_number/2;
    }
    if(flag==0)
    {
       printf("The number is not a power of 2\n\n");
    }
    else
    {
        printf("The number is power of 2\n\n");
    }
}

int harshad(int number)
{
    int reminder,sum=0,copy_number;
    copy_number = number;
     while(number > 0)
        {
        reminder = number%10;
        sum = sum + reminder;
        number = number/10;
        }
    if(copy_number%sum == 0)
    {
        printf("The number is a Harshad number\n\n");
    }
    else
        printf("The is not a Harshad number\n\n");
}

int perfect_square(int number)
{
    int iteration,flag=0;
    for(iteration=0;iteration<=number;iteration++)
    {
        if(number==iteration*iteration)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("The number is a perfect square\n\n");
    }
    else
    {
        printf("The number is not a perfect square\n\n");
    }
}

int perfect_cube(int number)
{
    int iteration,flag=0;
    for(iteration=0;iteration<=number;iteration++)
    {
        if(number==iteration*iteration*iteration)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("The number is a perfect cube\n\n");
    }
    else
    {
        printf("The number is not a perfect cube\n\n");
    }
}
int automorphic_number(int number)
{
    int square, flag=1;
    square=number*number;
while (number > 0)
    {
        if (number%10 != square%10)
        {
            flag=0;
        }
        number = number / 10;
        square = square / 10;
    }
    if(flag==1)
    {
        printf("The number is an Automorphic number\n\n");
    }
    else
    {
        printf("The number is not an Automorphic number\n\n");
    }
}

int divisibility_3(int number)
{
    if(number%3==0)
    {
        printf("The number is divisible by 3\n\n");
    }
    else
    {
        printf("The number is not divisible by 3\n\n");
    }
}

int divisibility_5(int number)
{
    if(number%5==0)
    {
        printf("The number is divisible by 5\n\n");
    }
    else
    {
        printf("The number is not divisible by 5\n\n");
    }
}

int divisibility_7(int number)
{
    if(number%7==0)
    {
        printf("The number is divisible by 7\n\n");
    }
    else
    {
        printf("The number is not divisible by 7\n\n");
    }
}

