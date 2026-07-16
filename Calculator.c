#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

//

int subtract(int a, int b)
{
    return a - b;
}

//

int multi(int a, int b)
{
    return a * b;
}

//

float divide(float a, float b)
{
    return a / b;
}

int main()
{
    int choice = 0;

    while (choice != 5)
    {

        printf("=====CALCULATOR=====\n");
        printf("1. ADDITION \n");
        printf("2. SUBTRACTION \n");
        printf("3. MULTIPLICATION \n");
        printf("4. DIVISION \n");
        printf("5. EXIT \n");

        printf("\nENTER YOUR CHOICE : ");
        scanf("%d", &choice);

        switch (choice)
        {
        // for addition
        case 1:

            printf("YOU SLECETED ADDITION \n");
            int x, y;
            printf("ENTER TWO NUMBERS!! : \n");
            scanf("%d", &x);
            printf("\n");
            scanf("%d", &y);
            printf("THE ADDITION IS : %d \n\n", sum(x, y));

            break;

        // for subtraction
        case 2:

            printf("YOU SELECTED SUBTRACTION \n");
            int e, f;
            printf("ENTER TWO NUMBERS!! : \n");
            scanf("%d", &e);
            printf("\n");
            scanf("%d", &f);
            printf("THE SUBTRACTION IS : %d \n\n", subtract(e, f));

            break;

        // for multiplication
        case 3:
            printf("YOU SELECTED MULTIPLICATION \n");
            int m, n;
            printf("ENTER TWO NUMBERS!! : \n");
            scanf("%d", &m);
            printf("\n");
            scanf("%d", &n);
            printf("THE MULTIPLICATION IS : %d \n\n", multi(m, n));

            break;

        // for divisior
        case 4:
            printf("YOU SELECTED DIVISION \n");
            float r, s;
            printf("ENTER TWO NUMBERS!! : \n");
            scanf("%f", &r);
            printf("\n");
            scanf("%f", &s);
            if (s == 0)
            {
                printf("can't divide with 0 \n");
            }
            else
            {
                printf("THE DIVISION IS : %.2f \n\n", divide(r, s));
            }

            break;

            // for exit

        case 5:
            printf("YOU EXITED THE CALCULATOR !!!\n");
            break;

        default:
            printf("INVALID CHOICE !!!\n");
            break;
        }
    }
    return 0;
}
