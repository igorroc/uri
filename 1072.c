#include <stdio.h>

int main() {
    int tam, num, i;
    int in = 0, out = 0;
    scanf("%d", &tam);
    for (i = 0; i < tam; i++) {
        scanf("%d", &num);
        if (num >= 10 && num <= 20) {
            in++;
        } else {
            out++;
        }
    }
    printf("%d in\n%d out\n", in, out);

    return 0;
}