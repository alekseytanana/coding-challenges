#include <iostream>
using namespace std;

char *resize(const char *str, unsigned size, unsigned new_size)
{
	char * str2 = new char[new_size];
	
    for(int i=0; i<new_size; i++) 
        str2[i] = str[i];

	delete [] str;
	str = 0;
	return str2;
}

char *getline()
{
	char ch = '\0';
	unsigned long str_size=100, new_size=0, i=0;
	char * str = new char[str_size];
	while (cin.get(ch) && ch != '\n') {
		str[i] = ch;
		if (str_size == i+1) {
			new_size = str_size+10;
			str = resize(str, str_size, new_size);
			str_size = new_size;
        }
		i++;
	}
	str[i] = '\0';
	return str;
}