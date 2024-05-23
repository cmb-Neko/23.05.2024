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
	for (int i = 0; i < memo_supreme; i++) {
		arch_arr[i] = rand() % 2 + 0;
	}

	int j = 0;
	for (int i = 0; i < memo_supreme; i += 2) {
		arr_1[j] = arch_arr[i - 1];
		arr_2[j] = arch_arr[i];
	}
	for (int i = 0; i < memo_lesser; i++) {
		cout << arr_
	}
}