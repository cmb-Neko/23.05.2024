#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));

	const int array_size = 11;
	int arr[array_size];
	for (int i = 0; i < array_size; i++) {
		arr[i] = rand() % 2 + 0;
	}

	for (int i = 0; i < array_size; i++) {
		cout << arr[i] << " ";
	}

	cout << endl << endl;

	for (int i = array_size; i >= 0; i--) {
		if (arr[i] == 0) {
			for (int j = i; j < array_size; j++) {
				arr[j] = arr[j + 1];
			}
			arr[array_size - 1] = -1;
		}
	}

	for (int i = 0; i < array_size; i++) {
		cout << arr[i] << " ";
	}
	
}