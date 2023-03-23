#include <stdio.h>



void bubbleSort(int a[], int n)
{
    int swap[9] = {0,0,0,0,0,0,0,0,0};

    int count = 0;
    int temp = 0;
    for (int i = 0; i < n - 1; i++){
        for (int k = 0; k < n - i - 1; k++){
            if (a[k] > a[k+1]){
                temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
                swap[i]++;        
            }
        }
    }
    for(int i=0; i<9; i++){
    printf("swaps took: %d at index %d\n", swap[i],i);
    }
}

int main()
{
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    bubbleSort(arr, 9);
    for (int i = 0; i<9; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}