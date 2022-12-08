#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    printf("\n|________________________________________________________________________|\n");
    printf("\n -- Press -(1)- For Currency Conversion System -- ");
    printf("\n -- Press -(2)- For ATM Management System -- ");
    printf("\n -- Press -(3)- To Exit -- \n");
    printf("\n|________________________________________________________________________|\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {

        float amount;
        float taka, yen, dollar, pound, euro, rupee;
        // Switch Case - parameter is 'option'
        int option;
        printf("\n|*********************************************************************|\n");
        printf("Choose among them for Conversion - ");
        printf("\nEnter 1 for: Taka");
        printf("\nEnter 2 for : Dollar");
        printf("\nEnter 3 for: Pound");
        printf("\nEnter 4 for: Euro");
        printf("\nEnter 5 for: Rupee");
        printf("\nEnter 6 for: Yen");
        printf("\n|*********************************************************************|\n");
        printf("\nEnter your choice for conversion : ");
        scanf("%d", &option);

        printf("Enter the number of amount you want to convert?\n");
        scanf("%f", &amount);

        switch (option)
        {
            // Conversion of Taka to Different Currencies
        case 1:
            dollar = amount / 94;
            printf("%.2f Taka is =  %.2f Dollar", amount, dollar);

            pound = amount / 125;
            printf("\n%.2f Taka =  %.2f Pound", amount, pound);

            euro = amount / 107;
            printf("\n%.2f Taka =  %.2f Euro", amount, euro);

            rupee = amount / 1.25;
            printf("\n%.2f Taka =  %.2f Rupee", amount, rupee);

            yen = amount / 0.75;
            printf("\n%.2f Taka = %.2f Yen", amount, yen);
            break;

            // Conversion of Dollar to Different Currencies
        case 2:
            taka = amount * 94;
            printf("\n%.2f Dollar =  %.2f taka", amount, taka);

            rupee = amount * 82.32;
            printf("\n%.2f Dollar =  %.2f rupee", amount, rupee);

            pound = amount * 0.82;
            printf("\n%.2f Dollar =  %.2f pound", amount, pound);

            euro = amount * 0.95;
            printf("\n%.2f Dollar =  %.2f euro", amount, euro);

            yen = amount * 166.54;
            printf("\n%.2f Dollar =  %.2f yen", amount, yen);
            break;
            // Conversion of Pound to Different Currencies
        case 3:
            taka = amount * 125;
            printf("\n%.2f Pound = %.2f Taka", amount, taka);

            rupee = amount * 100.26;
            printf("\n%.2f Pound =  %.2f Rupee", amount, rupee);

            dollar = amount * 1.22;
            printf("\n%.2f Pound =  %.2f Dollar", amount, dollar);

            euro = amount * 1.16;
            printf("\n%.2f Pound =  %.2f Euro", amount, euro);

            yen = amount * 166;
            printf("\n%.2f Pound =  %.2f Yen", amount, yen);
            break;
            // Conversion of Euro to Different Currencies
        case 4:
            taka = amount * 107;
            printf("\n%.2f Euro =  %.2f Taka", amount, taka);

            rupee = amount * 86.23;
            printf("\n%.2f Euro =  %.2f Rupee", amount, rupee);

            dollar = amount * 1.05;
            printf("\n%.2f Euro =  %.2f Dollar", amount, dollar);

            pound = amount * 0.86;
            printf("\n%.2f Euro =  %.2f Pound", amount, pound);

            yen = amount * 143.83;
            printf("\n%.2f Euro =  %.2f Yen", amount, yen);
            break;
            // Conversion of Rupee to Different Currencies
        case 5:
            taka = amount * 1.25;
            printf("\n%.2f Rupee  =  %.2f Taka", amount, taka);

            dollar = amount / 82.27;
            printf("\n%.2f Rupee =  %.2f Dollar", amount, dollar);

            pound = amount / 100.43;
            printf("\n%.2f Rupee =  %.2f Pound", amount, pound);

            euro = amount / 86.46;
            printf("\n%.2f Rupee =  %.2f Euro", amount, euro);

            yen = amount * 1.66;
            printf("\n%.2f Rupee =  %.2f Yen", amount, yen);
            break;
            // Yen to to Different Currencies
        case 6:
            taka = amount / 1.33;
            printf("\n%.2f Yen  =  %.2f Taka", amount, taka);

            dollar = amount / 137.76;
            printf("\n%.2f Yen =  %.2f Dollar", amount, dollar);

            pound = amount / 166;
            printf("\n%.2f Yen =  %.2f Pound", amount, pound);

            euro = amount / 143.66;
            printf("\n%.2f Yen =  %.2f Euro", amount, euro);

            rupee = amount / 1.66;
            printf("\n%.2f Yen =  %.2f Rupee", amount, rupee);
            break;

        default:
            printf("\nInvalid Conversion Input");
        }
    }
    break;
    case 2:
        printf("Under Constriction");
        break;
    case 3:
        exit(0);
    default:
        printf("Error Input");
        break;
    }
    return 0;
}