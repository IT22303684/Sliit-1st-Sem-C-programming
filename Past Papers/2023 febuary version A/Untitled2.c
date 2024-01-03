#include <stdio.h>
#include <string.h>

//Code by Dasun Tharuka

int main() {
    // a) Declare a 1D array called strings of size 20
    char strings[20];
    int left ; 
    int right ;

    // b) Input a text from the keyboard and store in the array
    printf("Enter a text (max 19 characters): ");
    fgets(strings, sizeof(strings), stdin);
    strings[strcspn(strings, "\n")] = '\0'; // Remove the newline character

    // c) Reverse and store the elements of the array without using an additional array
    int length = strlen(strings);
    for ( left = 0, right = length - 1; left < right; left++, right--) {
        // Swap the characters
        char temp = strings[left];
        strings[left] = strings[right];
        strings[right] = temp;
    }

    // d) Display the array elements
    printf("Reversed text: %s\n", strings);

    return 0;
}
