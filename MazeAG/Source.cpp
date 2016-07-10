#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <ctime>
#include "Block.h"

using namespace sf;
using namespace std;

#define TX 16
#define TY 16

void affSP(Sprite t[TX][TY], RenderWindow *win);
void initSP(Sprite t[TX][TY], vector<Texture> *texList);


int main()
{
	srand(time(NULL));
	RenderWindow window(VideoMode(576, 512), "SFML works!");//maze 16*16
	vector<Texture> textureList(11);
	textureList.at(0).loadFromFile("MAZE_RES/I1.png");
	textureList.at(1).loadFromFile("MAZE_RES/I2.png");
	textureList.at(2).loadFromFile("MAZE_RES/L1.png");
	textureList.at(3).loadFromFile("MAZE_RES/L2.png");
	textureList.at(4).loadFromFile("MAZE_RES/L3.png");
	textureList.at(5).loadFromFile("MAZE_RES/L4.png");
	textureList.at(6).loadFromFile("MAZE_RES/T1.png");
	textureList.at(7).loadFromFile("MAZE_RES/T2.png");
	textureList.at(8).loadFromFile("MAZE_RES/T3.png");
	textureList.at(9).loadFromFile("MAZE_RES/T4.png");
	textureList.at(10).loadFromFile("MAZE_RES/X.png");

	Block b(textureList.at(9), 32 * 5, 32 * 5);

	Sprite spList[TX][TY];
	spList[0][0].setTexture(textureList.at(0));
	initSP(spList, &textureList);
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear(Color(32,32,32));
		window.draw(*b.getSP());
		affSP(spList, &window);
		window.display();
	}
	return 0;
}

void affSP(Sprite t[TX][TY], RenderWindow *win){
	for (int i = 0; i < TX; i++){
		for (int j = 0; j < TY; j++){
			t[i][j].setPosition((i+1) * 32, j * 32);
			win->draw(t[i][j]);
		}
	}
}

void initSP(Sprite t[TX][TY], vector<Texture> *texList){
	bool h, d,b,g;
	int r;
	for (int i = 0; i < TX; i++){
		for (int j = 0; j < TY; j++){
			t[i][j].setTexture(texList->at(rand() % 11));
		}
	}
}


