#include "Enemy.h"

using namespace std;
void Enemy::genEnemy(int index)
{
	enemyX[index] = 3 + rand() % (WIN_WIDTH - 10);

}

void Enemy::drawEnemy(int index)
{
	if (enemyFlag[index] == true) {
		getPosi(enemyX[index], enemyY[index]);   cout << ".&&.";
		getPosi(enemyX[index], enemyY[index] + 1); cout << "9999";
		getPosi(enemyX[index], enemyY[index] + 2); cout << "****";
		getPosi(enemyX[index], enemyY[index] + 3); cout << ".&&.";

	}

}

void Enemy::eraseEnemy(int index)
{
	if (enemyFlag[index] == true) {
		getPosi(enemyX[index], enemyY[index]);   cout << "    ";
		getPosi(enemyX[index], enemyY[index] + 1); cout << "    ";
		getPosi(enemyX[index], enemyY[index] + 2); cout << "    ";
		getPosi(enemyX[index], enemyY[index] + 3); cout << "    ";

	}
}

void Enemy::resetEnemy(int index)
{
	eraseEnemy(index);
	enemyY[index] = 4;
	genEnemy(index);
}
