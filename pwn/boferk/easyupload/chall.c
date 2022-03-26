#include <stdio.h>

void init()
{
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    setbuf(stderr, NULL);
}

void secret()
{
    printf("Congrats!\n");
    printf("Acum incearca si remote\n");
}

void echo()
{
    char buffer[20];
    printf("Hello Hacker! Tocmai ce am primit IBAN-ul tau. Acum poti sa extragi cati bani doresti\n");
    printf("Introdu suma pe care vrei sa o extragi:");
    scanf("%s", buffer);
    printf("Tranzactie acceptata, suma de %s LEI a fost extrasa cu succes", buffer);
}

int main()
{
    init();
    echo();

    return 0;
}
