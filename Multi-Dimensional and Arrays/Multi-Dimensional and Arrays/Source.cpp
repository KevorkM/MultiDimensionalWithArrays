#include <iostream>
#include <cstring>

using namespace std;

int main() {

	cout << " Pointers in Multi-Dimenstionals\n" << endl;

	//int array[10][10];

	const int Max = 10;

	//int* pointer = array2D; this way would not work, it would need to have one pointer and an other pointer to work

	//int(*pointer)[10] = array2D[10][10];// something like this should work
	//int(*pointer)[Max] = new int[Max][Max]; // use this for example

	int** pointer = new int* [Max];

	for (int r = 0; r < Max; r++) {
		pointer[r] = new int[Max];
	}

	
	for (int r = 0; r < Max; r++) {
		for (int c = 0; c < Max; c++) {
			pointer[r][c] = r * c;
			cout << "r = " << r << ", c = " << c << ", val = " << pointer[r][c] << endl;
		}
	}

	for (int r = 0; r < Max; r++) {
		delete[] pointer[r];
	}

	delete[] pointer;
	return 0;
}