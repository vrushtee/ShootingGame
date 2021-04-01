#pragma once
//#include"Draw.h"
//#include"Player.h"
#include"Enemy.h"

class Manipulation:public Enemy
{
public:
	int score = 0;
	int collision();
	void play();
	void gameOver();
	void updateScore();
	void instructions();
	int hitBullet();
};

