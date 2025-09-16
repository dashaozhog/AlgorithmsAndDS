#include <iostream>
using namespace std;
#include <algorithm>

int binarySearch(int s, int* arr, int count) {
    int low = 0;
    int high = count - 1;
    int i = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        int guess = arr[mid];
        if (guess == s)
        {
            cout << mid << endl;
            cout << i<<" iterations";
            return 0;
        }
        else if (guess > s) high = mid - 1;
        else low = mid + 1;
        ++i;
    }

}

int main() {
    int array[10] = { 12, 3, 7, 6, 89, 43, 79, 102, 47, 39 };
    int len = sizeof(array) / sizeof(array[0]);
    sort(array, array + len);
    binarySearch(6, array, 10);
    return 0;
}
