#include<stdio.h>
void rverese(int arr[], int s, int k)
{
    int temp;
    if(s < k)
    {
        temp = arr[s];
        arr[s] = arr[k];
        arr[k] = temp;
        s++;
        k--;
    }
}
void print(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);

  printf("\n");
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
    rverese(arr, 0, n-1);
    printf("Reversed array is \n");
    print(arr, n);
    return 0;
}
