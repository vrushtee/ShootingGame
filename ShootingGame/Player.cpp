#include "Player.h"

using namespace std;

void Player::drawPlayer()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			getPosi(j + playerPos, i + 22); cout << player[i][j];
		}
	}
}

void Player::erasePlayer()
{

}