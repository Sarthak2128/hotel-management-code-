#include <stdio.h>
#include <string.h>

#define MAX_ROOMS 5

struct Room {
    int number;
    char type[10];
    int isBooked;
    char guestName[50];
    char email[100];
    char phone[15];
    int days;
};

struct Room rooms[MAX_ROOMS];

void initRooms() {
    for (int i = 0; i < MAX_ROOMS; i++) {
        rooms[i].number = 101 + i;
        strcpy(rooms[i].type, (i % 3 == 0) ? "Single" : (i % 3 == 1) ? "Double" : "Deluxe");
        rooms[i].isBooked = 0;
    }
}

void showAvailableRooms() {
    printf("\nAvailable Rooms:\n");
    for (int i = 0; i < MAX_ROOMS; i++) {
        if (!rooms[i].isBooked) {
            printf("Room %d (%s)\n", rooms[i].number, rooms[i].type);
        }
    }
}

void bookRoom() {
    int roomNo;
    showAvailableRooms();
    printf("\nEnter room number to book: ");
    scanf("%d", &roomNo);

    for (int i = 0; i < MAX_ROOMS; i++) {
        if (rooms[i].number == roomNo && !rooms[i].isBooked) {
            getchar();

            printf("Enter guest name: ");
            fgets(rooms[i].guestName, sizeof(rooms[i].guestName), stdin);
            rooms[i].guestName[strcspn(rooms[i].guestName, "\n")] = 0;

            printf("Enter email: ");
            fgets(rooms[i].email, sizeof(rooms[i].email), stdin);
            rooms[i].email[strcspn(rooms[i].email, "\n")] = 0;

            printf("Enter phone: ");
            fgets(rooms[i].phone, sizeof(rooms[i].phone), stdin);
            rooms[i].phone[strcspn(rooms[i].phone, "\n")] = 0;

            printf("Enter number of days: ");
            scanf("%d", &rooms[i].days);

            rooms[i].isBooked = 1;
            printf("Room %d booked successfully for %s!\n", roomNo, rooms[i].guestName);
            return;
        }
    }

    printf("Room not available or invalid room number.\n");
}

void printBill(struct Room r) {
    int rate = strcmp(r.type, "Single") == 0 ? 1000 :
               strcmp(r.type, "Double") == 0 ? 1500 : 2500;
    int total = rate * r.days;

    printf("\n=====================================\n");
    printf("           Hotel Dragon Fly          \n");
    printf("=====================================\n");
    printf("Guest Name     : %s\n", r.guestName);
    printf("Email          : %s\n", r.email);
    printf("Phone Number   : %s\n", r.phone);
    printf("Room Number    : %d\n", r.number);
    printf("Room Type      : %s\n", r.type);
    printf("Days Stayed    : %d\n", r.days);
    printf("Rate per Day   : Rs. %d\n", rate);
    printf("-------------------------------------\n");
    printf("Total Amount   : Rs. %d\n", total);
    printf("=====================================\n");
    printf("          Do Visit Again    \n");
    printf("=====================================\n");
}

void checkOut() {
    int roomNo;
    printf("Enter room number to check out: ");
    scanf("%d", &roomNo);

    for (int i = 0; i < MAX_ROOMS; i++) {
        if (rooms[i].number == roomNo && rooms[i].isBooked) {
            printBill(rooms[i]);

            
            rooms[i].isBooked = 0;
            strcpy(rooms[i].guestName, "");
            strcpy(rooms[i].email, "");
            strcpy(rooms[i].phone, "");
            rooms[i].days = 0;
            return;
        }
    }

    printf("Room not found or already available.\n");
}

void showAllRooms() {
    printf("\nAll Room Status:\n");
    for (int i = 0; i < MAX_ROOMS; i++) {
        printf("Room %d (%s) - %s\n", rooms[i].number, rooms[i].type,
               rooms[i].isBooked ? "Booked" : "Available");
    }
}

int main() {
    int choice;
    initRooms();

    printf("=====================================\n");
    printf("     Welcome To Hotel Dragon Fly     \n");
    printf("     { Where The Luxury Meets }      \n");
    printf("=====================================\n");

    do {
        printf("\n--- Main Menu ---\n");
        printf("1. Show Available Rooms\n");
        printf("2. Book Room\n");
        printf("3. Check Out\n");
        printf("4. View Room Status\n");
        printf("5. Exit\n"); 
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: showAvailableRooms(); break;
            case 2: bookRoom(); break;
            case 3: checkOut(); break;
            case 4: showAllRooms(); break;
            case 5: printf("Goodbye! Visit Again.\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
