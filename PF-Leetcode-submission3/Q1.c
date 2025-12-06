#include <stdio.h>
#include <string.h>

int isVowel(char c) {
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
        c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
        return 1;
    }
    return 0;
}

void reverseVowels(char s[]) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        while (left < right && !isVowel(s[left])) left++;
        while (left < right && !isVowel(s[right])) right--;

        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char s[300000];

    printf("Enter a string: ");
    scanf("%[^\n]", s);

    reverseVowels(s);

    printf("Output: %s\n", s);

    return 0;
}
