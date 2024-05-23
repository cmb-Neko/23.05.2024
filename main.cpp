#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	const int memo_supreme = 10;
	const int memo_lesser = 5;
	int arch_arr[memo_supreme];
	int arr_1[memo_lesser];
	int	arr_2[memo_lesser];
	for (int i = 0; i < memo_lesser; i++) {
		arr_1[i] = rand() % 20 - 10;
		arr_2[i] = rand() % 20 - 10;
	}

	for (int i = 0; i < memo_lesser; i++) {
		cout << arr_1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < memo_lesser; i++) {
		cout << arr_2[i] << " ";
	}

	cout << endl;

	int j = 0;
	for (int i = 0; i < memo_lesser; i++) {
		if (arr_1[i] > 0) {
			arch_arr[j++] = arr_1[i];
		}
		if (arr_2[i] > 0) {
			arch_arr[j++] = arr_2[i];
		}
	}
	for (int i = 0; i < memo_lesser; i++) {
		if (arr_1[i] == 0) {
			arch_arr[j++] = arr_1[i];
		}
		if (arr_2[i] == 0) {
			arch_arr[j++] = arr_2[i];
		}
	}
	for (int i = 0; i < memo_lesser; i++) {
		if (arr_1[i] < 0) {
			arch_arr[j++] = arr_1[i];
		}
		if (arr_2[i] < 0) {
			arch_arr[j++] = arr_2[i];
		}
	}

	for (int i = 0; i < memo_supreme; i++) {
		cout << arch_arr[i] << " ";
	}
}