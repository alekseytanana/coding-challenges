struct Expression;
struct Number;
struct BinaryOperation;

// Уделите особое внимание "граничным случаям" — нулевой указатель, 
// присваивание самому себе, вызов reset на нулевом SharedPtr и прочее.
// Подсказка: возможно, вам понадобится завести вспомогательную структуру.

struct SharedPtr
{
	// конструктор
	explicit SharedPtr(Expression* ptr = 0) : ptr_(ptr), ptr_count_(0) {
		if (ptr_) ptr_count_ = new size_t(1);
	}
	
	// деструктор
	~SharedPtr() {
		if (ptr_count_ && (--*ptr_count_ == 0)) {
			delete ptr_;
			delete ptr_count_;
		}
	}

	// конструктор копирования
	SharedPtr(SharedPtr const& ptr) : ptr_(ptr.ptr_), ptr_count_(ptr.ptr_count_) {
		if (ptr.ptr_)
			++* ptr_count_;
	}
		
	Expression* get() const {
		return ptr_;
	}

	Expression& operator*() const {
		return *ptr_;
	}

	Expression* operator->() const {
		return ptr_;
	}

	void reset(Expression* ptr = 0) {
		if (ptr_count_ && (-- * ptr_count_ == 0)) {
			delete ptr_;
			delete ptr_count_;
		}
		ptr_ = ptr;
		ptr_count_ = new size_t(1);
		//*this = SharedPtr(ptr);
	}

	// оператор присваивания
	SharedPtr& operator=(SharedPtr const& ptr) {
		if (this != &ptr) {
			if (ptr_count_ && (-- * ptr_count_ == 0)) {
				delete ptr_;
				delete ptr_count_;
			}
			ptr_ = ptr.ptr_;
			ptr_count_ = ptr.ptr_count_;
			if (ptr.ptr_)
				++*ptr_count_;
		}
		return *this;
	}


private:
	Expression* ptr_;
	size_t * ptr_count_;
};