#include <cstddef>

template <typename T>
class Array
{
public:
	// Реализуйте шаблонную версию класса Array. Список всех операций, которые должен поддерживать класс Array, приведен в шаблоне кода.
    // Список операций:
    //
    explicit Array(size_t size = 0, const T& value = T()) : size_(size), value_(new T[size_])
	{
		for (size_t i = 0; i != size_; ++i)
				value_[i] = value;
	}
    //   конструктор класса, который создает
    //   Array размера size, заполненный значениями
    //   value типа T. Считайте что у типа T есть
    //   конструктор, который можно вызвать без
    //   без параметров, либо он ему не нужен.


    Array(const Array & a) : size_(a.size_), value_(new T[size_])
	{
		for (size_t i = 0; i != size_; ++i) {
			value_[i] = a.value_[i];
		}
	}
    //   конструктор копирования, который создает
    //   копию параметра. Считайте, что для типа
    //   T определен оператор присваивания.

    ~Array() { delete [] value_;}
    //   деструктор, если он вам необходим.

    Array& operator=(Array const& a) 
	{
		if (this != &a) {
			delete [] value_;
			size_ = a.size_;
			value_ = new T[size_];
			for (size_t i = 0; i != size_; ++i)
				value_[i] = a.value_[i];
		}
		return *this;
	}
    //   оператор присваивания.

    size_t size() const {
		return size_;
	}
    //   возвращает размер массива (количество элементов).

    T& operator[](size_t i) {
		return value_[i];
	}
	
    const T& operator[](size_t i) const {
		return value_[i];
	}
    //   две версии оператора доступа по индексу.
	
private:
	size_t size_;
	T * value_;
};