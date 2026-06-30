#include<stdio.h>

int main()
{
    int item[10], qty[10];
    int n = 0, ch, i;

    do
    {
        printf("\n1.Add Item\n2.Display Items\n3.Exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter Item ID and Quantity: ");
                scanf("%d%d",&item[n],&qty[n]);
                n++;
                break;

            case 2:
                printf("\nItem ID\tQuantity\n");
                for(i=0;i<n;i++)
                {
                    printf("%d\t%d\n",item[i],qty[i]);
                }
                break;

            case 3:
                break;

            default:
                printf("Invalid Choice");
        }

    }while(ch!=3);

    return 0;
}