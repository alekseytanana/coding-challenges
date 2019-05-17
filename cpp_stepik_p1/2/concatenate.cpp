unsigned strlen(const char *str)
{
    unsigned i=0;
    while ( str[i]!='\0' )
        i++;
    return i;
}

void strcat(char *to, const char *from)
{
    unsigned to_size=0, from_size=0;
    to_size = strlen( to );
    from_size = strlen( from );
    for(int i=0; i<=from_size; i++) 
        to[(to_size + i)] = from[i];
}