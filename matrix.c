#include <stdio.h>
#include <stdlib.h>
int a,i,j;
int c = 0;
int b[100][100];

int main(){
    printf ("UNA MATRIX \n");
    printf ("dimenciones de la matrix:");
    scanf ("%d",&a);
    for (i=0; i<a; i++){
        for (j=0; j<a; j++){
            printf ("cual es el numero [%d],[%d]:", i + 1, j + 1);
            scanf ("%d",&b[i][j]);
            c = c + b[i][j];
            }
        }
    for (i=0; i<a; i++){
        for (j=0; j<a; j++){
            printf ("%d", b[i][j]);
            }
            printf ("\n");
        }
  printf ("esta es la suma: %d \n", c);
  system("PAUSE");	
  return 0;
}
