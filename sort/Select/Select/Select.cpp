//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	
//	int arr[100];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i < n-1; i++)
//	{
//
//		// 최대값 구하기
//		int buffer = arr[i];
//		int index = 0;
//		for (int j = i+1; j < n; j++)
//		{
//			if (buffer < arr[j])
//			{
//				buffer = arr[j];
//				index = j;
//			}
//		}
//		int before = arr[i];
//		arr[i] = buffer;
//		arr[index] = before;
//
//	}
//	
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//int selectMin(int n,int arr[])
//{
//	int result = arr[0];
//	for (int i = 0; i < n - 1; i++)
//	{
//		result = max(result, arr[i+1]);
//	}
//
//	return result;
//}