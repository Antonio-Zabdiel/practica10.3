#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int valid_datos(int a,int b) {
    if((a >= 1) && (a <= 50) && (b >= 1) && (b <= 50)){
        return 1;
    } else {
        return 0;   
    }
}

int main() {
    int m, n;
    int i, j, k, l, a, b;

    srand(time(NULL));
    printf("ingresa la longitud que deseas que tenga: ");
    scanf("%d %d", &m, &n);
    
    if(valid_datos(m, n)) {
        int array_num[m][n];
        //rellenar array con numeros random
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                array_num[i][j] = rand()%21;
            }
        }

        //imprimir array original
        printf("imprimir array original\n");
        printf("===================================================================================\n");
        for (a = 0; a < m; a++) {
            for (b = 0; b < n; b++) {
                printf("[%d] ",array_num[a][b]);
            }
            printf("\n");
        }

        printf("imprimir array en forma de serpiente\n");
        printf("===================================================================================\n");
        l = 0;
        //ahora toca imprimir el array en forma de serpiente
        //este for tiene que ser que ser para la columna
        for(k = 0 ; k < m ; k++) {
            //esto para ver cuando la fila incrementa y cuando decrementa
            if(l == 0) {
                while (l != m) {
                    printf("[%d] ", array_num[l][k]);
                    l++;
                }
                l--;
            } else if (l <= m) {
                while (l != 0) {
                    printf("[%d] ", array_num[l][k]);
                    l--;
                }
            } else {
                printf("hubo un pequeño error");
            }
        }
    } else {
        printf("datos no validos, vuelve a intentar\n");
    }

    return 0;
}
