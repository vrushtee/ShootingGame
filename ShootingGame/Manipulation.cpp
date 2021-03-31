#include "Manipulation.h"
Draw e;
Player p;

using namespace std;

void Manipulation::collision()
{

}

void Manipulation::play()
{
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
				if (p.playerPos > 2)
					p.playerPos -= 2;
			}
			if (ch == 'd' || ch == 'D') 
			{
				if (p.playerPos < WIN_WIDTH - 7)
					p.playerPos += 2;
			}
			if (ch == 32) 
			{
				cout << "hey im bullet";
				//genBullet();
			}
			if (ch == 27) 
			{
				break;
			}
		}
	p.drawPlayer();
	}
	

	_getch();

}

void Manipulation::gameOver()
{

}

void Manipulation::updateScore()
{

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