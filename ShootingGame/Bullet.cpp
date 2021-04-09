#include "Bullet.h"
using namespace std;
void Bullet::drawBullet()
{
	for (int i = 0; i < 20; i++) {
		if (bullets[i][0] > 1) {
			getPosi(bullets[i][1], bullets[i][0]); cout << ".";
			getPosi(bullets[i][3], bullets[i][2]); cout << ".";
		}
	}

}

void Bullet::eraseBullets()
{
	for (int i = 0; i < 20; i++) {
		if (bullets[i][0] > 1) {
			getPosi(bullets[i][1], bullets[i][0]); cout << " ";
			getPosi(bullets[i][3], bullets[i][2]); cout << " ";
		}
	}

}

void Bullet::eraseBullet(int a)
{
	getPosi(bullets[a][1], bullets[a][0]); cout << " ";
	getPosi(bullets[a][3], bullets[a][2]); cout << " ";
}

void Bullet::genBullet()
{
	bullets[bCounter][0] = 43;
	bullets[bCounter][1] = playerPos;
	bullets[bCounter][2] = 43;
	bullets[bCounter][3] = playerPos + 4;
	bCounter++;
	if (bCounter == 20)
		bCounter = 0;


}



void Bullet::moveBullet()
{
	for (int i = 0; i < 20; i++) {
		if (bullets[i][0] > 2)
			bullets[i][0]--;
		else
			bullets[i][0] = 0;

		if (bullets[i][2] > 2)
			bullets[i][2]--;
		else
			bullets[i][2] = 0;
	}
}
