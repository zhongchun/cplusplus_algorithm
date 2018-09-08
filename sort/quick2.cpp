/**
 *
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

int partition(int A[], int p, int q) {
    int i = p;
	int j = q; 
	int pivot = p;
    int x = A[pivot];
	while (i < j) {
		while (A[j] >= x && j > i) j--;
		A[i] = A[j];
		while (A[i] <= x && i < j) i++;
		A[j] = A[i];
	}
	A[i] = x;
    return i;
}

void quick(int A[], int p, int q) {
    if (p < q) {
        int r = partition(A, p, q);
        quick(A, p, r-1);
        quick(A, r+1, q);
    }
}

void print_ret(int A[], int len) {
    cout << "Before sort: " << endl;
    print_array(A, len);
    quick(A, 0, len-1);
    cout << "After sort: " << endl;
    print_array(A, len);
}

int main(int argc, char *argv[]) {
    int A[] = {8, 7, 3, 4, 6, 2, 9, 1};
    int len = 8;
    print_ret(A, len);

    int B[] = {34, 341, 10, 13, 45, 30, 25, 3, 101};
    len = 9;
    print_ret(B, len);
	
	int C[] = {21, 23, 21, 32, 10, 12, 10, 10, 3, 103, 1};
	len = 11;
	print_ret(C, len);
	
	int D[] = {221, 123, 101, 92, 90, 82, 77, 60, 53, 23, 1};
	len = 11;
	print_ret(D, len);

    return 0;
}
