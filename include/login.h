#ifndef LOGIN_H
#define LOGIN_H

#define MAX_USERNAME_LEN 50
#define MAX_PASSWORD_LEN 50

// Structure for User
typedef struct {
    char username[MAX_USERNAME_LEN];
    char password[MAX_PASSWORD_LEN];
    int role; // 0 = Member, 1 = Admin
} User;

// Function declarations
int login();
int validateCredentials(const char *username, const char *password);
void loadUsersFromFile();
void saveUsersToFile();
void displayLoginMenu();

#endif
