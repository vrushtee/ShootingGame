#pragma once
#include"Bullet.h"

class Enemy: public Bullet
{
public:
	int enemyY[3];
	int enemyX[3];
	int enemyFlag[3];

	void genEnemy(int index);
	void drawEnemy(int index);
	void eraseEnemy(int index);
	void resetEnemy(int index);

};

