#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int quick(int arr[], int i, int j, int pivot);

int main()
{
	int n;
	int arr[100];
	
	srand((unsigned int)time(NULL));

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	quick(arr, 0, n - 1);
	
	
	return 0;
}

int quick(int arr[], int i, int j)
{
	int pivot = ;

	if (i >= j)
		return;
	

	
	if (pivot > arr[i] && arr[j] > pivot && i<j)
	{
		int buffer = arr[i];
		arr[i] = arr[j];
		arr[j] = buffer;
	}

	quick(arr, i, pivot - 1);
	quick(arr, pivot + 1, j);
}