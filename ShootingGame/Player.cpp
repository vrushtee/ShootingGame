#include "Player.h"
using namespace std;

int Player::playerPos= WIN_WIDTH / 3;

void Player::drawPlayer()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			getPosi(j + playerPos, i + 43); cout << player[i][j];
		}
	}
}

void Player::erasePlayer()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			getPosi(j + playerPos, i + 43); cout << " ";
		}
	}

}