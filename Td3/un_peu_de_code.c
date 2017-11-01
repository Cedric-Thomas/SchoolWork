#include <stdlib.h>
#include <stdio.h>
#define PI 3.14159
int main()
{
  int rayon, long_rect, larg_rect, haut_cyld, aire_rect;
  float aire_crcl, aire_cyld;
  printf("Saisir rayon crcl :");
  scanf("%d",&rayon);
  printf("Saisir longeur rect :");
  scanf("%d",&long_rect);
  printf("Saisir largeur rect :");
  scanf("%d",&larg_rect);
  printf("Saisir hauteur cyl :");
  scanf("%d",&haut_cyld);
  aire_rect = long_rect * larg_rect;
  aire_crcl = PI * (rayon*2);
  aire_cyld = (2 * PI * rayon) * haut_cyld;
  printf("L'aire est: \n"
  "cercle: %g\n"
  "rectangle %d\n"
  "cylindre %g",
  aire_crcl, aire_rect, aire_cyld);
}
