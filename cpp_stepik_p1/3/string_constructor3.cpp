#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

	String(const char *str = "") : size(strlen(str))
	{
        this->str = strcpy( new char [size+1], str );
	}

	String(size_t n, char c) : size(n), str(new char [n+1])
	{
		for (size_t i=0; i!=n; ++i)
			*(str + i) = c;
		str[n] = '\0';
	}

	~String()
	{
		delete [] str;
	}

    /* Реализуйте этот метод. */
	void append(String &other)
	{
		size += other.size;
		char *new_str = new char [size+1];
		strcpy(new_str, str);
        strcat(new_str, other.str);
		new_str[new_size] = '\0';
		delete [] str;
        str = new_str;
	}

	size_t size;
	char *str;
};