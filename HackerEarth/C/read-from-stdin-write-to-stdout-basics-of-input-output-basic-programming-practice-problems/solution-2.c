
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char S[20];

    scanf("%d", &N);
    scanf("%19s", S);

    printf("%d\n", N * 2);
    printf("%s\n", S);

    return 0;
}