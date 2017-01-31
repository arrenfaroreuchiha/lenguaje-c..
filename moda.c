#include <stdio.h>
#include <stdlib.h>
int a,i,j,c;
int b[100][100];
int w = 0;

int main(){
    printf ("MATRIX \n");
    printf ("cuanto es la matrix:");
    scanf ("%d",&a);
    for (i=0; i<a; i++){
        for (j=0; j<a; j++){
            printf ("cual es el numero:");
            scanf ("%d",&b[i][j]);
            }
        }
        
    
    for (i=0; i<a; i++){
        for (j= 1; j<a; j++){
            if(b[i] == b[j]){
               w = b[j];
            }
             printf ("%d", b[i][j]);
        }
        printf("\n");
    }
    printf ("este es el numero que mas se repitio: %d \n", w);
  system("PAUSE");	
  return 0;
}
