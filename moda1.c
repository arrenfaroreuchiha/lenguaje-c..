#include <stdio.h>
#include <stdlib.h>
int a,i,j,s;
int b[100][100];
int v[100];
int f = 0;

int main(){
    printf ("la moda en una matrix \n");
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
           v[s] = b[i][j];
           s = s + 1; 
           }
       }
   for (i=0; i<(a*a); i++){
       printf (" %d", v[i]);
       }
   printf ("\n");
   for (i=0; i<a; i++){
       for (j=1; j<a; j++){
           if (v[i] == v[j]){
                     f = v[i];
                     }
           }
       }
   printf ("esta es la moda: %d \n", f);
   
  system("PAUSE");	
  return 0;
}
