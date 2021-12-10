#include <stdio.h>

void head(int* arr, int* out, int n);

int main() {
	// Test the head function
	int n = 5;
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int* out = (int*)calloc(n, sizeof(int));

	head(arr, out, n);

	for (int i = 0; i < n; i++) {
		printf("%d\r\n", out[i]);
	}

	free(out);

	return 0;
}
