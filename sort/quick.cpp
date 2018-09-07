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

void swap(int *a, int *b) {
    int tmp = *b;
    *b = *a; 
    *a = tmp;
}

int partition(int A[], int p, int q) {
    int i = p;
    int x = A[p];
    for (int j=p+1; j<=q; j++) {
        if (A[j] <= x) {
            i++;
            swap(A[j], A[i]);
        }
    }
    swap(A[i], A[p]);
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

    return 0;
}
