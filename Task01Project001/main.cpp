#include "util.h"
#include "sort.h"
#define SIZE 10

int main() {
	int array[SIZE]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	init(array, SIZE, -100, 100);
	cout << "Array before: " << convert(array, SIZE);

	selected_sort(array, SIZE);
	cout << "\nArray after: " << convert(array, SIZE);

	return 0;
}