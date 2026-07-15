#include <stdio.h>

int main() {
    int n,x,i,count=0;

    printf("Enter number of elements:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the array elements:\n");
    for(i = 0;i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search:");
    scanf("%d",&x);

    for(i=0;i<n;i++) {
        if(arr[i]==x) {
            count++;
        }
    }

    if(count>0) {
        printf("%d exists and occurs %d times.\n",x,count);
    } else {
        printf("%d does not exist.\n",x);
    }

    return 0;
}
