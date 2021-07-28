#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int a;

    a = 0;
    if (n == 0)
    {
        return (0);
    }
    while ((*s1 != 0 && *s1 == *s2) && a < n - 1)
    {
        a++;
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

int main ()
{
    char s1[] = "rodrigo";
    char s2[] = "rodrigues";
    printf("%d\n", ft_strncmp(s1, s2, 7));
}