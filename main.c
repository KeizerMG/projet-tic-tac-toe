#include <stdio.h>
#include "tic-tac-toe.h"

int main() {
    char grille[SIZE][SIZE];
    int ligne, colonne;
    int victoire = 0; // 0 si pas de victoire
    char joueur = 'X'; // Le joueur actuel

    initialiser_grille(grille);

    while (!victoire && !jeu_termine(grille)) {
        afficher_grille(grille);
        printf("Joueur %c, entrez la ligne et la colonne (1-3): ", joueur);
        
        // Lire l'entrée de l'utilisateur
        if (scanf("%d-%d", &ligne, &colonne) != 2 || ligne < 1 || ligne > 3 || colonne < 1 || colonne > 3) {
            printf("Entrée invalide ! Veuillez entrer un format valide (1-3-1-3).\n");
            continue; // Demande à l'utilisateur d'entrer à nouveau
        }

        // Ajuster pour les indices de tableau (0-2)
        ligne -= 1; 
        colonne -= 1;

        // Vérifier si la case est occupée
        if (grille[ligne][colonne] != ' ') {
            printf("Cette case est déjà occupée ! Choisissez une autre.\n");
            continue; // Demande à l'utilisateur d'entrer à nouveau
        }

        // Placer le symbole du joueur sur la grille
        grille[ligne][colonne] = joueur;

        // Vérifier si le joueur a gagné
        victoire = verifier_victoire(grille);
        if (!victoire) {
            // Changer de joueur
            joueur = (joueur == 'X') ? 'O' : 'X';
        }
    }

    afficher_grille(grille);
    if (victoire) {
        printf("Joueur %c a gagné !\n", joueur);
    } else {
        printf("Le jeu est terminé, aucune victoire !\n");
    }

    return 0;
}
