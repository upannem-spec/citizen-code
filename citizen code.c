#include <stdio.h>

struct Citizen {
    int citizenID;
    char name[50];
    int age;
    char address[100];
    char occupation[50];
};

int main() {
    struct Citizen citizens[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n--- Citizen Management System ---\n");
        printf("1. Add Citizen Details\n");
        printf("2. View All Citizens\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count == 100) {
                printf("\nStorage Full! Cannot add more citizens.\n");
                continue;
            }

            printf("\nEnter Citizen ID: ");
            scanf("%d", &citizens[count].citizenID);

            printf("Enter Name: ");
            scanf("%s", citizens[count].name);

            printf("Enter Age: ");
            scanf("%d", &citizens[count].age);

            printf("Enter Address: ");
            scanf("%s", citizens[count].address);

            printf("Enter Occupation: ");
            scanf("%s", citizens[count].occupation);

            count++;
            printf("\nCitizen details added successfully!\n");
        }
        else if (choice == 2) {
            if (count == 0) {
                printf("\nNo citizen records found.\n");
            } else {
                printf("\n--- List of Citizens ---\n");
                for (int i = 0; i < count; i++) {
                    printf("\nCitizen %d:\n", i + 1);
                    printf("ID: %d\n", citizens[i].citizenID);
                    printf("Name: %s\n", citizens[i].name);
                    printf("Age: %d\n", citizens[i].age);
                    printf("Address: %s\n", citizens[i].address);
                    printf("Occupation: %s\n", citizens[i].occupation);
                }
            }
        }
        else if (choice == 3) {
            printf("\nExiting Program...\n");
            break;
        }
        else {
            printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}
