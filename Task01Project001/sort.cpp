#include "sort.h"
#include "util.h"

void selected_sort(int* array, int size) {

	for (int j = 0; j < size - 1; j++)
	{
		int index = j;
		for (int i = index + 1; i < size; i++)
		{
			if (array[i] < array[index]) {
				index = i;
			}
			count++;
		}

		int t = array[j];
		array[j] = array[index];
		array[index] = t;

	}
}