#include <stdio.h>
#include "../include/mystrfunctions.h"
#include "../include/myfilefunctions.h"

int main() {
    printf("--- Testing String Functions ---\n");

    char str1[100] = "Hello";
    char str2[100] = " World";
    char buffer[100];

    printf("Length of str1: %d\n", mystrlen(str1));

    mystrcpy(buffer, str1);
    printf("Copied string: %s\n", buffer);

    mystrncpy(buffer, str2, 3);
    buffer[3] = '\0';
    printf("First 3 chars copied: %s\n", buffer);

    mystrcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    printf("\n--- Testing File Functions ---\n");

    FILE* fp = fopen("text.txt", "r");
    if (fp) {
        int lines, words, chars;
        wordCount(fp, &lines, &words, &chars);
        printf("File stats: %d lines, %d words, %d chars\n", lines, words, chars);
        fclose(fp);
    } else {
        printf("Could not open test.txt\n");
    }

    return 0;
}
