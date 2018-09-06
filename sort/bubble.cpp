/**
 * bubble sort
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

void bubble(int A[], int len) {
    for (int i=0; i<len-1; i++) {
        for (int j=0; j<len-i-1; j++) {
            if (A[j] > A[j+1]) {
                swap(A[j], A[j+1]);
            }
        }
        print_array(A, len);
    }
}

int main(int argc, char *argv[]) {
    int A[] = {8, 7, 3, 4, 6, 2, 9, 1};
    int len = 8;
    cout << "Before sort: " << endl;
    print_array(A, len);
    bubble(A, len);
    cout << "After sort: " << endl;
    print_array(A, len);
    return 0;
}

