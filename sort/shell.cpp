/**
 * shell sort algorithm
 *
 */
#include <iostream>
using namespace std;

void print_array(int A[], int len) {
	for (int i=0; i<len; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
}

void shell_sort(int A[], int len) {
	for (int h=len/2; h>=1; h=h/2) {
		for (int i=h; i<len; i+=h ) {
			int key = A[i];
			int j = i - h;
			while (j>=0 && A[j] > key) {
				A[j+h] = A[j];
				j = j-h;
			}
			A[j+h] = key;
		}
	}
}

int main(int argc, char *argv[]) {
    int A[] = {8, 7, 3, 4, 6, 2, 9, 1};
    int len = 8;
    cout << "Before sort: " << endl;
    print_array(A, len);
    shell_sort(A, len);
    cout << "After sort: " << endl;
    print_array(A, len);
    return 0;
}

