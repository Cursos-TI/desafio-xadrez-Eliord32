#include <stdio.h>


int main() {
  // Váriavel r da Rainha e t de Torre.  
int  r = 0, t = 0, j = 1;
 // Movimentação do bispo.
for (int bispo; bispo < 5; bispo++)
{
   printf (" Bispo cima, direita\n");
} 
// Movimentação da rainha.
do {
   printf (" Rainha esquerda\n");
   r++;
}while (r <= 7 );
// Movimentação da torre.
while (t < 5)
{
  printf (" Torre direita\n");
  t++;
}


 while (j--)
{
  for ( int i = 0; i < 2; i++){
      printf (" Cavalo Baixo\n");

  }
      printf (" Cavalo Esquerda\n");

}

    return 0;
}
