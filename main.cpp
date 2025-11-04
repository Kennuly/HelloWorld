#include <iostream>
using namespace std;
//kuoluo给sort添加注释
void sort(int arr[], int size)
{
    bool flag = false;
    //阿洛添加注释
    int temp = 0;
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = true;
            }
        }
        if(!flag)
        {
            break;
        }
    }
}
int main()
{
    int arr[] = {12, 3, 8, 20, 9, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);

    return 0;
} 

