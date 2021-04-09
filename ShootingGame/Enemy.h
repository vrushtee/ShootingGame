#pragma once
#include"Bullet.h"

class Enemy: public Bullet
{
public:
	int enemyY[4];
	int enemyX[4];
	int enemyFlag[4];

	void genEnemy(int index);
	void drawEnemy(int index);
	void eraseEnemy(int index);
	void resetEnemy(int index);

};

