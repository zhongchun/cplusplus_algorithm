/**
 * merge two array by sort
 *
 */ 
#include <iostream>
using namespace std;

void pring_array(int A[], int len) {
	for (int i=0; i<len; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
}

void merge(int A[], int p, int q, int r) {
    int ln = q - p + 1;
    int rn = r - q;
    int left[ln];
    int right[rn];
    for (int i=0; i<ln; i++) {
        left[i] = A[i+p];
    }
    for (int i=0; i<rn; i++) {
        right[i] = A[i+q+1];
    }

    int li = 0;
    int ri = 0;
    int index = p;
    while (li < ln && ri < rn) {
        if (left[li] <= right[ri]) {
            A[index++] = left[li++];
        } else {
            A[index++] = right[ri++];
        }
    }
    /**
    for (int i=li; i<ln; i++) {
        A[index++] = left[i];
    }
    for (int i=ri; i<rn; i++) {
        A[index++] = right[i];
    }
    */
    while (li < ln) {
        A[index++] = left[li++];
    }
    while (ri < ln) {
        A[index++] = right[ri++];
    }
}

void mergeSort(int A[], int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        mergeSort(A, p, q);
        mergeSort(A, q+1, r);
        merge(A, p, q, r);
    }
}

int main(int argc, char *argv[]) {
    int A[] = {1, 3, 8, 2, 4, 5, 7};    
    cout << "=====================================" << endl;
    pring_array(A, 7);
    merge(A, 0, 2, 6);
    pring_array(A, 7);
    int B[] = {1, 3, 5, 8, 9, 2, 7};    
    cout << "=====================================" << endl;
    pring_array(B, 7);
    merge(B, 0, 4, 6);
    pring_array(B, 7);
    cout << "=====================================" << endl;
    int C[] = {89, 32, 45, 1, 3, 8, 0, 99};
    pring_array(C, 8);
    mergeSort(C, 0, 7);
    pring_array(C, 8);
    return 0;
}
