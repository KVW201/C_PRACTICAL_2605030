#include <stdio.h>

int main()
{
    int number, temp, digit, cube, sum, original;
    //initializing the variables

    printf("ENTER THE NUMBER: ");
    fflush(stdout);
    if(scanf("%d", &number)==1)
    {
    //We got the number from the user and checking if the input is a number or not

    temp = number;
    original = number;
    sum = 0;
    if(number>=0)
    //To check whether the number entered is not positive
    {
    while (temp != 0)
    {
        digit = temp % 10; //we single out the digit at the ten’s place
        cube = digit * digit * digit; //we find the cube of the entered number
        sum = sum + cube; // we find the sum of the cubes
        temp = temp / 10;// decreasing the number of digits by 1
    }

    if (sum == original)
    {
        printf("The Entered number is an Armstrong number");
    }
    else
    {
        printf("The Entered number is not an Armstrong Number");
    }
    }
    else
    {
        printf("PLEASE ENTER A POSITIVE NUMBER");
    }
    }
    else
    {
        printf("PLEASE ENTER A POSITIVE NUMBER");
    }

    return 0;
}

