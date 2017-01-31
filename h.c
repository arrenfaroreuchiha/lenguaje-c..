#include <stdio.h>
#include <stdlib.h>
int a,i,j,h;
int b[100][100];
int c[100];

int main(){
    pritnf ("PRACTICANDO \n");
    printf ("cantidad:");
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
        printf ("%d", c[i]);     
        }
   
  system("PAUSE");	
  return 0;
}
