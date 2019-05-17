// Определите шаблон SameType с двумя типовыми
// параметрами. В шаблоне должна быть определена
// одна статическая константа типа bool с именем
// value


template <class U, class V>
struct SameType {
	static bool const value = false;
};


template <class U>
struct SameType<U, U> {
	static bool const value = true;
};