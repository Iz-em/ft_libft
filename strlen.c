size_t strlen(const char *s)
{
    int i;
    i = 0;

    while (s[i])
        i++;
    return (i);
}
