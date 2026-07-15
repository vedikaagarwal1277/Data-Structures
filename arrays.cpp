#include <stdio.h>

int main() {
    int n,x,i,cnt=0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(arr[i] == x) {
            cnt++;
        }
    }

    printf("%d occurs %d times.\n", x, cnt);

    return 0;
}
