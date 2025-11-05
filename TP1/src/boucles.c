#include <stdio.h>


int boucle_for() {
    int taille;
    char mid = '#';
    printf("Donner la taille : ");
    scanf("%d", &taille);

    printf("*\n");
    for (int i = 0; i < taille-1; i++) {
      printf("*");

      if (i == taille-2) {
        mid = '*';
      }
      for (int j = 0; j < i; j++) {
        printf("%c", mid);
      }
      printf("*");
      printf("\n");
    }
    return 0;
}


int boucle_dowhile() {
    int taille;
    char mid = '#';
    int i = 0;
    printf("Donner la taille : ");
    scanf("%d", &taille);

    printf("*\n");

    do {
      int j = 0;
      printf("*");
      if (i == taille-2) {
        mid = '*';
      }

      while (j < i) {
        printf("%c", mid);
        j++;
      }
      i++;
      printf("*\n");

    } while (i < taille-1);


    return 0;
}

int main() {
    boucle_for();
    boucle_dowhile();
}
