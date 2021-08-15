#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[101];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int buffer = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = buffer;
            }
        }
    }
    cout << "정렬 처리 후 출력" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}