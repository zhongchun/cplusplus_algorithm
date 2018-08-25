/**
* insert sort algorithm
*/
#include <iostream>
using namespace std;

void insertSort(int A[], int len)
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

void printArray(int A[], int len) 
{
	for (int i=0; i<len; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}

int main()
{
	// int A[] = {3, 1, 5, 2, 7};
	int A[] = {3, 1};
	insertSort(A, 2);
	printArray(A, 2);
	return 0;	
}
