#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

char *generate_password() {
    static const char charset[] =
        "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));
    int i;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    password[PASSWORD_LENGTH] = '\0';

    return password;
}

int main() {
    char *password = generate_password();
    printf("%s\n", password);
    free(password);
    return 0;
}

