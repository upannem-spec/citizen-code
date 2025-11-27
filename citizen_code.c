#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100
#define STR 100

typedef struct {
    int id;
    char name[STR];
    int age;
    char address[STR];
    char phone[20];
} Citizen;

Citizen list[MAX];
int count = 0;

void strip(char *s) {
    int n = strlen(s);
    if (n > 0 && s[n-1] == '\n')
        s[n-1] = '\0';
}

void addCitizen() {
    if (count >= MAX) {
        printf("Storage Full!\n");
        return;
    }

    Citizen c;
    c.id = count + 1;

    printf("Enter name: ");
    fgets(c.name, STR, stdin);
    strip(c.name);

    printf("Enter age: ");
    scanf("%d", &c.age);
    while (getchar() != '\n');

    printf("Enter address: ");
    fgets(c.address, STR, stdin);
    strip(c.address);

    printf("Enter phone: ");
    fgets(c.phone, STR, stdin);
    strip(c.phone);

    list[count++] = c;

    printf("Citizen added with ID %d\n\n", c.id);
}

int searchCitizen(int id) {
    for (int i = 0; i < count; i++)
        if (list[i].id == id)
            return i;
    return -1;
}

void displayCitizen(int idx) {
    printf("\n--- Citizen Details ---\n");
    printf("ID      : %d\n", list[idx].id);
    printf("Name    : %s\n", list[idx].name);
    printf("Age     : %d\n", list[idx].age);
    printf("Address : %s\n", list[idx].address);
    printf("Phone   : %s\n", list[idx].phone);
    printf("------------------------\n\n");
}

void listCitizens() {
    if (count == 0) {
        printf("No records found.\n\n");
        return;
    }

    printf("\n--- All Citizen Records ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Age: %d | Phone: %s\n",
                list[i].id, list[i].name, list[i].age, list[i].phone);
    }
    printf("\n");
}

void updateCitizen() {
    int id, idx;
    printf("Enter citizen ID to update: ");
    scanf("%d", &id);
    while (getchar() != '\n');

    idx = searchCitizen(id);
    if (idx == -1) {
        printf("Citizen not found.\n\n");
        return;
    }

    printf("Enter new name: ");
    fgets(list[idx].name, STR, stdin);
    strip(list[idx].name);

    printf("Enter new age: ");
    scanf("%d", &list[idx].age);
    while (getchar() != '\n');

    printf("Enter new address: ");
    fgets(list[idx].address, STR, stdin);
    strip(list[idx].address);

    printf("Enter new phone: ");
    fgets(list[idx].phone, STR, stdin);
    strip(list[idx].phone);

    printf("Record Updated Successfully.\n\n");
}

void deleteCitizen() {
    int id, idx;
    printf("Enter citizen ID to delete: ");
    scanf("%d", &id);
    while (getchar() != '\n');

    idx = searchCitizen(id);
    if (idx == -1) {
        printf("Citizen not found.\n\n");
        return;
    }

    // shift left
    for (int i = idx; i < count - 1; i++)
        list[i] = list[i + 1];

    count--;

    printf("Record Deleted Successfully.\n\n");
}

void menu() {
    printf("=== Citizen Records System ===\n");
    printf("1. Add Citizen\n");
    printf("2. Search Citizen\n");
    printf("3. List All Citizens\n");
    printf("4. Update Citizen\n");
    printf("5. Delete Citizen\n");
    printf("0. Exit\n");
    printf("Enter choice: ");
}

int main() {
    int choice, id;
    char temp[10];

    while (1) {
        menu();
        fgets(temp, sizeof(temp), stdin);
        choice = atoi(temp);

        switch (choice) {
            case 1: addCitizen(); break;

            case 2:
                printf("Enter citizen ID: ");
                scanf("%d", &id);
                while (getchar() != '\n');
                int idx = searchCitizen(id);
                if (idx == -1) printf("Not found.\n\n");
                else displayCitizen(idx);
                break;

            case 3: listCitizens(); break;

            case 4: updateCitizen(); break;

            case 5: deleteCitizen(); break;

            case 0:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid option.\n\n");
        }
    }
    return 0;
}