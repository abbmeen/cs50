//a program that prints "YES" if a lowercase string's characters are in alphabetical order & NO if they are not.
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Input: ");

    for (int i = 0, n = strlen(text); i < n; i++)c
    {
        printf("%i ", text[i]);
        printf("%i ", text[i + 1]);
;        if (text[i] > text[i + 1] )
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");    //if  the code has ran through all the text and it is still in alphabetical order, then print YES.
}
