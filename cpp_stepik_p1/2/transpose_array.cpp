#include <cstdlib>

int ** create_array2d(size_t a, size_t b) {
	int ** m = new int *[a];
	m[0] = new int[a * b];
	for (size_t i=1; i != a; ++i)
		m[i] = m[i - 1] + b;
	return m;
}

int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
    int ** m2 = create_array2d(cols, rows);
	for (size_t i=0; i != cols; ++i)
		for (size_t j=0; j != rows; ++j)
			m2[i][j] = m[j][i];
	return m2;
}