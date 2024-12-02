#include <stdio.h>
int main(){
	int array[] = {13, 15, 7, 22, 28, 33, 10};
	int n = sizeof(array)/sizeof(array[0]);
		for(int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if (array[j] > array[j + 1]) {
					int temp = array[j];
				    array[j] = array[j + 1];
				    array[j + 1] = temp;
				}
			}
		}
	printf("sorted array: \n");
	for (int i = 0; i < n; i++){
		printf("%d", array[i]);
	}
	printf("\n");
	return 0;
}
