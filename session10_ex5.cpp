#include <stdio.h>

int main() {
    int arr[100];
    int n, value, left, right, mid, found;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap gia tri cho phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);

    left = 0;
    right = n - 1;
    found = 0;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == value) {
            found = 1;
            break;
        } else if (arr[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found) {
        printf("Phan tu %d duoc tim thay tai vi tri %d\n", value, mid);
    } else {
        printf("Phan tu %d khong co trong mang\n", value);
    }

    return 0;
}

