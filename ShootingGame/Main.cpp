#include<iostream>
#include<conio.h>
#include "Draw.h"
#include"Manipulation.h"


using namespace std;

void main()
{
	Draw p;
	Manipulation m;
	do {//10. do
		system("cls");// 11.
		p.getPosi(10, 5); cout << " -------------------------- ";//12
		p.getPosi(10, 6); cout << " |      Shooting Game      | ";
		p.getPosi(10, 7); cout << " --------------------------";
		p.getPosi(10, 9); cout << "1. Start Game";
		p.getPosi(10, 10); cout << "2. Read  Instructions";
		p.getPosi(10, 11); cout << "3. Quit";
		p.getPosi(10, 13); cout << "Select option: ";
		char op = _getch();

		if (op == '1') m.play();
		else if (op == '2') m.instructions();
		else if (op == '3') exit(0);

	} while (1);

	
	_getch();
}