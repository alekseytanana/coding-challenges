#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

	String(const char *str = "") : size(strlen(str))
	{
        this->str = strcpy( new char [size+1], str );
	}

	size_t size;
	char *str;
};