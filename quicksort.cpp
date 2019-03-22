#include <iostream>

using namespace std;

void printArray(int *array, int n)
{
    for (int i = 0; i < n; ++i)
        std::cout << array[i] << std::endl;
}

void quickSort(int *array, int lhs, int rhs)
{
    int i = lhs;
    int j = rhs;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > lhs)
        quickSort(array, lhs, j);
    if (i < rhs)
        quickSort(array, i, rhs);
}

int main()
{
    int n;
    //int array[] = {95, 45, 48, 98, 1, 485, 65, 478, 1, 2325};
    //int n = sizeof(array)/sizeof(array[0]);
    cout<<"Enter the size of array" <<endl;
    cin>>n;
    int arr [n];
    for(int i=0; i<n;i++){
        cout<<"Enter the"<<i+1<<"-th element"<<endl;
        cin>>arr[i];
    }

    std::cout << "Before Quick Sort :" << std::endl;
    printArray(arr, n);

    quickSort(arr, 0, n);

    std::cout << "After Quick Sort :" << std::endl;
    printArray(arr, n);
    return (0);
}
