#pragma once
#include"Draw.h"
class Player: public Draw
{
public:
	char player[3][5] = { ' ',' ','8',' ',' ',
						'|','8','8','8','|',
						'#','#','#','#','#' };
	int playerPos = WIN_WIDTH / 2;

	void drawPlayer();
	void erasePlayer();
};

