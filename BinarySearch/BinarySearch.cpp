#include<stdio.h>

int BinarySearch(int a[], int value, int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == value)
            return mid;
        if (a[mid] > value)
            high = mid - 1;
        if (a[mid] < value)
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int n;
    int T[25] = { 1,3,6,8,32,56,59,67,76,86,95,99,200,298,299,300,309,345,356,387,393,399,400,490,500 };
    scanf_s("%d",&n);
    printf("%d",BinarySearch(T, n, 25)+1);
	return 0;
}