#include <stdio.h>

int main(void)
{
    int N;
    int arr1[50] = {};
    int arr2[50] = {};
    int *p;
    int *q;

    scanf("%d", &N);

    for (p = arr1; p < arr1 + N; p++) {
        scanf("%d", p);
    }

    for (p = arr2; p < arr2 + N; p++) {
        scanf("%d", p);
    }

    for (p = arr1, q = arr2 + N - 1; p < arr1 + N; p++, q--) {
        printf("%d ", *p + *q);
    }

    return 0;
}
