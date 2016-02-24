#include "Piece.h"

Piece::Piece()
{
    id = -1;
    rotation = 0;
}

Piece::Piece(int idPiece, int couleur[4]) : id(idPiece), rotation(0)
{
    for (int i = 0; i < 4; ++i) {
        this->couleur[i] = couleur[i];
    }
    //Compte le nombre de Zero afin de definir le type
    int nb_zero = 0;

    for (int i = 0; i < 4; i++) {
        if (couleur[i] == 0) {
            nb_zero++;
        }
    }

    if (nb_zero == 0) {
        this->type = INTERIEUR;
    } else if (nb_zero == 1) {
        this->type = BORD;
    } else if (nb_zero == 2) {
        this->type = COIN;
    }
}

const string Piece::toString()
{
    ostringstream s;
    s << this->id;

    return s.str();
}

const int Piece::getColor(int position)
{
    if (position > 4) {
        return -1;
    }

    return couleur[(position + rotation) % 4];
}

//Getters
int Piece::getRotation()
{
return this->rotation;
}

int* Piece::getTabCouleur(){
return this->couleur;
}

int Piece::getType(){
return this->type;
}

//Setters
void Piece::setRotation(int new_rotation)
{
this->rotation = new_rotation;
}

void Piece::setTabCouleur(int new_tab_couleur[4])
{
    for (int i = 0; i < 5; ++i) {
        couleur[i] = new_tab_couleur[i];
    }
}


