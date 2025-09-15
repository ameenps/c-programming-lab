#include <stdio.h>



void main()  
{
    int ar1[20], ar2[20], ar3[40];
    int m, n;
    
    void readarray(int[], int);
    void printarray(int[], int);
    void merge(int[], int[], int[], int, int);

    printf("No of elements in 1st array [1-20]: ");
    scanf("%d", &m);
    printf("Enter the elements in decreasing order:\n");
    readarray(ar1, m);

    printf("No of elements in 2nd array [1-20]: ");
    scanf("%d", &n);
    printf("Enter the elements in non-decreasing order:\n");
    readarray(ar2, n);

    merge(ar1, ar2, ar3, m, n);

    printf("Merged array:\n");
    printarray(ar3, m + n);

    
}

void readarray(int a[], int n)
{
    int i;
    for (i = 0; i < n; ++i)  
    {
        scanf("%d", &a[i]);  
    }
}

void printarray(int a[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);  
    }
    printf("\n");
}

void merge(int a[], int b[], int c[], int m, int n)
{
    int i, j, k;
    i = j = k = 0;



    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    while (i < m)
        c[k++] = a[i++];

    while (j < n)
        c[k++] = b[j++];
}

