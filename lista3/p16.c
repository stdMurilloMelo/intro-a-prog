#include <stdio.h>

int countUniqueElements(int arr[], int n) {
    int count = 0;
    int i, j;
    for (i = 0; i < n; i++) {
        int unique = 1;
        for (j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                unique = 0;
                break;
            }
        }
        if (unique == 1) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    int i;
    
    scanf("%d", &n);

    int arr[5000];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int uniqueCount = countUniqueElements(arr, n);
    printf("%d\n", uniqueCount);

    return 0;
}
