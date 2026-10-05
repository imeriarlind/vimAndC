#include <stdio.h>

void swap(int *x, int *y);
void quicksort(int array[], int length);
void quicksort_recursion(int array[], int low, int high);
int partition(int array[], int low, int high);

int main(void)
{

    int a[]= {3,5,1,6,7,4,2,2,14,125};
    for(int i=0; i < sizeof(a) / sizeof(a[0]); i++)
        printf("%d ",a[i]);

    printf("\n");
    quicksort(a, sizeof(a) / sizeof(a[0]));

    for(int i=0; i < sizeof(a) / sizeof(a[0]); i++)
        printf("%d ",a[i]);

    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void quicksort(int array[], int length)
{
    quicksort_recursion(array, 0, length - 1);
}

void quicksort_recursion(int array[], int low, int high)
{
    if (low < high)
    {
        int pivot_inderx = partition(array, low, high);
        quicksort_recursion(array, low, pivot_inderx -1);
        quicksort_recursion(array, pivot_inderx + 1, high);
    }
}


int partition(int array[], int low, int high)
{
    int pivot_value = array[high];
    int i = low;

    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot_value)
        {
            swap(&array[i], &array[j]);
            i++;
        }
    }
    swap(&array[i], &array[high]);

    return i;
}
