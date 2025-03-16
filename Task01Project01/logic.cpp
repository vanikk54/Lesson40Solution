#include "logic.h"
#include <iostream>
using namespace std;

void  bubble_sort(int* array, int size, bool type) {
	int count = 0;
	for (int j = 0; j < size - 1; j++)
	{
		for (int i = 0; i < size - 1; i++)
		{
			count++;
			if (type ? array[i] > array[i + 1] : array[1] < array[i + 1]) {
				int t = array[i];
				array[i] = array[i + 1];
				array[i + 1] = t;
			}
		}
	}

	cout << "Count: " << count << endl;
}