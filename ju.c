#include <stdio.h>
#include <stdlib.h>
int a,i,j,h;
int contando = 0;
int b[100][100];
int c[100];

int main(){
    printf ("jugando \n");
    printf ("cantidad de numeros:");
    scanf ("%d",&a);
    for (i=0; i<a; i++){
        for (j=0; j<a; j++){
             printf ("cual es el numero:");
             scanf ("%d",&b[i][j]);
            }
        }
    for (i=0; i<a; i++){
        for (j=0; j<a; j++){
            printf ("%d", b[i][j]);
            }
        }
    printf ("\n");
    
    for (i=0; i<a; i++){
        for (j=0; j<a; j++){
            c[h] = b[i][j];
            h = h + 1; 
            }
        }
    for (i=0; i<(a*a); i++){
        contando = contando + c[i];
        printf ("%d",c[i]);
        }
    printf ("\n");
    
    printf ("esta es la suma de los numeros: %d \n",contando);
    
  
  system("PAUSE");	
  return 0;
}
