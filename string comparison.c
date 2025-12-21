#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    int i = 0, flag = 1;

    printf("Enter two strings: ");
    scanf("%s %s", s1, s2);

    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            flag = 0;
            break;
        }
        i++;
    }

    if (flag == 1)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}

