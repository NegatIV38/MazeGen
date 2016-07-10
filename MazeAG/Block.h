#pragma once
#include <SFML\Graphics.hpp>

class Block{
public:
	Block(sf::Texture _tx, int _px, int _py);
	sf::Sprite* getSP();
	int getPX();
	int getPY();
	bool getH();
	bool getB();
	bool getD();
	bool getG();

	void setSP(sf::Sprite arg);
	void setPX(int arg);
	void setPY(int arg);
	void setH(bool arg);
	void setB(bool arg);
	void setG(bool arg);
	void setD(bool arg);

	void drawSP(sf::RenderWindow *win);
private:
	sf::Texture tx;
	sf::Sprite sp;
	int px;
	int py;
	bool haut;
	bool bas;
	bool droite;
	bool gauche;
};