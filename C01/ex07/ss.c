#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int s;

    printf("Enter the size of the array: ");
    scanf("%d", &s);

    // Dynamically allocate memory for the array
    int *tab = (int *)malloc(s * sizeof(int));

    if (tab == NULL) {
        printf("Memory allocation failed.\n");
        return 1;  // Exit with an error code
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < s; i++) {
        scanf("%d", &tab[i]);
    }

    int swap;
    int i = 0;

    while (i < s / 2) {
        swap = tab[i];
        tab[i] = tab[s - 1 - i];
        tab[s - 1 - i] = swap;
        i++;
    }

    printf("Reversed array: ");
    for (int i = 0; i < s; i++) {
        printf("%d ", tab[i]);
    }

    // Free the dynamically allocated memory
    free(tab);

    return 0;
}

