#pragma once
#include<Windows.h>
#include<iostream>
#include<conio.h>
#include<dos.h>


#define SCREEN_WIDTH 110
#define SCREEN_HEIGHT 48
#define WIN_WIDTH 70
#define MENU_WIDTH 20
#define GAP_SIZE 7


class Draw
{
public:
	void getPosi(int x, int y);
	void setCursor();
	void drawBorder();

};

