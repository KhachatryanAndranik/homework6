//Exercise 7
/*
#include <stdio.h>

int main() {
    int s[6] = {5,7,2,9,8}, i, n;

    printf(" The elements  are : \n");
    for (i = 0; i < 5; i++) {
        printf(" element - %d : %d \n", i, *(s + i));
    }
    return 0;
}
*/

// Exercise 8
/*
#include <stdio.h>
#include <string.h>

void swap(char* x, char* y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char* str, int left, int right) {
    if (left == right) {
        printf("%s  ", str);
    }
    else {
        for (int i = left; i <= right; i++) {
            swap((str + left), (str + i));
            permute(str, left + 1, right);
            swap((str + left), (str + i));
        }
    }
}

int main() {
    char str[] = "abcd";
    int n = strlen(str);

    printf("The permutations of the string are:\n");
    permute(str, 0, n - 1);

    return 0;
}
*/

// Exercise 9
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr;
    int n, i;
    int largest;

    printf("Input total number of elements (1 to 100): ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The Largest element is: %.2f\n", (float)largest);

    free(arr);

    return 0;
}
*/


// Exercise 14

/*
#include <stdio.h>


int main() {
    int i, j, temp;
    int arr[5];

    printf("Enther the elements in the array: ");

    for (i = 0; i < 5; i++) {
        printf("elemen %d: ", i + 1);
        scanf("%d", arr + i);
    }

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (*(arr + i) > *(arr + j)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        printf(" element - %d : %d \n", i + 1, *(arr + i));
    }
}

*/

// Exercise 21
/*
#include <stdio.h>

int main() {
    char alph[27];
    int x;
    char* p;

    p = alph;

    for (x = 0; x < 26; x++) {
        *p = x + 'A';
        p++;
    }

    p = alph;


    printf(" The Alphabets are : \n");
    for (x = 0; x < 26; x++) {
        printf(" %c ", *p);
        p++;
    }
    printf("\n\n");
    return 0;
}
*/

// Exercise 22.
/*
#include <stdio.h>

void reverse(char* str) {
    char* end = str;
    while (*end != '\0') {
        end++;
    }
    end--;


    while (end >= str) {
        printf("%c", *end);
        end--;
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    printf("Reverse of the string is: ");
    reverse(str);

    return 0;
}
*/