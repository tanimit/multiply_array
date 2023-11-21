#include <stdio.h>

int multiply(int arr[], int n){
    int mul = 1;
    for (int i = 0; i < n; i++)
    {
        mul = mul * arr[i];
    }
    return mul;

}

int main()
{
    int n, i, result;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements : ");
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    result = multiply(arr,n);

    printf("%d", result);

}
