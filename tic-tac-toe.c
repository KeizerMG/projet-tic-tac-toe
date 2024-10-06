#include <stdio.h>
#include "tic-tac-toe.h"

// Initialiser la grille
void initialiser_grille(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = ' '; // Initialise chaque case à vide
        }
    }
}

// Afficher la grille
void afficher_grille(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c", board[i][j]);
            if (j < SIZE - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < SIZE - 1) {
            printf("-----\n"); // Séparateurs entre les lignes
        }
    }
}

// Vérifier la victoire
int verifier_victoire(char board[SIZE][SIZE]) {
    // Vérifier les lignes, les colonnes et les diagonales
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return 1; // Victoire dans une ligne
        }
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return 1; // Victoire dans une colonne
        }
    }
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return 1; // Victoire diagonale
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return 1; // Victoire diagonale
    }
    return 0; // Pas de victoire
}

// Vérifier si le jeu est terminé
int jeu_termine(char board[SIZE][SIZE]) {
    // Vérifier si toutes les cases sont occupées
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == ' ') {
                return 0; // Il y a encore des cases vides
            }
        }
    }
    return 1; // Pas de case vide
}
