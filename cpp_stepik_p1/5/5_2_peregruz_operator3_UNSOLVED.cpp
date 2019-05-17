#include <cstddef> // size_t
#include <cstring>

// https://stepik.org/lesson/559/step/9?unit=882
// constructors & destructor from lesson 3.3
// https://stackoverflow.com/questions/6969881/operator-overload/6969904#6969904
//Если пользуетесь схемой с вложенным классом, то всю логику, новые данные итд, пихайте в этот вложенный класс, 
//НИЧЕГО не оставляйте операторной функции, она константная, 
//поэтому при попытке работе в ней неизбежно напороться на утечки памяти и прочие неприятности.

struct String {
	String(const char* str = "") : size(strlen(str)) 
	{
		this->str = strcpy(new char[size + 1], str);
	}
	
	String(size_t n, char c) : size(n), str(new char [n+1])
	{
		for (size_t i = 0; i != n; ++i)
			* (str + i) = c;
		str[n] = '\0';
	}
	
	~String() 
	{
		delete[] str;
	}

	String(const String& other) : size(other.size), str(new char[size + 1])
	{
		for (size_t i = 0; i < size + 1; ++i)
			str[i] = other.str[i];
	}

	String& operator=(const String& other)
	{
		if (this != &other) {
			delete[] str;
			size = other.size;
			str = new char[size + 1];
			for (size_t i = 0; i < size + 1; ++i)
				str[i] = other.str[i];
		}
		return *this;
	}

	void append(const String& other)
	{
		size += other.size;
		char* new_str = new char[size + 1];
		strcpy(new_str, str);
		strcat(new_str, other.str);
		delete[] str;
		str = new_str;
	}

	
	
	


	struct Proxy {
		Proxy(char* _substr) : _substr(_substr) { }

		char operator[](int index) {
			return _substr[index];
		}
	private:
		char* _substr;
	};



	Proxy operator[](int index) {
		return Proxy(&str[index]);
	}




	
	

	size_t size;
	char* str;
};