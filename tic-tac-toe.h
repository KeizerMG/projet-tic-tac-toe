#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#define SIZE 3 // Taille du plateau

void initialiser_grille(char board[SIZE][SIZE]);
void afficher_grille(char board[SIZE][SIZE]);
int verifier_victoire(char board[SIZE][SIZE]);
int jeu_termine(char board[SIZE][SIZE]);

#endif // TIC_TAC_TOE_H
