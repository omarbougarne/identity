#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nom[50];
    char prenom[50];
    int age;
    int num;
    char sexe;

    printf("Presentez vous\n");
    printf("Mon nom est:\n");
    scanf("%49s", nom);
    printf("Mon prenom est:\n");
    scanf("%49s", prenom);
    printf("Mon age est:\n");
    scanf("%d", &age);
    printf("Mon numero de telephone est:\n");
    scanf("%d", &num);
    printf("Mon sexe est:\n");
    scanf(" %s", sexe);

    return 0;
}
