/* Этот код просто напоминание как выглядит класс Foo и функция foo_says.
 * Не нужно его расскоментировать и/или менять.
 *
 * #include <iostream>
 *
 * struct Foo {
 *     void say() const { std::cout << "Foo says: " << msg << "\n"; }
 * protected:
 *     Foo(const char *msg) : msg(msg) { }
 * private:
 *     const char *msg;
 * };
 *
 * void foo_says(const Foo &foo) { foo.say(); }
 *
 */

// Вам нужно определить функцию get_foo, как описано в задании,
// чтобы компилировался и работал как ожидается следующий код:
//
// foo_says(get_foo("Hello!"));

#include <iostream>

struct Foo {
        void say() const { std::cout << "Foo says: " << msg << "\n"; }
    protected:
        Foo(const char *msg) : msg(msg) { }
    private:
        const char *msg;
    };

	

struct Bar : public Foo {
	Bar(const char *msg) : Foo(msg) 
	{ }
};

const Foo get_foo(const char *msg) {
	return Bar(msg);
}


int main(int argc, char* argv[]) {
//	void foo_says(const Foo &foo) { foo.say(); }
    foo_says(get_foo("Hello!"));
    return 0;
}