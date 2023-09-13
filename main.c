#include<stdio.h>
#include<stdlib.h>


int main()
{
    char n[50], p[50], s[20];
    int age, nt;

    printf("Veuillez entrer votre Nom :\n");
    scanf("%s", n);

    printf("Veuillez entrer votre Prenom :\n");
    scanf("%s", p);

    printf("Veuillez entrer votre Age :\n");
    scanf("%d", &age);

    printf("Veuillez entrer votre Sexe :\n");
    scanf("%s", s);

    printf("Veuillez entrer votre Numero de telephone :\n");
    scanf("%d", &nt);

    printf("\n");
    printf("Votre Nom est : %s\n", n);
    printf("Votre Prénom est : %s\n", p);
    printf("Votre Age est : %d\n", age);
    printf("Votre Sexe est : %s\n", s);
    printf("Votre Numéro de téléphone est : %d\n", nt);

    return 0;
}
