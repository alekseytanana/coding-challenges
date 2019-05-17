﻿/*Задание повышенной сложности.

Определен следующий класс (он также приведен в комментарии в шаблоне кода):

struct Cls {
    Cls(char c, double d, int i);
private:
    char c;
    double d;
    int i;
};
Как видно, все поля этого класса закрытые, ваша задача реализовать несколько функций, которые дают полный доступ к этим полям (см. шаблон кода), несмотря на то, что они закрытые.

Внимание: предполагаемое решение этого задания существенно опирается на Undefined Behaviour и является исключительно учебным, но полезно для лучшего понимания того, как работают модификаторы доступа. Решение было проверено на различных компиляторах (g++/clang++/icc/msvc), но мы настоятельно не рекомендуем использовать подобные трюки в боевом коде.

Требования к реализации: при решении этого задания вам разрешается заводить любые вспомогательные функции и классы, но не изменять определение класса Cls. Не нужно вводить или выводить что-либо, также не нужно определять функцию main.
*/
 
struct Cls2 {
Cls2(char c, double d, int i);
    char c;
    double d;
    int i;
};

// Эта функция должна предоставить доступ к полю c объекта cls.
// Обратите внимание, что возвращается ссылка на char, т. е.
// доступ предоставляется на чтение и запись.
char &get_c(Cls &cls) {
return ((Cls_ *)(&cls))->c;
}

// Эта функция должна предоставить доступ к полю d объекта cls.
// Обратите внимание, что возвращается ссылка на double, т. е.
// доступ предоставляется на чтение и запись.
double &get_d(Cls &cls) {
return ((Cls_ *)(&cls))->d;
}

// Эта функция должна предоставить доступ к полю i объекта cls.
// Обратите внимание, что возвращается ссылка на int, т. е.
// доступ предоставляется на чтение и запись.
int &get_i(Cls &cls) {
return ((Cls_ *)(&cls))->i;
}