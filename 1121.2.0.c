/**
	Arquivo:1121.c
	Implementa:robo colecionador
	Autor:gustavo antonio martini
	Data:12/05/2021
*/

#include <stdio.h>


int main()
{
  int linha, coluna, comandos;
    while (scanf("%d %d %d", &linha, &coluna, &comandos) && linha!=0 && coluna!=0 && comandos!=0)
    {
        char arena[100][100], comando[50000];
        int i, j, r1, r2, dir = -1, fig = 0;


        for (i = 0; i < linha; ++i)
        {
            scanf("%s", (char*) &arena[i]);

            if (dir < 0) {
                for (j = 0; j < coluna; ++j) {
                    switch (arena[i][j]) {
                        case 'O':
                            dir = 0; r1 = i; r2 = j;
                            break;
                        case 'N':
                            dir = 1; r1 = i; r2 = j;
                            break;
                        case 'L':
                            dir = 2; r1 = i; r2 = j;
                            break;
                        case 'S':
                            dir = 3; r1 = i; r2 = j;
                    }
                }
            }
        }

        scanf("%s", comando);

        for (i = 0; i < comandos; ++i) {
            switch (comando[i]) {
                case 'D':
                    dir = (dir + 1) % 4;
                    break;
                case 'E':
                    dir = ((dir - 1) % 4 + 4) % 4;
                    break;
                case 'F':
                    switch (dir) {
                        case 0:  // 'O'
                            if (r2 > 0 && arena[r1][r2-1] != '#')
                                --r2;
                            break;
                        case 1:  // 'N'
                            if (r1 > 0 && arena[r1-1][r2] != '#')
                                --r1;
                            break;
                        case 2:  // 'L'
                            if (r2 < coluna-1 && arena[r1][r2+1] != '#')
                                ++r2;
                            break;
                        case 3:  // 'S'
                            if (r1 < linha-1 && arena[r1+1][r2] != '#')
                                ++r1;
                    }
                    if (arena[r1][r2] == '*') {
                        arena[r1][r2] = '.';
                        ++fig;
                    }
            }
        }

        printf("%d\n", fig);
    }

    return 0;
}
