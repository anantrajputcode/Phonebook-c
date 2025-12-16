#include <stdio.h>
#include <string.h>
int main()
{
    int choice = 0;
    char name[50][50] = {"Anant", "Pushkar", "Sanjana", "Tanish", "Anshit"};
    unsigned long number[50] = {1234567890, 2345678901, 3456789012, 4567890123, 5678901234};
    char email [50][50] = {"a@gamil.com", "b@gmail.com", "c@gmail.com", "d@gmail.com" ,"e@gmail.com"};
    int pre_def = 5;
    int new = 0;
    int total_contacts;
    total_contacts = pre_def + new;
    while (choice != 5)
    {
        printf("welcome\n");
        printf("--------\n");
        printf("1.view pre fed data\n");
        printf("2.add new contact\n");
        printf("3.search by number\n");
        printf("4. search by name\n");
        printf("5. exit\n");
        printf("enter your choice:-");
        scanf("%d", &choice);
        if (choice == 1)
        {   
            total_contacts = pre_def + new;
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
            total_contacts = pre_def + new;
            for (int i = pre_def; i < pre_def + new; i++)
            {
                printf("enter name of %dth contact: ", i + 1);
                scanf("%s", name[i]);
                printf("enter the phone no. of %dth contact: ", i + 1);
                scanf("%lu", &number[i]);
                printf("enter the email of %dth contact: ", i + 1);
                scanf("%s", email[i]);
            }
            
            printf("s.no\tname\t\tph.no\t\t\temail\n");
            for (int i = 0; i < pre_def+ new; i++ )
            {
                printf("%d\t%s\t\t%lu\t\t%s\n", i +1, name[i], number[i], email[i]);
            }
        }
        else if (choice == 3)
        {
            long unsigned check;
            printf("enter the phone number of contact:");
            scanf("%lu", &check);
            
            for (int i = 0; i < pre_def + new; i++)
            {
                if (check == number[i])
                {
                    printf("s.no\tname\t\tph.no\t\t\temail\n");
                    printf("%d\t%s\t\t%lu\t\t%s\n", i +1, name[i], number[i], email[i]);
                    break;
                   
                }
                else if (i == pre_def + new - 1)
                {
                    printf("no result found\n");
                }
            }
        }
        else if(choice == 4)
        {
            char check[50];
            printf("enter the name of contact: ");
            scanf("%s", check);
            for (int i = 0; i < total_contacts; i++)
            if ((strcmp(check, name[i])) == 0)
            {
                printf("s.no\tname\t\tph.no\t\t\temail\n");
                printf("%d\t%s\t\t%lu\t\t%s\n", i +1, name[i], number[i], email[i]);
                break;
            }
            else if (i == pre_def + new - 1)
            {
                printf("no result found\n");
            }
        }
        else if (choice == 5)
        {   
            printf("exited the system successfully.");
            break;
        }

    }

    return 0;
}