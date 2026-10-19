
#include <stdio.h>

int main() {
    int n, target;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    int first = -1, last = -1;

    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    if (first == -1) {
        printf("First occurrence: -1\n");
        printf("Last occurrence: -1\n");
        printf("Indices: -1, -1\n");
    } else {
        printf("First occurrence: %d\n", nums[first]);
        printf("Last occurrence: %d\n", nums[last]);
        printf("Indices: %d, %d\n", first, last);
    }

    return 0;
}