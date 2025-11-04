#include <iostream>
using namespace std;

void quickSort(int arr[], int i, int j)
{
    if (i >= j)  // ✅ 递归结束条件
        return;

    int val = arr[i];
    int l = i;
    int r = j;

    while (l < r)
    {
        // 从右往左找第一个小于基准的数
        while (l < r && arr[r] >= val)
            r--;
        if (l < r)
            arr[l++] = arr[r];

        // 从左往右找第一个大于基准的数
        while (l < r && arr[l] <= val)
            l++;
        if (l < r)
            arr[r--] = arr[l];
    }

    arr[l] = val;  // 放回基准值

    // 递归处理左右两部分
    quickSort(arr, i, l - 1);
    quickSort(arr, l + 1, j);
}

void quickSort(int arr[], int size)
{
    quickSort(arr, 0, size - 1); // ✅ 修正
}
int main()
{
    int arr[] = {12, 3, 8, 20, 9, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, size);
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;

    return 0;
} 

