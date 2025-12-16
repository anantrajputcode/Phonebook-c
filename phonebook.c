#include <stdio.h>
int main()
{
    int choice = 0;
    char name[50][50] = {"Anant", "Pushkar", "Sanjana", "Tanish", "Anshit"};
    unsigned long number[50] = {1234567890, 2345678901, 3456789012, 4567890123, 5678901234};
    char email [50][50] = {"a@gamil.com", "b@gmail.com", "c@gmail.com", "d@gmail.com" ,"e@gmail.com"};
    int total_contacts = 5;
    int new;
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
            printf("s.no\tname\t\tph.no\t\t\temail\n");
            for (int i = 0; i < total_contacts; i++ )
            {
                printf("%d\t%s\t\t%lu\t\t%s\n", i +1, name[i], number[i], email[i]);
            }
            
        }
        else if (choice == 2)
        {
            printf("enter the no of contacts to add:-");
            scanf("%d", &new);
            
            for (int i = total_contacts; i < total_contacts + new; i++)
            {
                printf("enter name of %dth contact: ", i + 1);
                scanf("%s", name[i]);
                printf("enter the phone no. of %dth contact: ", i + 1);
                scanf("%lu", &number[i]);
                printf("enter the email of %dth contact: ", i + 1);
                scanf("%s", email[i]);
            
            }
            printf("s.no\tname\t\tph.no\t\t\temail\n");
            for (int i = 0; i < total_contacts + new; i++ )
            {
                printf("%d\t%s\t\t%lu\t\t%s\n", i +1, name[i], number[i], email[i]);
            }
            


        }

    }

    return 0;
}