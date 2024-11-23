# include <stdio.h>
main()
{
    int no,c=0;
    printf("Enter a no:");
    scanf("%d",&no);

    while(no!=0)
    {
        no=no/10;
        c++;
    }

    printf("No of Digits are:%d",c);


 printf("\n");
}
