#include <stdio.h>
int binary(int a[], int start, int last, int key)
{
    if (last >= start)
    {
        int mid = start + (last - start) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        if (a[mid] > key)
        {
            return binary(a, start, mid - 1, key);
        }
        return binary(a, mid + 1, last, key);
    }
    return -1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d\t", &a[i]);
    }
    int key;
    scanf("%d", &key);
    int ans = binary(a, 0, n - 1, key);
    printf("%d", ans);
}