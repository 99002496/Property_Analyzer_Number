#include "properties_number.h"
int prime(int number)
{
    int flag=1, half, iteration ;
    half=number/2;
    for(iteration=2;iteration<=half;iteration++)
    {
      if(number%iteration==0)
      {
         flag=0;
         break;
      }
    }
    return flag;
}
int armstrong(int number)
{
   int reminder, sum=0, copy_number,flag;
   copy_number = number;
   while (number != 0)
   {
      reminder = number % 10;
      sum = sum + (reminder*reminder*reminder);
      number = number / 10;
   }
   if(sum==copy_number)
   {
       flag=1;
   }
   else
       flag=0;
   
    return flag;
}
int even_odd(int number)
{
    int flag;
    if(number%2 == 0)
    {
        flag=1;
    }
    else
    {
        flag=0;
    }
        return flag;
}
int palindrome(int number)
{
    int remainder, reversed_number=0, copy_number,flag;
     copy_number=number;
     while (number != 0)
        {
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
       }
     if(reversed_number==copy_number)
     {
         flag=1;
     }
     else
        {
            flag=0;
        }
        return flag;
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
    return flag;
}

int harshad(int number)
{
    int reminder,sum=0,copy_number,flag;
    copy_number = number;
     while(number > 0)
        {
        reminder = number%10;
        sum = sum + reminder;
        number = number/10;
        }
    if(copy_number%sum == 0)
    {
        flag=1;
    }
    else
    {
        flag=0;
    }
    return flag;
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
    return flag;
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
    return flag;
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
    return flag;
}

int divisibility_3(int number)
{
    int flag;
    if(number%3==0)
    {
       flag=1;
    }
    else
    {
        flag=0;
    }
    return flag;
}

int divisibility_5(int number)
{
    int flag;
    if(number%5==0)
    {
        flag=1;
    }
    else
    {
        flag=0;
    }
    return flag;
}

int divisibility_7(int number)
{
    int flag;
    if(number%7==0)
    {
        flag=1;
    }
    else
    {
        flag=0;
    }
    return flag;
}
