#include <iostream>
using namespace std;

int linearSearch(int s, int* arr, int count) {
	
	return 0;

}


int main() {
	int randomNumber;
	int array[20];
	for (int i = 0; i < 20; i++) {
		randomNumber = 1 + (rand() % 100);
		array[i] = randomNumber;
		cout << array[i] << " ";
	}
	int iLen = sizeof(array) / sizeof(array[0]);

	int* resultMin = min_element(array, array + iLen);
	cout <<endl<< "Minimum number: " << *resultMin;

	int* resultMax = max_element(array, array + iLen);
	cout << endl << "Maximum number: " << *resultMax;
   
	return 0;
}
