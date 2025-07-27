#include <stdio.h>

int main() {
    int vertical, horizontal;
    printf("Enter the size of table vertically: ");
    scanf("%d", &vertical);
    printf("Enter the size of table horizontally: ");
    scanf("%d", &horizontal);
    
    printf("\nMultiplication Table (%d x %d)\n\n", vertical, horizontal);

    for (int v = 1; v <= vertical; v++) {
        for (int h = 1; h <= horizontal; h++) {
            printf("%4d", v * h);
        }
        printf("\n");
    }

    return 0;
}