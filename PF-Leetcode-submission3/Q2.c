#include <stdio.h>
#include <string.h>

int isPalindrome(char s[]) 
{
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) 
	{
        if (s[left] != s[right])
        {
        	return 0;
		}    
        left++;
        right--;
    }
    return 1;
}

int main() {
    int i,n;
    printf("Enter number of words: ");
    scanf("%d", &n);

    char words[n][101];

    for (i = 0; i < n; i++) 
	{
        scanf("%s", words[i]);
    }
    printf("Output:");
    for ( i= 0; i < n; i++) 
	{
        if (isPalindrome(words[i])) 
		{
            printf("%s\n", words[i]);
            return 0;
        }
    }

    printf("\n");
    return 0;
}
