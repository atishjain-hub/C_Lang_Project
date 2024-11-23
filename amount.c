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
    printf("Enter unit Price:");
=======
    printf("Enter Rate per unit:");
>>>>>>> 6ab9021e213eb3861c28f0a167c4efd16524561d
    scanf("%f",&rate);

    amt=rate*qty;

    printf("Amount is Rs: %.2f/-",amt);

    getch();
}
