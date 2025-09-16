#include <iostream>
using namespace std;

int linearSearch(int s, int* arr, int count) {
    for (int i = 0; i < count; i++) {
        if (arr[i] == s) {
            if (arr[i] % 2 == 0) {
                cout << endl << "Parnoe! Index: " << i;
                return 0;
            }
            else if (arr[i] % 2 != 0) {
                cout << endl << "Neparnoe! Number: " << arr[i];
                return 0;
            }

        }
    }
    cout << "Search is over!";
    return 0;
}

int main() {
    int array[10] = { 12, 3, 7, 6, 89, 43, 79, 102, 47, 39 };
    int len = sizeof(array) / sizeof(array[0]);
    blinearSearch(79, array, 10);
    return 0;
}
