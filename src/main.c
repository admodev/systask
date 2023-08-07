#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char decision;

    printf("Que desea hacer? (s: apagar maquina), (r: reiniciar maquina)\n");

    scanf("%c", &decision);

    if ('s' == decision)
        system("shutdown -r now");
    else if ('r' == decision)
        system("shutdown -P now");
    else
        printf("Por favor, tome una decision...");

	return 0;
}
