/**
 * selection sort
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

void selection(int A[], int len) {
   for (int i=0; i<len-1; i++) {
       int min= i;
       for (int j=i+1; j<len; j++) {
           if (A[min] > A[j]) {
               min = j;
           }
       }
       swap(A[i], A[min]);
   }
}

int main(int argc, char *argv[]) {
    int A[] = {8, 7, 3, 4, 6, 2, 9, 1};
    int len = 8;
    cout << "Before sort: " << endl;
    print_array(A, len);
    selection(A, len);
    cout << "After sort: " << endl;
    print_array(A, len);
    return 0;
}
