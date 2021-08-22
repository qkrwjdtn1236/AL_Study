#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void divide(int arr[], int start, int end);
void merge(int arr[], int start,int mid, int end);

int N;
int sorted[100] = { 0 };

int main()
{
	
	cin >> N;
	
	int arr[100] = { 0 };
	
	srand(time(NULL));

	for (int i = 0; i < N; i++)
	{
		arr[i] = abs(rand() % 100) + 1;
	}
	divide(arr, 0, N);

	for (int i = 0; i < N; i++)
	{
		cout << sorted[i] << " ";
	}
}

void divide(int arr[], int start, int end) {
	int k = (end+start)/2;
	if (end - start <= 0)
		return;

	divide(arr, start, k);
	divide(arr, k + 1, end);
	merge(arr, start, k, end);
}

void merge(int arr[], int start, int mid, int end)
{
	int i = start;
	int j = mid + 1;
	int now = start;


	while (i <= mid && j <= end)
	{
		if (arr[i] > arr[j])
		{
			sorted[now] = arr[j];
			j++;
		}
		else
		{
			sorted[now] = arr[i];
			i++;
		}
		now++;
	}

	if (i < mid + 1)
	{
		for (int a = i; a < mid+1; a++)
		{
			sorted[now] = arr[a];
			now++;
		}
	}

	if (j <= end)
	{
		for (int a = j; a <= end; a++)
		{
			sorted[now] = arr[a];
			now++;

		}
	}

	for (int a = start; a <=end; a++)
	{
		arr[a] = sorted[a];
	}
	
}

	/*while (true)
	{
		if (i == mid + 1 || j == end + 1)
			break;

		if (arr[i] > arr[j])
		{
			int buffer = arr[i];
			arr[i] = arr[j];
			arr[j] = arr[i];
			j++;
		}
		else
		{
			int buffer = arr[j];
			arr[j] = arr[i];
			arr[i] = arr[j];
			i++;
		}
	}*/
