#include <stdio.h>
#include <unistd.h> // For sleep() function
#include <string.h>

void print_with_effect(const char* str, int delay) {
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < i; j++) {
            printf(" "); // Print leading spaces to create effect
        }
        printf("%c", str[i]);
        
        fflush(stdout); // Make sure to print the current character immediately
        usleep(delay * 1000); // Delay in milliseconds
        printf("\n"); // Move to next line to create a descending butterfly effect
    }
}

int main() {
    const char* word = "Pavitrasoft";
    
    printf("\n\n");
    print_with_effect(word, 200); // 200 ms delay for each character

    return 0;
}
