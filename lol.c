#include <stdio.h>

void concatenate(char *n, const char *s);

int main()
{
    char name[50], surname[50];
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter your surname: ");
    fgets(surname, sizeof(surname), stdin);
    
    concatenate(name, surname);
    
    printf("The concatenated string is %s", name);
    
    return 0;
}

void concatenate(char *n, const char *s)
{
    while (*n != '\0') {
        n++; // Move to the end of 'n'
    }
    
    if (*n == '\n') {
        *n = '\0'; // Remove the newline character from 'n'
    }
    
    while (*s != '\0') {
        *n = *s; // Append each character of 's' to 'n'
        n++;
        s++;
    }
    
    *n = '\0'; // Add the null terminator at the end of the concatenated string
}

