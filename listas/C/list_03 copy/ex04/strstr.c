char *ft_strstr(char *str, char *to_find)
{
    int a;

    if (*to_find == 0)
        return (str);
    else
    {
        while (*str != 0)
        {
            if (*to_find == *str)
            {
                a = 0;
                while (to_find[a] == str[a] || to_find == 0)
                {
                    if (to_find[a] == 0)
                    {
                        return (str);
                    }
                    a++;
                }
            }
            str++;
        }
    }
    return (0);
}
