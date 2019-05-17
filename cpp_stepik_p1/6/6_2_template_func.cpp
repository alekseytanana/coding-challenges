#include <cstddef>

template <typename T, typename U>
void copy_n(T * t, U * u, size_t num) {
	for(size_t i; i < num; ++i)
		t[i] = T(u[i]);
}