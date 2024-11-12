#include <stdio.h>

void to_upper(char *chaine) {
    int i = 0; // Initialiser un index pour parcourir la chaîne

    // Transformer chaque lettre minuscule en majuscule
    while (chaine[i] != '\0') {
        if (chaine[i] >= 'a' && chaine[i] <= 'z') {
            // Calculer la lettre majuscule correspondante
            chaine[i] = chaine[i] - 'a' + 'A';
        }
        i++; // Passer au caractère suivant
    }
}

void to_lower(char *chaine) {
    int i = 0; // Initialiser un index pour parcourir la chaîne

    // Transformer chaque lettre majuscule en minuscule
    while (chaine[i] != '\0') {
        if (chaine[i] >= 'A' && chaine[i] <= 'Z') {
            // Calculer la lettre minuscule correspondante
            chaine[i] = chaine[i] - 'A' + 'a';
        }
        i++; // Passer au caractère suivant
    }
}

int main() {
    char texte[] = "TexTe MixTe"; // Chaîne de test
    to_upper(texte); // Conversion en majuscule
    printf("Majuscules : %s\n", texte);

    to_lower(texte); // Conversion en minuscule
    printf("Minuscules : %s\n", texte);

    return 0;
}