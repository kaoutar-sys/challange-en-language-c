#include <stdio.h>

int main() {
    int nombre;
    int inverse = 0;

    printf("Entrer un nombre: ");
    scanf("%d", &nombre);

    while (nombre != 0) {
        inverse = inverse * 10 + nombre % 10;
        nombre = nombre / 10;
    }

    printf("L'inverse est: %d\n", inverse);

    return 0;
}
