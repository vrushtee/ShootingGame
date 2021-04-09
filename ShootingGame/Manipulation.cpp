#include "Manipulation.h"
//Draw e;
//Player p;
Enemy e;

using namespace std;

int Manipulation::collision()
{
	if (enemyY[0] + 4 >= 43) {
		if (enemyX[0] + 4 - e.playerPos >= 0 && enemyX[0] + 4 - e.playerPos < 8) {
			return 1;
		}
	}
	return 0;

}

void Manipulation::play()
{
	enemyFlag[0] = 1;
	enemyFlag[1] = 1;
	enemyFlag[2] = 1;
	enemyY[0] = enemyY[1] = enemyY[2] = 4;
	genEnemy(0);
	genEnemy(1);
	genEnemy(2);


	for (int i = 0; i < 20; i++) {
		bullets[i][0] = bullets[i][1] = 0;
	}


	system("cls");
	e.drawBorder();
	e.getPosi(WIN_WIDTH + 5, 2); cout << "Space Shooter";
	e.getPosi(WIN_WIDTH + 6, 4); cout << "----------";
	e.getPosi(WIN_WIDTH + 6, 6); cout << "----------";
	e.getPosi(WIN_WIDTH + 7, 12); cout << "Control ";
	e.getPosi(WIN_WIDTH + 7, 13); cout << "-------- ";
	e.getPosi(WIN_WIDTH + 2, 14); cout << " A Key - Left";
	e.getPosi(WIN_WIDTH + 2, 15); cout << " D Key - Right";
	e.getPosi(WIN_WIDTH + 2, 16); cout << " Spacebar = Shoot";

	e.getPosi(10, 5); cout << "Press any key to start";
	_getch();
	e.getPosi(10, 5); cout << "                      ";
	while (1) 
	{
		if (_kbhit()) 
		{
			char ch = _getch();
			if (ch == 'a' || ch == 'A') 
			{
				if (e.playerPos > 2)
					e.playerPos -= 2;
			}
			if (ch == 'd' || ch == 'D') 
			{
				if (e.playerPos < WIN_WIDTH - 7)
					e.playerPos += 2;
			}
			if (ch == 32) 
			{
				genBullet();
			}
			if (ch == 27) 
			{
				break;
			}
		}
	e.drawPlayer();
	drawEnemy(0);
	drawEnemy(1);
	drawEnemy(2);
	drawBullet();
	if (collision() == 1) {
		gameOver();

		return;
	}
	if (hitBullet() == 1) {
		score++;
		updateScore();
		if (score == 20)
			lvl2();
	}

	Sleep(100);
	e.erasePlayer();
	eraseEnemy(0);
	eraseEnemy(1);
	eraseEnemy(2);
	eraseBullets();
	moveBullet();
	if (enemyFlag[0] == 1)
		enemyY[0] += 1;

	if (enemyFlag[1] == 1)
		enemyY[1] += 1;

	if (enemyFlag[2] == 1)
		enemyY[2] += 1;

	if (enemyY[0] > SCREEN_HEIGHT - 5) 
	{
		resetEnemy(0);
	}
	if (enemyY[1] > SCREEN_HEIGHT - 5) 
	{
		resetEnemy(1);
	}
	if (enemyY[2] > SCREEN_HEIGHT - 5)
	{
		resetEnemy(2);
	}
	}
	

	_getch();

}

void Manipulation::gameOver()
{
	system("cls");
	cout << endl;
	cout << "\t\t--------------------------" << endl;
	cout << "\t\t-------- Game Over -------" << endl;
	cout << "\t\t--------------------------" << endl << endl;
	cout << "\t\tPress any key to go back to menu.";
	_getch();

}

void Manipulation::updateScore()
{
	e.getPosi(WIN_WIDTH + 7, 5); cout << "Score: " << score << endl;

}

void Manipulation::instructions()
{
	system("cls");
	cout << "Instructions";
	cout << "\n----------------";
	cout << "\n Press spacebar to make player activate";
	cout << "\n\nPress any key to go back to menu";
	_getch();
}

int Manipulation::hitBullet()
{

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 4; j += 2) {
			if (bullets[i][j] != 0) {
				if (bullets[i][j] >= enemyY[0] && bullets[i][j] <= enemyY[0] + 4) {
					if (bullets[i][j + 1] >= enemyX[0] && bullets[i][j + 1] <= enemyX[0] + 4) {
						eraseBullet(i);
						bullets[i][j] = 0;
						resetEnemy(0);
						return 1;
					}
				}
				if (bullets[i][j] >= enemyY[1] && bullets[i][j] <= enemyY[1] + 4) {
					if (bullets[i][j + 1] >= enemyX[1] && bullets[i][j + 1] <= enemyX[1] + 4) {
						eraseBullet(i);
						resetEnemy(1);
						bullets[i][j] = 0;
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void Manipulation::lvl2()
{
	system("cls");
	e.getPosi(10, 5); cout << " -------------------------------- ";
	e.getPosi(10, 6); cout << " |      Welcome to level 2      | ";
	e.getPosi(10, 7); cout << " -------------------------------- ";
	//e.getPosi(10, 10); cout << " press any key to continue ";

	system("PAUSE");
	system("cls");
	score = 0;
	Sleep(50);
	play();
	
	

}
