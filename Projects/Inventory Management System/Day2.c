#include <stdio.h>

int main()
{
    int choice;

    do
    {
        printf("\n=============================\n");
        printf("    STUDENT MANAGEMENT\n");
        printf("=============================\n");

        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search Student\n");
        printf("4. Calculate Average\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Add Student selected.\n");
                break;

            case 2:
                printf("View Students selected.\n");
                break;

            case 3:
                printf("Search Student selected.\n");
                break;

            case 4:
                printf("Calculate Average selected.\n");
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}