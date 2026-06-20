#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {4, 3, 1, 2, 10};

        int left = 0;
        int right = 0;
        while (left < 5)
        {
            if (arr[left] > arr[right])
            {
                swap(arr[left], arr[right]);
                right--;
            }
            else
            {
                left++;
            }
        }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}