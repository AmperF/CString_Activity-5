#include <stdio.h>
#include <string.h>


int main() {
    char str[5][50], temp[50];
    printf("Enter 5 words: ");

    // Getting strings input
    for (int i = 0; i < 5; ++i) {
        fgets(str[i], sizeof(str[i]), stdin);
    }

    // storing strings In Dictionary order
    for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 5; ++j) {

            // swapping strings if they are not In Dictionary order
            if (strcmp(str[i], str[j]) > 0) {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
         }
      }
    }

    printf("\nIn Dictionary order: \n");
    for (int i = 0; i < 5; ++i) {
        fputs(str[i], stdout);
    }

};
