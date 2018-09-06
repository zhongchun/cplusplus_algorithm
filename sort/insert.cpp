/**
* insert sort algorithm
*/
#include <iostream>
using namespace std;

void insert(int A[], int len)
{
	for (int i=1; i<len; i++) 
	{
		int key = A[i];
		int j = i-1;
		while(j>=0 && A[j]>key) 
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1] = key;
	}
}

void print_array(int A[], int len) 
{
	for (int i=0; i<len; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}

int main()
{
    int A[] = {8, 7, 3, 4, 6, 2, 9, 1};
    int len = 8;
    cout << "Before sort: " << endl;
    print_array(A, len);
    insert(A, len);
    cout << "After sort: " << endl;
    print_array(A, len);
    return 0;
}
