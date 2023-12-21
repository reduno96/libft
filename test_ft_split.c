#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to compare two string arrays
int compareArrays(char **arr1, char **arr2) {
    int i = 0;
    while (arr1[i] && arr2[i]) {
        if (strcmp(arr1[i], arr2[i]) != 0) {
            return 0;
        }
        i++;
    }
    if (arr1[i] || arr2[i]) {
        return 0;
    }
    return 1;
}

// Function to free memory allocated for string array
void freeArray(char **arr) {
    int i = 0;
    while (arr[i]) {
        free(arr[i]);
        i++;
    }
    free(arr);
}

int main() {
    char **result;

    // Test Case 1: Splitting "Hello World" by space
    result = ft_split("Hello World", ' ');
    char *expected1[] = {"Hello", "World", NULL};
    if (compareArrays(result, expected1)) {
        printf("Test Case 1 Passed\n");
    } else {
        printf("Test Case 1 Failed\n");
    }
    freeArray(result);

    // Test Case 2: Splitting "This,is,a,test" by comma
    result = ft_split("This,is,a,test", ',');
    char *expected2[] = {"This", "is", "a", "test", NULL};
    if (compareArrays(result, expected2)) {
        printf("Test Case 2 Passed\n");
    } else {
        printf("Test Case 2 Failed\n");
    }
    freeArray(result);

    // Test Case 3: Splitting "One,Two,Three" by comma
    result = ft_split("One,Two,Three", ',');
    char *expected3[] = {"One", "Two", "Three", NULL};
    if (compareArrays(result, expected3)) {
        printf("Test Case 3 Passed\n");
    } else {
        printf("Test Case 3 Failed\n");
    }
    freeArray(result);

    // Test Case 4: Splitting "NoDelimiter" by comma
    result = ft_split("NoDelimiter", ',');
    char *expected4[] = {"NoDelimiter", NULL};
    if (compareArrays(result, expected4)) {
        printf("Test Case 4 Passed\n");
    } else {
        printf("Test Case 4 Failed\n");
    }
    freeArray(result);

    return 0;
}