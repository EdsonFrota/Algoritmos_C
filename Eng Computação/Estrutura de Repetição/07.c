#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "");
    srand(time(NULL));

    int ed, s, on;

    s = 1 + rand() % 10;

    printf("N�mero: ");
    scanf("%d", &on);

    if (on == s)
    {
        for (ed=0; ed<100; ++ed)
        {
            printf("QUE SORTE, ACERTOU! \n");
        }
    }
    else
    {
        printf("\n\n\tERRADO!!!!!! o n�mero sorteado foi %d ! \n", s);
    }

    getch();
    return 0;


    system("pause");


}
