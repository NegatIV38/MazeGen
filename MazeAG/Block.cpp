#include "Block.h"

using namespace sf;

Block::Block(Texture _tx, int _px, int _py) : tx(_tx), px(_px), py(_py){
	sp.setTexture(tx);
	sp.setPosition(px, py);
}

Sprite* Block::getSP(){
	return &sp;
}

int Block::getPX(){
	return this->px;
}

int Block::getPY(){
	return this->py;
}

bool Block::getH(){
	return this->haut;
}

bool Block::getB(){
	return this->bas;
}

bool Block::getD(){
	return this->droite;
}

bool Block::getG(){
	return this->gauche;
}

void Block::setSP(Sprite arg){
	sp = arg;
}

void Block::setPX(int arg){
	px = arg;
}

void Block::setPY(int arg){
	py = arg;
}

void Block::setH(bool arg){
	haut = arg;
}

void Block::setB(bool arg){
	bas = arg;
}

void Block::setG(bool arg){
	gauche = arg;
}

void Block::setD(bool arg){
	droite = arg;
}

void Block::drawSP(RenderWindow *win){
	win->draw(sp);
}