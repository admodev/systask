#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char decision;

    system("date");
    printf("Using systemd!\n");

    printf("Que desea hacer? (s: apagar maquina), (r: reiniciar maquina) (l: listar servicios)\n");

    scanf("%c", &decision);

    switch (decision) {
        case 's':
            system("shutdown -P now");
        case 'r':
            system("shutdown -r now");
        case 'l':
            system("systemctl list-dependencies $service");
        default:
            printf("Por favor, tome una decision...");
    }

    return 0;
}
