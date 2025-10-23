#include <stdio.h>
#include <stdlib.h>

// 1. LoadString
char *LoadString(int N) {
    char *str = (char *)malloc(N * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    printf("Enter a string: ");
    fgets(str, N, stdin);
    return str;
}

// 2. StringLength
int StringLength(char *str) {
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n')
        len++;
    return len;
}

// 3. LoadArray
void LoadArray(char *p, char arr[]) {
    int i = 0;
    while (p[i] != '\0' && p[i] != '\n') {
        arr[i] = p[i];
        i++;
    }
    arr[i] = '\0';
}

// 4. ReverseArray
void ReverseArray(char arr[], char rev[], int n) {
    for (int i = 0; i < n; i++)
        rev[i] = arr[n - i - 1];
    rev[n] = '\0';
}

// 5. DisplayArray
void DisplayArray(char arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%c", arr[i]);
    printf("\n");
}

// 6. SumStringASCII (recursive)
int SumStringASCII(char *p) {
    if (*p == '\0' || *p == '\n')
        return 0;
    return *p + SumStringASCII(p + 1);
}

// 7. ReverseString (recursive)
void ReverseString(char *start, char *end) {
    if (start >= end)
        return;
    char temp = *start;
    *start = *end;
    *end = temp;
    ReverseString(start + 1, end - 1);
}

// 8. Main
int main() {
    char *str;
    int n;

    printf("Please enter the maximum size of the string: ");
    scanf("%d", &n);
    getchar(); // إزالة الـ '\n' من الإدخال السابق

    str = LoadString(n);
    int len = StringLength(str);

    char arr[len + 1], rev[len + 1];
    LoadArray(str, arr);

    printf("\nOriginal array: ");
    DisplayArray(arr, len);

    ReverseArray(arr, rev, len);
    printf("Reversed array: ");
    DisplayArray(rev, len);

    int sum = SumStringASCII(str);
    printf("Sum of ASCII values (recursive): %d\n", sum);

    ReverseString(str, str + len - 1);
    printf("String reversed recursively: %s\n", str);

    free(str);
    return 0;
}
