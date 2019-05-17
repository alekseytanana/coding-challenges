unsigned strlen(const char *str)
{
    unsigned i=0;
    while ( str[i]!='\0' )
        i++;
    return i;
}

int strstr(const char *text, const char *pattern)
{
    unsigned text_size=0, pattern_size=0;
    text_size = strlen( text );
    pattern_size = strlen( pattern );
	if (*pattern == '\0')
		return 0;
	for(int i=0; i<text_size; i++) {
		if (text[i] == pattern[0]) {
			for(int j=0; j<pattern_size; j++) {
				if (text[i+j] != pattern[j])
					break;
				if (j == (pattern_size-1) ) 
					return i;
			}
		}
	}
	return -1;
}