#include <iostream>
using namespace std;

void selectionSort(int arr[], int size){


for (int i = 0; i < size - 1; i++)
{
int minIndex = i;

    for (int j = i + 1; j < size; j++)
    {
        if (arr[j] < arr[minIndex])
        {
            minIndex = j;
        }
    }

    int temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
}

}

int main()
{
int arr[6];

cout << "Enter 6 numbers: ";

for (int i = 0; i < 6; i++){


    cin >> arr[i];
}

selectionSort(arr, 6);

cout << "Sorted: ";

for (int i = 0; i < 6; i++){


    cout << arr[i];
}


cout << "Smallest: " << arr[0] << endl;
cout << "Largest: " << arr[5] << endl;

return 0;

}
