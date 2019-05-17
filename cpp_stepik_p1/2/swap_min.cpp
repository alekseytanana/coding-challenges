#include <cstdlib>

void swap_min(int *m[], unsigned rows, unsigned cols)
{
	int min_val = m[0][0];
	unsigned min_i = 0;
	
	for (size_t i=0; i != rows; ++i)
		for (size_t j=0; j != cols; ++j)
			if (m[i][j] < min_val) {
				min_i = i;
				min_val = m[i][j];
			}
				
	if (min_i != 0) {
		int *tmp_row = m[min_i];
		m[min_i] = m[0];
		m[0] = tmp_row;
	}
}