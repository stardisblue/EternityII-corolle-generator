#ifndef JEU_H
#define JEU_H

#include <math.h>
#include <iostream>

#include "Piece.h"


class Jeu {
	
	public:

	Jeu(int size); //constructeur
	int addPiece(Piece p); //Ajout d'une piece dans le jeu

	//Getters 
	int getSize();
	Piece* getJeu();
	Piece* getTabC();
	Piece* getTabB();
	Piece* getTabI();


	private:

	int size;
	Piece* jeu;
	Piece* TabC;
	Piece* TabB;
	Piece* TabI;

	int nb_pieces_presentes;

};

#endif
