#include <iostream>
using namespace std;
bool sort(int arr[], int size)
{
    if (size == 1)
    {
        return true;
    }
    bool array = sort(arr + 1, size - 1);
    return (arr[0] < arr[1] && arr);
}
int main(int argc, char const *argv[])
{
    int arr[5] = {9, 2, 3, 4, 5};
    cout << sort(arr, 5);

    return 0;
}
