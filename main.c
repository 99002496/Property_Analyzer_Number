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
    int number;
    printf("Enter your number to be checked\n");
    scanf("%d", &number);
    if(number>0)
    {
    switch(condition)
    {
    case 1:
        prime(number);
        break;

    case 2:
        armstrong(number);
        break;

    case 3:
        even_odd(number);
        break;

    case 4:
        palindrome(number);
        break;

    case 5:
        power(number);
        break;

    case 6:
        harshad(number);
        break;

    case 7:
        perfect_square(number);
        break;

    case 8:
        perfect_cube(number);
        break;

    case 9:
        automorphic_number(number);
        break;

     case 10:
        divisibility_3(number);
        break;

     case 11:
        divisibility_5(number);
        break;

    case 12:
        divisibility_7(number);
        break;
    }
    }
}
