#include <iostream>
using namespace std;

int main() {
	int arrA[101];
	int arrB[101];
	int count = 0;

	for (int i = 0; i < 101; ++i) {
		cin >> arrA[i];
	}
	
	for (int j = 0; j < 101; ++j) {
		cin >> arrB[j];
	}
	
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (arrA[i] == arrB[j]) {
				count += 1;
			}
		}
	}

	cout << count << endl;
	
	return 0;
}