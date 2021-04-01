#pragma once
//#include"Draw.h"
//#include"Player.h"
#include"Enemy.h"

class Manipulation:public Enemy
{
public:
	void collision();
	void play();
	void gameOver();
	void updateScore();
	void instructions();
	int hitBullet();
};

