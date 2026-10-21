#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];
    int max = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
    }

    int freq[max + 1];
    for (i = 0; i <= max; i++)
        freq[i] = 0;

    for (i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] == 2) {
            printf("%d\n", arr[i]);
            return 0;
        }
    }

    return 0;
}
