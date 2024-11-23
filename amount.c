//rate and quantity example
//Author: Atish Jain
//Date: 23-Nov-24
//Objective: multiplication
# include <stdio.h>
int main()
{
    //varaible declarations
    int qty;
    float rate,amt;

    //variable initializations
    qty=rate=amt=0;

    printf("Enter Quantity:");
    scanf("%d",&qty);

<<<<<<< HEAD
    printf("Enter Rate of the item:");
=======
    printf("Enter Rate per piece:");
>>>>>>> 1dd2bc19eb295af2c31cd333f0ec87f0373dc955
    scanf("%f",&rate);

    amt=rate*qty;

    printf("Amount is Rs: %.2f/-",amt);

    getch();
}
