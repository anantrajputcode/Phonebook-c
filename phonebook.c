#include <stdio.h>
int main()
{
    int choice = 0;
    char name[50][50] = {"Anant", "Pushkar", "Sanjana", "Tanish", "Anshit"};
    unsigned long number[50] = {1234567890, 2345678901, 3456789012, 4567890123, 5678901234};
    char email [50][50] = {"a@gamil.com", "b@gmail.com", "c@gmail.com", "d@gmail.com" ,"e@gmail.com"};
    int n = 5;
    while (choice != 4)
    {
        printf("welcome\n");
        printf("--------\n");
        printf("1.view pre fed data\n");
        printf("2.add new contact\n");
        printf("3.search by number\n");
        printf("4. exit\n");
        printf("enter your choice:-");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("s.no.         name.          ph.no.               email.           ");
            for (int i = 0; i < n; i++ )
            {
                printf("%d.       %s.             %lu.                  %s", i +1, name[i], number[i], email[i]);
            }
            choice = 4;
        }

    }

    return 0;
}