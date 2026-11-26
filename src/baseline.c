#include <stdio.h>
#include <string.h>

int main(void) {
    char key[50];

    printf("=== System Authentication ===\n");
    printf("Enter License Key: ");
    
    if (scanf("%49s", key) != 1) {
        return 1;
    }

    // Plaintext hardcoded secret key (Target Asset)
    if (strcmp(key, "HMU-SECURE-KEY-2026") == 0) {
        printf("Access Granted! Welcome Admin.\n");
    } else {
        printf("Access Denied! Invalid Key.\n");
    }

    return 0;
}
