//#ifndef SCIENTIST
//#define SCIENTIST
//#include "Initialization.h"
//
//
//
//void Scientist_collision1(Player& Scientist, Sprite squares_1, Sprite squares_2, Sprite squares_3, Sprite squares_4, Sprite squares_5, Sprite squares_6, CircleShape fallingSquares[], Sprite groundtex, Sprite groundtex2, Sprite groundtex3, Sprite groundtex4, Sprite wall_1, Sprite wall_2, Sprite wall_3, Sprite wall_4, Sprite& moving_wall, Sprite& moving_wall1, Sprite& pushwall, Sprite& button, Sprite& buttonp, bool& button_ispressed, int numSquares, Sprite death)
//{
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_1.getPosition().x) || (Scientist.rect.left + 33 <= squares_1.getPosition().x)) { //right
//			Scientist.rect.left = squares_1.getPosition().x - 37;
//			Scientist.rect.left = squares_1.getPosition().x - 37;
//		}
//
//		else if ((Scientist.rect.left >= squares_1.getPosition().x + 50) || (Scientist.rect.left >= squares_1.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_1.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_1.getPosition().y + 55) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.5;
//
//			}
//
//			else if (Scientist.rect.top < squares_1.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_2.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_2.getPosition().x) || (Scientist.rect.left + 33 <= squares_2.getPosition().x)) { //right
//			Scientist.rect.left = squares_2.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_2.getPosition().x + 50) || (Scientist.rect.left >= squares_2.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_2.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_2.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_2.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_3.getPosition().x) || (Scientist.rect.left + 33 <= squares_3.getPosition().x)) { //right
//			Scientist.rect.left = squares_3.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_3.getPosition().x + 50) || (Scientist.rect.left >= squares_3.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_3.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_3.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_3.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_4.getPosition().x) || (Scientist.rect.left + 33 <= squares_4.getPosition().x)) { //right
//			Scientist.rect.left = squares_4.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_4.getPosition().x + 50) || (Scientist.rect.left >= squares_4.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_4.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_4.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_4.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_5.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_5.getPosition().x) || (Scientist.rect.left + 33 <= squares_5.getPosition().x)) { //right
//			Scientist.rect.left = squares_5.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_5.getPosition().x + 50) || (Scientist.rect.left >= squares_5.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_5.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_5.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_5.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(squares_6.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_6.getPosition().x) || (Scientist.rect.left + 33 <= squares_6.getPosition().x)) { //right
//			Scientist.rect.left = squares_6.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_6.getPosition().x + 50) || (Scientist.rect.left >= squares_6.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_6.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_6.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_6.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex.getGlobalBounds())) {
//		if (Scientist.rect.top > groundtex.getPosition().y - 48) {//jump
//			Scientist.move_y = 0;
//			Scientist.rect.top = groundtex.getPosition().y - 48;
//			Scientist.onground = true;
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex2.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex2.getPosition().x) || (Scientist.rect.left + 33 <= groundtex2.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex2.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex2.getPosition().x + 1960) || (Scientist.rect.left >= groundtex2.getPosition().x + 1961)) {		//left
//			Scientist.rect.left = groundtex2.getPosition().x + 1965;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex2.getPosition().y) {		//down
//				Scientist.rect.top = groundtex2.getPosition().y + 80;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex2.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex2.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex3.getPosition().x) || (Scientist.rect.left + 33 <= groundtex3.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex3.getPosition().x - 36;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_1.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= wall_1.getPosition().x) || (Scientist.rect.left + 33 <= wall_1.getPosition().x)) { //right to player
//			Scientist.rect.left = wall_1.getPosition().x - 38;
//
//		}
//		else if ((Scientist.rect.left >= wall_1.getPosition().x + 315) || (Scientist.rect.left >= wall_1.getPosition().x + 316)) {//left to player
//			Scientist.rect.left = wall_1.getPosition().x + 318;
//
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//		}
//
//		if (Scientist.rect.top < wall_1.getPosition().y - 55.5) {//jump
//			Scientist.move_y = 0;
//
//			Scientist.onground = true;
//		}
//
//	}
//
//
//	/////////////////me7tag yetsla7 
//
//	if (Scientist.pico.getGlobalBounds().intersects(moving_wall1.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= moving_wall1.getPosition().x) || (Scientist.rect.left + 33 <= moving_wall1.getPosition().x)) { //right
//			Scientist.rect.left = moving_wall1.getPosition().x - 36;
//
//		}
//		else if ((Scientist.rect.left >= moving_wall1.getPosition().x + 245) || (Scientist.rect.left >= moving_wall1.getPosition().x + 246)) {//left to player
//			Scientist.rect.left = moving_wall1.getPosition().x + 247.35;
//
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(moving_wall.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= moving_wall.getPosition().x) || (Scientist.rect.left + 33 <= moving_wall.getPosition().x)) { //right
//			Scientist.rect.left = moving_wall.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= moving_wall.getPosition().x + 83) || (Scientist.rect.left >= moving_wall.getPosition().x + 84)) {//left to player
//			Scientist.rect.left = moving_wall.getPosition().x + 85;
//
//}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > moving_wall.getPosition().y) {		//down
//				Scientist.rect.top = moving_wall.getPosition().y + 391;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//
//		}
//
//	}
//
//
//
//
//
//
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(pushwall.getGlobalBounds())) {
//		how_many_touching++;
//		if ((Scientist.rect.left + 32 <= pushwall.getPosition().x) || (Scientist.rect.left + 35 <= pushwall.getPosition().x)) {
//			Scientist.rect.left = pushwall.getPosition().x - 36;
//			if (!pushwall.getGlobalBounds().intersects(moving_wall1.getGlobalBounds()) && how_many_touching > 1) {
//
//				pushwall.move(0.4, 0);
//			}
//		}
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_3.getPosition().x) || (Scientist.rect.left + 33 <= wall_3.getPosition().x)) {			//right
//			Scientist.rect.left = wall_3.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= wall_3.getPosition().x + 630) || (Scientist.rect.left >= wall_3.getPosition().x + 632)) {		//left
//			Scientist.rect.left = wall_3.getPosition().x + 635;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > wall_3.getPosition().y) {		//down
//				Scientist.rect.top = wall_3.getPosition().y + 643;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//		}
//
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_4.getPosition().x) || (Scientist.rect.left + 33 <= wall_4.getPosition().x)) { //right
//			Scientist.rect.left = wall_4.getPosition().x - 36;
//
//		}
//
//	}
//
//	PLAYER COLLISION WITH BUTTON
//
//	if (Scientist.pico.getGlobalBounds().intersects(button.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressed = true;
//			button.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressed = true;
//			button.setScale(0, 0);
//		}
//
//
//	}
//
//	MORE SCIENTIST MAP COLLISION
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
//		if (Scientist.rect.top > groundtex4.getPosition().y - 1500) {
//			Scientist.rect.top = groundtex4.getPosition().y - 2000;
//			Scientist.rect.left = groundtex4.getPosition().x;
//		}
//
//	}
//
//
//	SCIENTIST COLLISION WITH FALLING BLOCKS
//	NEED HELP
//
//	for (int i = 0; i < numSquares; i++) {
//
//		if (Scientist.pico.getGlobalBounds().intersects(fallingSquares[i].getGlobalBounds())) {
//
//			if (Scientist.rect.top >= fallingSquares[i].getPosition().y - 30) {
//
//				Scientist.onground = 1;
//				fallingSquares[i].move(0, 2.5);
//			}
//			if (fallingSquares[i].getPosition().y > groundtex4.getPosition().y - 1000) {
//				fallingSquares[i].setPosition(3390 + i * 100, 580);
//				Scientist.onground = 0;
//
//			}
//
//		}
//	}
//
//}
//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//void Scientist_collision2(Player& Scientist, Sprite& teleporter1, Sprite& teleporter2, RectangleShape laser, Sprite squares_1, Sprite squares_2, Sprite squares_3, Sprite squares_4, Sprite squares_5, Sprite squares_6, Sprite squares_7, Sprite squares_8, Sprite groundtex, Sprite groundtex2, Sprite groundtex3, Sprite groundtex4, Sprite groundtex5, Sprite groundtex6, Sprite wall_1, Sprite wall_2, Sprite wall_3, Sprite wall_4, Sprite wall_5, Sprite& moving_wall, Sprite& button, Sprite& buttonp, Sprite& buttonp1, bool& button_ispressed, Sprite death, Sprite death_ceiling) {
//
//	if (Scientist.pico.getGlobalBounds().intersects(death.getGlobalBounds())) {
//		dead[1] = true;
//		fell = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(death_ceiling.getGlobalBounds())) {
//		dead[1] = true;
//		fell = true;
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex.getGlobalBounds())) {
//
//		if ((Scientist.rect.left >= groundtex.getPosition().x + 5455.333298) || (Scientist.rect.left >= groundtex.getPosition().x + 5456.333298)) {//left
//			Scientist.rect.left = groundtex.getPosition().x + 5458.333298;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//			if (Scientist.rect.top > groundtex.getPosition().y - 48) {//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex.getPosition().y - 48;
//				Scientist.onground = true;
//			}
//		}
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex4.getPosition().x) || (Scientist.rect.left + 33 <= groundtex4.getPosition().x)) { //right
//			Scientist.rect.left = groundtex4.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= groundtex4.getPosition().x + groundtex4.getGlobalBounds().width) || (Scientist.rect.left >= groundtex4.getPosition().x + groundtex4.getGlobalBounds().width + 1)) {//left
//			Scientist.rect.left = groundtex4.getPosition().x + 55;
//		}
//		else if (Scientist.rect.top > groundtex4.getPosition().y - 48) {//jump
//			Scientist.move_y = 0;
//			Scientist.rect.top = groundtex4.getPosition().y - 48;
//			Scientist.onground = true;
//		}
//
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex5.getGlobalBounds())) {
//		if (Scientist.rect.left + 32 <= groundtex5.getPosition().x || Scientist.rect.left + 33 <= groundtex5.getPosition().x) {
//			Scientist.rect.left = groundtex5.getPosition().x - 36;
//		}
//
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//			if (Scientist.rect.top > groundtex5.getPosition().y - 48) {//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex5.getPosition().y - 48;
//				Scientist.onground = true;
//			}
//		}
//	}
//
//
//	/*if (Scientist.pico.getGlobalBounds().intersects(groundtex6.getGlobalBounds())) {
//		if (Scientist.rect.top > groundtex6.getPosition().y - 1500) {
//			Scientist.rect.top = groundtex6.getPosition().y - 1000;
//			Scientist.rect.left = groundtex6.getPosition().x - 200;
//		}
//
//	}*/
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressed = true;
//			button.setScale(0, 0);
//		}
//
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp1.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp1.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp1.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressed = true;
//			button.setScale(0, 0);
//		}
//
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(teleporter1.getGlobalBounds()) && Joystick::isButtonPressed(0, 2) && timer2 > 50) {
//
//		Scientist.rect.left = teleporter2.getPosition().x;
//		firsttele = true;
//		secondtele = false;
//		timer2 = 0;
//		tele1 = 0;
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(teleporter2.getGlobalBounds()) && Joystick::isButtonPressed(0, 2) && timer2 > 50) {
//
//		Scientist.rect.left = teleporter1.getPosition().x - 50;
//		firsttele = false;
//		secondtele = true;
//		timer2 = 0;
//		tele2 = 0;
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(moving_wall.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= moving_wall.getPosition().x) || (Scientist.rect.left + 33 <= moving_wall.getPosition().x)) { //right
//			Scientist.rect.left = moving_wall.getPosition().x - 36;
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_1.getPosition().x) || (Scientist.rect.left + 33 <= squares_1.getPosition().x)) { //right
//			Scientist.rect.left = squares_1.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_1.getPosition().x + 50) || (Scientist.rect.left >= squares_1.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_1.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_1.getPosition().y + 55) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.5;
//
//			}
//
//			else if (Scientist.rect.top < squares_1.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_2.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_2.getPosition().x) || (Scientist.rect.left + 33 <= squares_2.getPosition().x)) { //right
//			Scientist.rect.left = squares_2.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_2.getPosition().x + 50) || (Scientist.rect.left >= squares_2.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_2.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_2.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_2.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_3.getPosition().x) || (Scientist.rect.left + 33 <= squares_3.getPosition().x)) { //right
//			Scientist.rect.left = squares_3.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_3.getPosition().x + 50) || (Scientist.rect.left >= squares_3.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_3.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_3.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_3.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(squares_4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_4.getPosition().x) || (Scientist.rect.left + 33 <= squares_4.getPosition().x)) { //right
//			Scientist.rect.left = squares_4.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_4.getPosition().x + 50) || (Scientist.rect.left >= squares_4.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_4.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_4.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_4.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_5.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_5.getPosition().x) || (Scientist.rect.left + 33 <= squares_5.getPosition().x)) { //right
//			Scientist.rect.left = squares_5.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_5.getPosition().x + 50) || (Scientist.rect.left >= squares_5.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_5.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_5.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_5.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_6.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_6.getPosition().x) || (Scientist.rect.left + 33 <= squares_6.getPosition().x)) { //right
//			Scientist.rect.left = squares_6.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_6.getPosition().x + 50) || (Scientist.rect.left >= squares_6.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_6.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_6.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_6.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_7.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_7.getPosition().x) || (Scientist.rect.left + 33 <= squares_7.getPosition().x)) { //right
//			Scientist.rect.left = squares_7.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_7.getPosition().x + 50) || (Scientist.rect.left >= squares_7.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_7.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_7.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_7.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_8.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_8.getPosition().x) || (Scientist.rect.left + 33 <= squares_8.getPosition().x)) { //right
//			Scientist.rect.left = squares_8.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_8.getPosition().x + 50) || (Scientist.rect.left >= squares_8.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_8.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_8.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_8.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(laser.getGlobalBounds())) {
//		/*if (Scientist.rect.left + 32 <= laser.getPosition().x || Scientist.rect.left + 33 <= laser.getPosition().x) {
//			Scientist.rect.left = laser.getPosition().x - 40;
//		}*/
//		dead[1] = true;
//		burn = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(wall_1.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= wall_1.getPosition().x) || (Scientist.rect.left + 33 <= wall_1.getPosition().x)) { //right to player
//			Scientist.rect.left = wall_1.getPosition().x - 37;
//
//		}
//		else if ((Scientist.rect.left >= wall_1.getPosition().x + 315) || (Scientist.rect.left >= wall_1.getPosition().x + 316)) {//left to player
//			Scientist.rect.left = wall_1.getPosition().x + 318;
//
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//		}
//
//		if (Scientist.rect.top < wall_1.getPosition().y - 55.5) {//jump
//			Scientist.move_y = 0;
//
//			Scientist.onground = true;
//		}
//
//	}
//
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= wall_3.getPosition().x) || (Scientist.rect.left + 33 <= wall_3.getPosition().x)) { //right to player
//			Scientist.rect.left = wall_3.getPosition().x - 37;
//
//		}
//		else if ((Scientist.rect.left >= wall_3.getPosition().x + 315) || (Scientist.rect.left >= wall_3.getPosition().x + 316)) {//left to player
//			Scientist.rect.left = wall_3.getPosition().x + 318;
//
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//		}
//
//		if (Scientist.rect.top < wall_3.getPosition().y - 55.5) {//jump
//			Scientist.move_y = 0;
//
//			Scientist.onground = true;
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= wall_4.getPosition().x) || (Scientist.rect.left + 33 <= wall_4.getPosition().x)) { //right to player
//			Scientist.rect.left = wall_4.getPosition().x - 37;
//
//		}
//		else if ((Scientist.rect.left >= wall_4.getPosition().x + 315) || (Scientist.rect.left >= wall_4.getPosition().x + 316)) {//left to player
//			Scientist.rect.left = wall_4.getPosition().x + 318;
//
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//		}
//
//		if (Scientist.rect.top < wall_4.getPosition().y - 55.5) {//jump
//			Scientist.move_y = 0;
//
//			Scientist.onground = true;
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_5.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= wall_5.getPosition().x) || (Scientist.rect.left + 33 <= wall_5.getPosition().x)) { //right to player
//			Scientist.rect.left = wall_5.getPosition().x - 37;
//
//		}
//
//
//	}
//
//
//}
//
//void Scientist_collision3(Player& Scientist, RectangleShape laser1, RectangleShape laser2, RectangleShape laser3, RectangleShape laser4, RectangleShape laser5, RectangleShape laser6, RectangleShape laser7, RectangleShape laser8, Sprite squares1, Sprite groundtex, Sprite groundtex2, Sprite groundtex3, Sprite groundtex4, Sprite groundtex5, Sprite groundtex6, Sprite groundtex7, Sprite groundtex8, Sprite groundtex9, Sprite groundtex10, Sprite groundtex12, Sprite groundtex13, Sprite groundtex14, Sprite groundtex15, Sprite& movingwall1, Sprite& movingwall2, Sprite& movingwall3, Sprite& button1, Sprite& buttonp1, Sprite& button2, Sprite& buttonp2, Sprite& button3, Sprite& buttonp3, Sprite& button4, Sprite& buttonp4, Sprite& button5, Sprite& buttonp5, Sprite& button6, Sprite& buttonp6, Sprite death)
//{
//
//	if (Scientist.pico.getGlobalBounds().intersects(death.getGlobalBounds())) {
//		dead[1] = true;
//		fell = true;
//	}
//
//
//	////////////////////////////////////////////////          SECTION 1           ///////////////////////////////////////////////////////
//
//	// awel ground bto2af 3aleeha
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex.getGlobalBounds())) {
//		if ((Scientist.rect.left >= groundtex.getPosition().x + 1962) || (Scientist.rect.left >= groundtex.getPosition().x + 1963.5)) {//left
//			Scientist.rect.left = groundtex.getPosition().x + 1965;
//		}
//		else if ((Scientist.rect.left + 32 <= groundtex.getPosition().x) || (Scientist.rect.left + 33 <= groundtex.getPosition().x)) { //right
//			Scientist.rect.left = groundtex.getPosition().x - 36;
//		}
//		else {
//
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex.getPosition().y - 48) {//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex.getPosition().y - 48;
//				Scientist.onground = true;
//			}
//
//		}
//	}
//
//
//	// el wall el awalaneya
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex2.getGlobalBounds())) {
//		if ((Scientist.rect.left >= groundtex2.getPosition().x + 390) || (Scientist.rect.left >= groundtex2.getPosition().x + 391)) {//left     // right elbox 
//			Scientist.rect.left = groundtex2.getPosition().x + 393;
//		}
//
//
//	}
//
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(movingwall1.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= movingwall1.getPosition().x) || (Scientist.rect.left + 33 <= movingwall1.getPosition().x)) { //right  //left elbox
//			Scientist.rect.left = movingwall1.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= movingwall1.getPosition().x + 191) || (Scientist.rect.left >= movingwall1.getPosition().x + 194)) {//left     // right elbox ////////////byt8ayar 3ala 7asab el scale bel calculator 
//			Scientist.rect.left = movingwall1.getPosition().x + 196.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > movingwall1.getPosition().y + 50) { //down   // down box    //garab yam3alem
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			if (Scientist.rect.top < movingwall1.getPosition().y) {//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = movingwall1.getPosition().y - 720;
//				Scientist.onground = true;
//			}
//
//		}
//
//	}
//
//
//
//	// sa2f el astroooooo
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex3.getPosition().x) || (Scientist.rect.left + 33 <= groundtex3.getPosition().x)) { //right  //left elbox
//			Scientist.rect.left = groundtex3.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= groundtex3.getPosition().x + 1570) || (Scientist.rect.left >= groundtex3.getPosition().x + 1571)) {//left     // right elbox 
//			Scientist.rect.left = groundtex3.getPosition().x + 1572;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex3.getPosition().y + 50) { //down   // down box    //garab yam3alem
//				Scientist.onground = true;
//				Scientist.move_y += 0.007;
//
//			}
//
//			if (Scientist.rect.top < groundtex3.getPosition().y) {//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex3.getPosition().y - 720;
//				Scientist.onground = true;
//			}
//
//		}
//
//	}
//
//	// ground el 3aleha elmoftah welbuttons
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex4.getPosition().x) || (Scientist.rect.left + 33 <= groundtex4.getPosition().x)) { //right  //left elbox
//			Scientist.rect.left = groundtex4.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= groundtex4.getPosition().x + 1216) || (Scientist.rect.left >= groundtex4.getPosition().x + 1217)) {//left     // right elbox 
//			Scientist.rect.left = groundtex4.getPosition().x + 1218.3;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex4.getPosition().y + 50) { //down   // down box    //garab yam3alem
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < groundtex4.getPosition().y) {//jump  // up elbox
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//	// Builder wall el hay7arakha
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex6.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex6.getPosition().x) || (Scientist.rect.left + 33 <= groundtex6.getPosition().x)) { //right  //left elbox
//			Scientist.rect.left = groundtex6.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= groundtex6.getPosition().x + 115) || (Scientist.rect.left >= groundtex6.getPosition().x + 116)) {//left     // right elbox
//			Scientist.rect.left = groundtex6.getPosition().x + 117.9;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex6.getPosition().y + 50) { //down   // down box    //garab yam3alem
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < groundtex6.getPosition().y) {//jump  // up elbox
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//	////////////////////////////////////////////////          SECTION 2           ///////////////////////////////////////////////////////
//
//
//	// el ard el dakhla fe section 2
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex7.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex7.getPosition().x) || (Scientist.rect.left + 33 <= groundtex7.getPosition().x)) { //right  //left elbox
//			Scientist.rect.left = groundtex7.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= groundtex7.getPosition().x + 784) || (Scientist.rect.left >= groundtex7.getPosition().x + 785)) {//left     // right elbox 
//			Scientist.rect.left = groundtex7.getPosition().x + 786;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex7.getPosition().y + 50) { //down   // down box    //garab yam3alem
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < groundtex7.getPosition().y) {//jump  // up elbox
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//	// el sa2f el foo2 khales bta3 el astro section 2
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex8.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex8.getPosition().x) || (Scientist.rect.left + 33 <= groundtex8.getPosition().x)) { //right  //left elbox
//			Scientist.rect.left = groundtex8.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= groundtex8.getPosition().x + 312) || (Scientist.rect.left >= groundtex8.getPosition().x + 313)) {//left     // right elbox 
//			Scientist.rect.left = groundtex8.getPosition().x + 314.4;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex8.getPosition().y + 30) { //down   // down box    //garab yam3alem
//				Scientist.onground = true;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < groundtex8.getPosition().y) {//jump  // up elbox
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	// el sa2f bta3 el astro el hayenzel ydoos 3ala el button el 3aleeh (section 2)
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex9.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex9.getPosition().x) || (Scientist.rect.left + 33 <= groundtex9.getPosition().x)) { //right  //left elbox
//			Scientist.rect.left = groundtex9.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= groundtex9.getPosition().x + 391) || (Scientist.rect.left >= groundtex9.getPosition().x + 392)) {//left     // right elbox 
//			Scientist.rect.left = groundtex9.getPosition().x + 393;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex9.getPosition().y + 50) { //down   // down box    //garab yam3alem
//				Scientist.onground = true;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < groundtex9.getPosition().y) {//jump  // up elbox
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//
//
//	// el sa2f el ganb ard el astro el 3aleeha el button el bywa2a3 el square
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex5.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex5.getPosition().x) || (Scientist.rect.left + 33 <= groundtex5.getPosition().x)) { //right  //left elbox
//			Scientist.rect.left = groundtex5.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= groundtex5.getPosition().x + 56) || (Scientist.rect.left >= groundtex5.getPosition().x + 57)) {//left     // right elbox 
//			Scientist.rect.left = groundtex5.getPosition().x + 58.95;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex5.getPosition().y + 50) { //down   // down box    //garab yam3alem
//				Scientist.onground = true;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < groundtex5.getPosition().y) {//jump  // up elbox
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//	// elsa2f el main bta3 section 2
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex10.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex10.getPosition().x) || (Scientist.rect.left + 33 <= groundtex10.getPosition().x)) { //right  //left elbox
//			Scientist.rect.left = groundtex10.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= groundtex10.getPosition().x + 784) || (Scientist.rect.left >= groundtex10.getPosition().x + 785)) {//left     // right elbox 
//			Scientist.rect.left = groundtex10.getPosition().x + 786;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex10.getPosition().y + 50) { //down   // down box    //garab yam3alem
//				Scientist.onground = true;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < groundtex10.getPosition().y) {//jump  // up elbox
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(movingwall2.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= movingwall2.getPosition().x) || (Scientist.rect.left + 33 <= movingwall2.getPosition().x)) { //right  //left elbox
//			Scientist.rect.left = movingwall2.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= movingwall2.getPosition().x + 784) || (Scientist.rect.left >= movingwall2.getPosition().x + 785)) {//left     // right elbox 
//			Scientist.rect.left = movingwall2.getPosition().x + 786;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > movingwall2.getPosition().y + 50) { //down   // down box    //garab yam3alem
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < movingwall2.getPosition().y) {//jump  // up elbox
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//
//
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares1.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares1.getPosition().x) || (Scientist.rect.left + 33 <= squares1.getPosition().x)) { //right  //left elbox
//			Scientist.rect.left = squares1.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares1.getPosition().x + 50) || (Scientist.rect.left >= squares1.getPosition().x + 50.5)) {//left     // right elbox ////////////byt8ayar 3ala 7asab el scale bel calculator 
//			Scientist.rect.left = squares1.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares1.getPosition().y + 50) { //down   // down box    //garab yam3alem
//				Scientist.onground = true;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares1.getPosition().y) {//jump  // up elbox
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//	////////////////////////////////////////////////          SECTION 3           ///////////////////////////////////////////////////////
//
//
//
//	//Main Ground of Section 3 el 3aleeha el button el byefta7 moving wall 2
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex12.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex12.getPosition().x) || (Scientist.rect.left + 33 <= groundtex12.getPosition().x)) { //right  //left elbox
//			Scientist.rect.left = groundtex12.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= groundtex12.getPosition().x + 1963) || (Scientist.rect.left >= groundtex12.getPosition().x + 1964)) {//left     // right elbox 
//			Scientist.rect.left = groundtex12.getPosition().x + 1965;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex12.getPosition().y + 50) { //down   // down box    //garab yam3alem
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < groundtex12.getPosition().y) {//jump  // up elbox
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	//el heeta el 3aleeha el lasers section 3
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex13.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex13.getPosition().x) || (Scientist.rect.left + 33 <= groundtex13.getPosition().x)) { //right  //left elbox
//			if (!(movingwall3.getGlobalBounds().intersects(groundtex15.getGlobalBounds()))) {
//
//				Scientist.rect.left = groundtex13.getPosition().x - 36;
//			}
//		}
//
//		else if ((Scientist.rect.left >= groundtex13.getPosition().x + 1255) || (Scientist.rect.left >= groundtex13.getPosition().x + 1256)) {//left     // right elbox 
//			Scientist.rect.left = groundtex13.getPosition().x + 1257.6;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex13.getPosition().y + 50) { //down   // down box    //garab yam3alem
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < groundtex13.getPosition().y) {//jump  // up elbox
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(movingwall3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= movingwall3.getPosition().x) || (Scientist.rect.left + 33 <= movingwall3.getPosition().x)) { //right  //left elbox
//			Scientist.rect.left = movingwall3.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= movingwall3.getPosition().x + 191) || (Scientist.rect.left >= movingwall3.getPosition().x + 194)) {//left     // right elbox 
//			if (!(Scientist.pico.getGlobalBounds().intersects(groundtex13.getGlobalBounds()))) {
//
//				Scientist.rect.left = movingwall3.getPosition().x + 196.5;
//			}
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > movingwall3.getPosition().y + 50) { //down   // down box    //garab yam3alem
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			if (Scientist.rect.top < movingwall3.getPosition().y) {//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = movingwall3.getPosition().y - 48;
//				Scientist.onground = true;
//			}
//
//		}
//
//	}
//
//
//
//
//	// final wall el 3and elbab
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex14.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex14.getPosition().x) || (Scientist.rect.left + 33 <= groundtex14.getPosition().x)) { //right  //left elbox
//			Scientist.rect.left = groundtex14.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= groundtex14.getPosition().x + 391) || (Scientist.rect.left >= groundtex14.getPosition().x + 392)) {//left     // right elbox 
//			Scientist.rect.left = groundtex14.getPosition().x + 393;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex14.getPosition().y + 50) { //down   // down box    //garab yam3alem
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < groundtex14.getPosition().y) {//jump  // up elbox
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//
//	////////////////////////////////////////////////          Buttons           ///////////////////////////////////////////////////////
//	if (Scientist.pico.getGlobalBounds().intersects(button1.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button1.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressed = true;
//			button1.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp1.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp1.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp1.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressed = true;
//			button1.setScale(0, 0);
//		}
//
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(button2.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button1.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressed2 = true;
//			button2.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp2.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp2.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp2.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressed2 = true;
//			button2.setScale(0, 0);
//		}
//
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(button3.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button3.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressed3 = true;
//			button3.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp3.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp3.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp3.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressed3 = true;
//			button3.setScale(0, 0);
//		}
//
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(button4.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button4.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressed4 = true;
//			button4.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp4.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp4.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp4.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressed4 = true;
//			button4.setScale(0, 0);
//		}
//
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(button5.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button5.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressed5 = true;
//			button5.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp5.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp5.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp5.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressed5 = true;
//			button5.setScale(0, 0);
//		}
//
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(button6.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button6.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressed6 = true;
//			button6.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp6.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp6.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp6.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressed6 = true;
//			button6.setScale(0, 0);
//		}
//
//
//	}
//
//
//
//	////////////////////////////////////////////////          Lasers           ///////////////////////////////////////////////////////
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(laser1.getGlobalBounds())) {
//
//		dead[1] = true;
//		burn = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(laser2.getGlobalBounds())) {
//
//		dead[1] = true;
//		burn = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(laser3.getGlobalBounds())) {
//
//		dead[1] = true;
//		burn = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(laser4.getGlobalBounds())) {
//
//		dead[1] = true;
//		burn = true;
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(laser5.getGlobalBounds())) {
//
//		dead[1] = true;
//		burn = true;
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(laser6.getGlobalBounds())) {
//
//		dead[1] = true;
//		burn = true;
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(laser7.getGlobalBounds())) {
//
//		dead[0] = true;
//		burn = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(laser8.getGlobalBounds())) {
//
//		dead[1] = true;
//		burn = true;
//	}
//
//
//
//
//
//
//}
//
//
//void Scientist_collision4(Player& Scientist, Sprite squares_1, Sprite squares_2, Sprite squares_3, Sprite squares_4, Sprite squares_5, Sprite squares_6, Sprite squares_7, Sprite squares_8, Sprite squares_9, Sprite squares_10, Sprite squares_11, Sprite squares_12, Sprite squares_13, Sprite squares_14, Sprite squares_15, Sprite squares_16, Sprite squares_17, Sprite squares_18, Sprite squares_19, Sprite squares_20, Sprite squares_21, Sprite wall_1, Sprite wall_2, Sprite wall_3, Sprite wall_4, Sprite& moving_wall, Sprite& button, Sprite& buttonp, Sprite death, Sprite groundtex, Sprite groundtex2, Sprite groundtex3, Sprite groundtex4, Sprite groundtex5, Sprite groundtex6, Sprite groundtex7, Sprite groundtex8, Sprite groundtex9, Sprite groundtex10, Sprite death_ceiling) {
//
//	if (Scientist.pico.getGlobalBounds().intersects(death.getGlobalBounds())) {
//		dead[1] = true;
//		fell = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(death_ceiling.getGlobalBounds())) {
//		dead[1] = true;
//		fell = true;
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_1.getPosition().x) || (Scientist.rect.left + 33 <= squares_1.getPosition().x)) { //right
//			Scientist.rect.left = squares_1.getPosition().x - 37;
//			Scientist.rect.left = squares_1.getPosition().x - 37;
//		}
//
//		else if ((Scientist.rect.left >= squares_1.getPosition().x + 50) || (Scientist.rect.left >= squares_1.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_1.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_1.getPosition().y + 55) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.5;
//
//			}
//
//			else if (Scientist.rect.top < squares_1.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_3.getPosition().x) || (Scientist.rect.left + 33 <= squares_3.getPosition().x)) { //right
//			Scientist.rect.left = squares_3.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_3.getPosition().x + 50) || (Scientist.rect.left >= squares_3.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_3.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_3.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_3.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_5.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_5.getPosition().x) || (Scientist.rect.left + 33 <= squares_5.getPosition().x)) { //right
//			Scientist.rect.left = squares_5.getPosition().x - 37;
//			Scientist.rect.left = squares_5.getPosition().x - 37;
//		}
//
//		else if ((Scientist.rect.left >= squares_5.getPosition().x + 50) || (Scientist.rect.left >= squares_5.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_5.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_5.getPosition().y + 55) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.5;
//
//			}
//
//			else if (Scientist.rect.top < squares_5.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_7.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_7.getPosition().x) || (Scientist.rect.left + 33 <= squares_7.getPosition().x)) { //right
//			Scientist.rect.left = squares_7.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_7.getPosition().x + 85) || (Scientist.rect.left >= squares_7.getPosition().x + 85.5)) {//left
//			Scientist.rect.left = squares_7.getPosition().x + 95;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_7.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_7.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_8.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_8.getPosition().x) || (Scientist.rect.left + 33 <= squares_8.getPosition().x)) { //right
//			Scientist.rect.left = squares_8.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_8.getPosition().x + 50) || (Scientist.rect.left >= squares_8.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_8.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_8.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_8.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_10.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_10.getPosition().x) || (Scientist.rect.left + 33 <= squares_10.getPosition().x)) { //right
//			Scientist.rect.left = squares_10.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_10.getPosition().x + 50) || (Scientist.rect.left >= squares_10.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_10.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_10.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_10.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_12.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_12.getPosition().x) || (Scientist.rect.left + 33 <= squares_12.getPosition().x)) { //right
//			Scientist.rect.left = squares_12.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_12.getPosition().x + 50) || (Scientist.rect.left >= squares_12.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_12.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_12.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_12.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_13.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_13.getPosition().x) || (Scientist.rect.left + 33 <= squares_13.getPosition().x)) { //right
//			Scientist.rect.left = squares_13.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_13.getPosition().x + 50) || (Scientist.rect.left >= squares_13.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_13.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_13.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_13.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_14.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_14.getPosition().x) || (Scientist.rect.left + 33 <= squares_14.getPosition().x)) { //right
//			Scientist.rect.left = squares_14.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_14.getPosition().x + 50) || (Scientist.rect.left >= squares_14.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_14.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_14.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_14.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_16.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_16.getPosition().x) || (Scientist.rect.left + 33 <= squares_16.getPosition().x)) { //right
//			Scientist.rect.left = squares_16.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_16.getPosition().x + 50) || (Scientist.rect.left >= squares_16.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_16.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_16.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_16.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_17.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_17.getPosition().x) || (Scientist.rect.left + 33 <= squares_17.getPosition().x)) { //right
//			Scientist.rect.left = squares_17.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_17.getPosition().x + 50) || (Scientist.rect.left >= squares_17.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_17.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_17.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_17.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//	//}
//	if (Scientist.pico.getGlobalBounds().intersects(squares_19.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_19.getPosition().x) || (Scientist.rect.left + 33 <= squares_19.getPosition().x)) { //right
//			Scientist.rect.left = squares_19.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_19.getPosition().x + 50) || (Scientist.rect.left >= squares_19.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_19.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_19.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_19.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_21.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_21.getPosition().x) || (Scientist.rect.left + 33 <= squares_21.getPosition().x)) { //right
//			Scientist.rect.left = squares_21.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_21.getPosition().x + 50) || (Scientist.rect.left >= squares_21.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_21.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_21.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_21.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex.getGlobalBounds())) {
//
//		if ((Scientist.rect.left >= groundtex.getPosition().x + 1760) || (Scientist.rect.left >= groundtex.getPosition().x + 1763)) {//left to player
//			Scientist.rect.left = groundtex.getPosition().x + 1768.5;
//		}
//
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//			if (Scientist.rect.top > groundtex.getPosition().y - 48) {//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex.getPosition().y - 48;
//				Scientist.onground = true;
//			}
//		}
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex2.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= groundtex2.getPosition().x) || (Scientist.rect.left + 33 <= groundtex2.getPosition().x)) { //right to player
//			Scientist.rect.left = groundtex2.getPosition().x - 37;
//		}
//
//		else if ((Scientist.rect.left >= groundtex2.getPosition().x + 960) || (Scientist.rect.left >= groundtex2.getPosition().x + 961)) {//left to player
//			Scientist.rect.left = groundtex2.getPosition().x + 962.85;
//		}
//
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//			if (Scientist.rect.top > groundtex2.getPosition().y - 48) {//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex2.getPosition().y - 48;
//				Scientist.onground = true;
//			}
//		}
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= groundtex3.getPosition().x) || (Scientist.rect.left + 33 <= groundtex3.getPosition().x)) { //right to player
//			Scientist.rect.left = groundtex3.getPosition().x - 37;
//		}
//
//		else if ((Scientist.rect.left >= groundtex3.getPosition().x + 586) || (Scientist.rect.left >= groundtex3.getPosition().x + 587)) {//left to player
//			Scientist.rect.left = groundtex3.getPosition().x + 589.5;
//		}
//
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//			if (Scientist.rect.top > groundtex3.getPosition().y - 48) {//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex3.getPosition().y - 48;
//				Scientist.onground = true;
//			}
//		}
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex5.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= groundtex5.getPosition().x) || (Scientist.rect.left + 33 <= groundtex5.getPosition().x)) { //right to player
//			Scientist.rect.left = groundtex5.getPosition().x - 37;
//		}
//
//		else if ((Scientist.rect.left >= groundtex5.getPosition().x + 980) || (Scientist.rect.left >= groundtex5.getPosition().x + 981)) {//left to player
//			Scientist.rect.left = groundtex5.getPosition().x + 982.5;
//		}
//
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//			if (Scientist.rect.top > groundtex5.getPosition().y - 48) {//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex5.getPosition().y - 48;
//				Scientist.onground = true;
//			}
//		}
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex6.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= groundtex6.getPosition().x) || (Scientist.rect.left + 33 <= groundtex6.getPosition().x)) { //right to player
//			Scientist.rect.left = groundtex6.getPosition().x - 37;
//		}
//
//		else if ((Scientist.rect.left >= groundtex6.getPosition().x + 1175) || (Scientist.rect.left >= groundtex6.getPosition().x + 1176)) {//left to player
//			Scientist.rect.left = groundtex6.getPosition().x + 1179;
//		}
//
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//			if (Scientist.rect.top > groundtex6.getPosition().y - 48) {//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex6.getPosition().y - 48;
//				Scientist.onground = true;
//			}
//		}
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex7.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= groundtex7.getPosition().x) || (Scientist.rect.left + 33 <= groundtex7.getPosition().x)) { //right to player
//			Scientist.rect.left = groundtex7.getPosition().x - 37;
//		}
//
//		else if ((Scientist.rect.left >= groundtex7.getPosition().x + 1233) || (Scientist.rect.left >= groundtex7.getPosition().x + 1234)) {//left to player
//			Scientist.rect.left = groundtex7.getPosition().x + 1237.95;
//		}
//
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//			if (Scientist.rect.top > groundtex7.getPosition().y - 48) {//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex7.getPosition().y - 48;
//				Scientist.onground = true;
//			}
//		}
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex9.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= groundtex9.getPosition().x) || (Scientist.rect.left + 33 <= groundtex9.getPosition().x)) { //right to player
//			Scientist.rect.left = groundtex9.getPosition().x - 37;
//		}
//
//		else if ((Scientist.rect.left >= groundtex9.getPosition().x + 1373) || (Scientist.rect.left >= groundtex9.getPosition().x + 1374)) {//left to player
//			Scientist.rect.left = groundtex9.getPosition().x + 1375.5;
//		}
//
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//			if (Scientist.rect.top > groundtex9.getPosition().y - 48) {//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex9.getPosition().y - 48;
//				Scientist.onground = true;
//			}
//		}
//	}
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= wall_4.getPosition().x) || (Scientist.rect.left + 33 <= wall_4.getPosition().x)) { //right to player
//			Scientist.rect.left = wall_4.getPosition().x - 37;
//
//		}
//
//
//	}
//
//
//}
//
//
//
//void Scientist_collision5(Player& Scientist, Sprite groundtex1, Sprite groundtex2, Sprite groundtex3, Sprite groundtex4, Sprite groundtex6, Sprite groundtex7, Sprite groundtex8, Sprite groundtex9, Sprite groundtex10, Sprite groundtex12, Sprite groundtex13, Sprite groundtex15, Sprite groundtex16, Sprite Bridge, Sprite& button1, Sprite& button2, Sprite& button3, Sprite& button4, Sprite& button5, Sprite& button6, Sprite& button7, Sprite& button8, Sprite& buttonp1, Sprite& buttonp2, Sprite& buttonp3, Sprite& buttonp4, Sprite& buttonp5, Sprite& buttonp6, Sprite& buttonp7, Sprite& buttonp8, Sprite floating_square, Sprite floating_square1, Sprite floating_square2, Sprite floating_square5, Sprite floating_square6, Sprite floating_square7, Sprite floating_square8, Sprite floating_square9, Sprite floating_square10, Sprite wall1, Sprite wall2, Sprite wall7, RectangleShape laser1[], RectangleShape laser2[], Sprite teleporter1, Sprite teleporter2, Sprite movingwall1, Sprite movingwall2, Sprite block, Sprite celling1, Sprite celling2, Sprite death, Sprite death_ceiling) {
//
//	if (Scientist.pico.getGlobalBounds().intersects(death.getGlobalBounds())) {
//		dead[1] = true;
//		fell = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(death_ceiling.getGlobalBounds())) {
//		dead[1] = true;
//		fell = true;
//	}
//
//
//	//groundtex
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex1.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex1.getPosition().x) || (Scientist.rect.left + 33 <= groundtex1.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex1.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex1.getPosition().x + 581.5) || (Scientist.rect.left >= groundtex1.getPosition().x + 582)) {		//left
//			Scientist.rect.left = groundtex1.getPosition().x + 587;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex1.getPosition().y) {		//down
//				Scientist.rect.top = groundtex1.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex1.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex1.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex2.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex2.getPosition().x) || (Scientist.rect.left + 33 <= groundtex2.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex2.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex2.getPosition().x + 704) || (Scientist.rect.left >= groundtex2.getPosition().x + 705)) {		//left
//			Scientist.rect.left = groundtex2.getPosition().x + 707.4;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex2.getPosition().y) {		//down
//				Scientist.rect.top = groundtex2.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex2.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex2.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex3.getGlobalBounds())) {
//		dead[1] = true;
//		fell = true;
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex4.getPosition().x) || (Scientist.rect.left + 33 <= groundtex4.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex4.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex4.getPosition().x + 1372) || (Scientist.rect.left >= groundtex4.getPosition().x + 1372.5)) {		//left
//			Scientist.rect.left = groundtex4.getPosition().x + 1375.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex4.getPosition().y) {		//down
//				Scientist.rect.top = groundtex4.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex4.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex4.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex6.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex6.getPosition().x) || (Scientist.rect.left + 33 <= groundtex6.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex6.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex6.getPosition().x + 1568.5) || (Scientist.rect.left >= groundtex6.getPosition().x + 1569)) {		//left
//			Scientist.rect.left = groundtex6.getPosition().x + 1572;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex6.getPosition().y) {		//down
//				Scientist.rect.top = groundtex6.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex6.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex6.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex7.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex7.getPosition().x) || (Scientist.rect.left + 33 <= groundtex7.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex7.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex7.getPosition().x + 586) || (Scientist.rect.left >= groundtex7.getPosition().x + 586.5)) {		//left
//			Scientist.rect.left = groundtex7.getPosition().x + 589.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex7.getPosition().y) {		//down
//				Scientist.rect.top = groundtex7.getPosition().y + 238;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex7.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex7.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex8.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex8.getPosition().x) || (Scientist.rect.left + 33 <= groundtex8.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex8.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex8.getPosition().x + 657.526) || (Scientist.rect.left >= groundtex8.getPosition().x + 658.026)) {		//left
//			Scientist.rect.left = groundtex8.getPosition().x + 661.026;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex8.getPosition().y) {		//down
//				Scientist.rect.top = groundtex8.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex8.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex8.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex9.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex9.getPosition().x) || (Scientist.rect.left + 33 <= groundtex9.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex9.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex9.getPosition().x + 544.7) || (Scientist.rect.left >= groundtex9.getPosition().x + 545.2)) {		//left
//			if (!(Scientist.pico.getGlobalBounds().intersects(groundtex12.getGlobalBounds()))) {
//
//				Scientist.rect.left = groundtex9.getPosition().x + 550.2;
//			}
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex9.getPosition().y) {		//down
//				Scientist.rect.top = groundtex9.getPosition().y + 80;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex9.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex9.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex10.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex10.getPosition().x) || (Scientist.rect.left + 33 <= groundtex10.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex10.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex10.getPosition().x + 579.533) || (Scientist.rect.left >= groundtex10.getPosition().x + 580.033)) {		//left
//			Scientist.rect.left = groundtex10.getPosition().x + 582.033;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex10.getPosition().y) {		//down
//				Scientist.rect.top = groundtex10.getPosition().y + 791;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex10.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex10.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex12.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex12.getPosition().x) || (Scientist.rect.left + 33 <= groundtex12.getPosition().x)) {			//right
//			if (!(Scientist.pico.getGlobalBounds().intersects(groundtex9.getGlobalBounds()))) {
//				Scientist.rect.left = groundtex12.getPosition().x - 36;
//			}
//		}
//
//		else if ((Scientist.rect.left >= groundtex12.getPosition().x + 232.3) || (Scientist.rect.left >= groundtex12.getPosition().x + 232.8)) {		//left
//
//			Scientist.rect.left = groundtex12.getPosition().x + 235.8;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex12.getPosition().y) {		//down
//				Scientist.rect.top = groundtex12.getPosition().y + 39.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex12.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex12.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex13.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex13.getPosition().x) || (Scientist.rect.left + 33 <= groundtex13.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex13.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex13.getPosition().x + 468.1) || (Scientist.rect.left >= groundtex13.getPosition().x + 468.6)) {		//left
//			Scientist.rect.left = groundtex13.getPosition().x + 471.6;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex13.getPosition().y) {		//down
//				Scientist.rect.top = groundtex13.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex13.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex13.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex15.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex15.getPosition().x) || (Scientist.rect.left + 33 <= groundtex15.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex15.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex15.getPosition().x + 327.265) || (Scientist.rect.left >= groundtex15.getPosition().x + 327.765)) {		//left
//			Scientist.rect.left = groundtex15.getPosition().x + 630.765;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex15.getPosition().y) {		//down
//				Scientist.rect.top = groundtex15.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex15.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex15.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex16.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex16.getPosition().x) || (Scientist.rect.left + 33 <= groundtex16.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex16.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex16.getPosition().x + 389.5) || (Scientist.rect.left >= groundtex16.getPosition().x + 390)) {		//left
//			Scientist.rect.left = groundtex16.getPosition().x + 393;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex16.getPosition().y) {		//down
//				Scientist.rect.top = groundtex16.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex16.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex16.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//
//
//
//	//Bridge
//	if (Scientist.pico.getGlobalBounds().intersects(Bridge.getGlobalBounds())) {
//		if (Scientist.rect.top > Bridge.getPosition().y - 48) {//jump
//			Scientist.move_y = 0;
//			Scientist.rect.top = Bridge.getPosition().y - 48;
//			Scientist.onground = true;
//		}
//
//	}
//
//
//	//teleporters
//
//	if (Scientist.pico.getGlobalBounds().intersects(teleporter1.getGlobalBounds()) && Joystick::isButtonPressed(0, 2) && timer2 > 50) {
//
//		Scientist.rect.left = teleporter2.getPosition().x;
//		Scientist.rect.top = teleporter2.getPosition().y;
//		firsttele = true;
//		secondtele = false;
//		timer2 = 0;
//		tele1 = 0;
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(teleporter2.getGlobalBounds()) && Joystick::isButtonPressed(0, 2) && timer2 > 50) {
//
//		Scientist.rect.left = teleporter1.getPosition().x - 50;
//		Scientist.rect.top = teleporter1.getPosition().y;
//		firsttele = false;
//		secondtele = true;
//		timer2 = 0;
//		tele2 = 0;
//	}
//
//
//
//	//floatingsquares
//	if (Scientist.pico.getGlobalBounds().intersects(floating_square.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= floating_square.getPosition().x) || (Scientist.rect.left + 33 <= floating_square.getPosition().x)) { //right
//			Scientist.rect.left = floating_square.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= floating_square.getPosition().x + 50) || (Scientist.rect.left >= floating_square.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = floating_square.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > floating_square.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < floating_square.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(floating_square1.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= floating_square1.getPosition().x) || (Scientist.rect.left + 33 <= floating_square1.getPosition().x)) { //right
//			Scientist.rect.left = floating_square1.getPosition().x - 37;
//			Scientist.rect.left = floating_square1.getPosition().x - 37;
//		}
//
//		else if ((Scientist.rect.left >= floating_square1.getPosition().x + 50) || (Scientist.rect.left >= floating_square1.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = floating_square1.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > floating_square1.getPosition().y + 55) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.5;
//
//			}
//
//			else if (Scientist.rect.top < floating_square1.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(floating_square2.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= floating_square2.getPosition().x) || (Scientist.rect.left + 33 <= floating_square2.getPosition().x)) { //right
//			Scientist.rect.left = floating_square2.getPosition().x - 37;
//			Scientist.rect.left = floating_square2.getPosition().x - 37;
//		}
//
//		else if ((Scientist.rect.left >= floating_square2.getPosition().x + 50) || (Scientist.rect.left >= floating_square2.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = floating_square2.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > floating_square2.getPosition().y + 55) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.5;
//
//			}
//
//			else if (Scientist.rect.top < floating_square2.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(floating_square5.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= floating_square5.getPosition().x) || (Scientist.rect.left + 33 <= floating_square5.getPosition().x)) { //right
//			Scientist.rect.left = floating_square5.getPosition().x - 37;
//			Scientist.rect.left = floating_square5.getPosition().x - 37;
//		}
//
//		else if ((Scientist.rect.left >= floating_square5.getPosition().x + 50) || (Scientist.rect.left >= floating_square5.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = floating_square5.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > floating_square5.getPosition().y + 55) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.5;
//
//			}
//
//			else if (Scientist.rect.top < floating_square5.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(floating_square6.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= floating_square6.getPosition().x) || (Scientist.rect.left + 33 <= floating_square6.getPosition().x)) { //right
//			Scientist.rect.left = floating_square6.getPosition().x - 37;
//			Scientist.rect.left = floating_square6.getPosition().x - 37;
//		}
//
//		else if ((Scientist.rect.left >= floating_square6.getPosition().x + 50) || (Scientist.rect.left >= floating_square6.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = floating_square6.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > floating_square6.getPosition().y + 55) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.5;
//
//			}
//
//			else if (Scientist.rect.top < floating_square6.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(floating_square7.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= floating_square7.getPosition().x) || (Scientist.rect.left + 33 <= floating_square7.getPosition().x)) { //right
//			Scientist.rect.left = floating_square7.getPosition().x - 37;
//			Scientist.rect.left = floating_square7.getPosition().x - 37;
//		}
//
//		else if ((Scientist.rect.left >= floating_square7.getPosition().x + 50) || (Scientist.rect.left >= floating_square7.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = floating_square7.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > floating_square7.getPosition().y + 55) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.5;
//
//			}
//
//			else if (Scientist.rect.top < floating_square7.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(floating_square8.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= floating_square8.getPosition().x) || (Scientist.rect.left + 33 <= floating_square8.getPosition().x)) { //right
//			Scientist.rect.left = floating_square8.getPosition().x - 37;
//			Scientist.rect.left = floating_square8.getPosition().x - 37;
//		}
//
//		else if ((Scientist.rect.left >= floating_square8.getPosition().x + 50) || (Scientist.rect.left >= floating_square8.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = floating_square8.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > floating_square8.getPosition().y + 55) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.5;
//
//			}
//
//			else if (Scientist.rect.top < floating_square8.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(floating_square9.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= floating_square9.getPosition().x) || (Scientist.rect.left + 33 <= floating_square9.getPosition().x)) { //right
//			Scientist.rect.left = floating_square9.getPosition().x - 37;
//			Scientist.rect.left = floating_square9.getPosition().x - 37;
//		}
//
//		else if ((Scientist.rect.left >= floating_square9.getPosition().x + 50) || (Scientist.rect.left >= floating_square9.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = floating_square9.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > floating_square9.getPosition().y + 55) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.5;
//
//			}
//
//			else if (Scientist.rect.top < floating_square9.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(floating_square10.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= floating_square10.getPosition().x) || (Scientist.rect.left + 33 <= floating_square10.getPosition().x)) { //right
//			Scientist.rect.left = floating_square10.getPosition().x - 37;
//			Scientist.rect.left = floating_square10.getPosition().x - 37;
//		}
//
//		else if ((Scientist.rect.left >= floating_square10.getPosition().x + 50) || (Scientist.rect.left >= floating_square10.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = floating_square10.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > floating_square10.getPosition().y + 55) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.5;
//
//			}
//
//			else if (Scientist.rect.top < floating_square10.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//
//
//	}
//
//	// lasers
//
//	for (int i = 0; i < 5; i++) {
//		if (Scientist.pico.getGlobalBounds().intersects(laser1[i].getGlobalBounds())) {
//			dead[1] = true;
//			burn = true;
//		}
//	}
//
//
//	for (int i = 0; i < 5; i++) {
//		if (Scientist.pico.getGlobalBounds().intersects(laser2[i].getGlobalBounds())) {
//			dead[1] = true;
//			burn = true;
//		}
//	}
//
//	//movingwalls
//	if (Scientist.pico.getGlobalBounds().intersects(movingwall1.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= movingwall1.getPosition().x) || (Scientist.rect.left + 33 <= movingwall1.getPosition().x)) { //right
//			Scientist.rect.left = movingwall1.getPosition().x - 37;
//		}
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(movingwall2.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= movingwall2.getPosition().x) || (Scientist.rect.left + 33 <= movingwall2.getPosition().x)) {			//right
//			Scientist.rect.left = movingwall2.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= movingwall2.getPosition().x + 61.5) || (Scientist.rect.left >= movingwall2.getPosition().x + 62)) {		//left
//			Scientist.rect.left = movingwall2.getPosition().x + 64;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > movingwall2.getPosition().y) {		//down
//				Scientist.rect.top = movingwall2.getPosition().y + 236.4;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > movingwall2.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = movingwall2.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//
//	//block
//	if (Scientist.pico.getGlobalBounds().intersects(block.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= block.getPosition().x) || (Scientist.rect.left + 33 <= block.getPosition().x)) {			//right
//			Scientist.rect.left = block.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= block.getPosition().x + 85.1) || (Scientist.rect.left >= block.getPosition().x + 85.6)) {		//left
//			Scientist.rect.left = block.getPosition().x + 87.6;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > block.getPosition().y) {		//down
//				Scientist.rect.top = block.getPosition().y + 95.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > block.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = block.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	//wall
//	if (Scientist.pico.getGlobalBounds().intersects(wall7.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall7.getPosition().x) || (Scientist.rect.left + 33 <= wall7.getPosition().x)) {			//right
//			Scientist.rect.left = wall7.getPosition().x - 36;
//		}
//	}
//
//	//buttons
//	if (Scientist.pico.getGlobalBounds().intersects(button1.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button1.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_fakeispressed1 = true;
//			button1.setScale(0, 0);
//		}
//		dead[1] = true;
//		burn = true;
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp1.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp1.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp1.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_fakeispressed1 = true;
//			button1.setScale(0, 0);
//		}
//
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(button2.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button2.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_fakeispressed2 = true;
//			button2.setScale(0, 0);
//		}
//		dead[1] = true;
//		burn = true;
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp2.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp2.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp2.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_fakeispressed2 = true;
//			button2.setScale(0, 0);
//		}
//
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(button3.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button3.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressedforground = true;
//			button3.setScale(0, 0);
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(button4.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button4.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_fakeispressed3 = true;
//			button4.setScale(0, 0);
//		}
//		dead[1] = true;
//		burn = true;
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp4.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp4.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp4.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_fakeispressed3 = true;
//			button4.setScale(0, 0);
//		}
//
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp3.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp3.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp3.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressedforground = true;
//			button3.setScale(0, 0);
//
//		}
//
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(button5.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button5.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressed = true;
//			button5.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp5.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp5.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp5.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressed = true;
//			button5.setScale(0, 0);
//		}
//
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(button6.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button6.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressedforwall = true;
//			button6.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp6.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp6.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp6.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressedforwall = true;
//			button6.setScale(0, 0);
//		}
//
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(button7.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button7.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressed2 = true;
//			button7.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp7.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp7.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp7.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressed2 = true;
//			button7.setScale(0, 0);
//		}
//
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(button8.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button8.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressedforwall2 = true;
//			button8.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp8.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp8.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp8.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressedforwall2 = true;
//			button8.setScale(0, 0);
//		}
//
//
//	}
//
//
//}
//
//
//void Scientist_collision6(Player& Scientist, Sprite squares_1, Sprite squares_2, Sprite squares_3, Sprite squares_4, Sprite squares_5, Sprite groundtex, Sprite groundtex2, Sprite groundtex3, Sprite groundtex4, Sprite groundtex6, Sprite groundtex7, Sprite groundtex8, Sprite groundtex9, Sprite groundtex10, Sprite groundtex11, Sprite& button, Sprite& button2, Sprite& button3, Sprite& button4, Sprite& button5, Sprite& buttonp, Sprite& buttonp2, Sprite& buttonp3, Sprite& buttonp4, Sprite& buttonp5, Sprite wall1, Sprite wall3, Sprite wall4, Sprite wall6, RectangleShape laser1[], Sprite teleporter1, Sprite teleporter2, Sprite& fake_wall1, Sprite& fake_wall2, Sprite death) {
//
//	if (Scientist.pico.getGlobalBounds().intersects(death.getGlobalBounds())) {
//		dead[1] = true;
//		fell = true;
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_1.getPosition().x) || (Scientist.rect.left + 33 <= squares_1.getPosition().x)) { //right
//			Scientist.rect.left = squares_1.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_1.getPosition().x + 50) || (Scientist.rect.left >= squares_1.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_1.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_1.getPosition().y + 55) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_1.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_2.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_2.getPosition().x) || (Scientist.rect.left + 33 <= squares_2.getPosition().x)) { //right
//			Scientist.rect.left = squares_2.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_2.getPosition().x + 50) || (Scientist.rect.left >= squares_2.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_2.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_2.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_2.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_3.getPosition().x) || (Scientist.rect.left + 33 <= squares_3.getPosition().x)) { //right
//			Scientist.rect.left = squares_3.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_3.getPosition().x + 50) || (Scientist.rect.left >= squares_3.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_3.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_3.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_3.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_4.getPosition().x) || (Scientist.rect.left + 33 <= squares_4.getPosition().x)) { //right
//			Scientist.rect.left = squares_4.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_4.getPosition().x + 50) || (Scientist.rect.left >= squares_4.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_4.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_4.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_4.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_5.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_5.getPosition().x) || (Scientist.rect.left + 33 <= squares_5.getPosition().x)) { //right
//			Scientist.rect.left = squares_5.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_5.getPosition().x + 50) || (Scientist.rect.left >= squares_5.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_5.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_5.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_5.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//	for (int i = 0; i < 5; i++) {
//		if (Scientist.pico.getGlobalBounds().intersects(laser1[i].getGlobalBounds())) {
//			dead[1] = true;
//			burn = true;
//		}
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(teleporter1.getGlobalBounds()) && Joystick::isButtonPressed(0, 2) && timer2 > 50) {
//
//		Scientist.rect.left = teleporter2.getPosition().x - 40;
//		Scientist.rect.top = teleporter2.getPosition().y - 40;
//		firsttele = true;
//		secondtele = false;
//		timer2 = 0;
//		tele1 = 0;
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(teleporter2.getGlobalBounds()) && Joystick::isButtonPressed(0, 2) && timer2 > 50) {
//
//		Scientist.rect.left = teleporter1.getPosition().x - 40;
//		Scientist.rect.top = teleporter1.getPosition().y - 40;
//		firsttele = false;
//		secondtele = true;
//		timer2 = 0;
//		tele2 = 0;
//	}
//
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex.getGlobalBounds())) {
//		if ((Scientist.rect.left >= groundtex.getPosition().x + 1570) || (Scientist.rect.left >= groundtex.getPosition().x + 1571)) {//left
//			Scientist.rect.left = groundtex.getPosition().x + 1572;
//		}
//		else {
//
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex.getPosition().y - 48) {//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex.getPosition().y - 48;
//				Scientist.onground = true;
//			}
//
//		}
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex2.getGlobalBounds())) {
//		if ((Scientist.rect.left >= groundtex2.getPosition().x + 980) || (Scientist.rect.left >= groundtex2.getPosition().x + 981)) {//left
//			Scientist.rect.left = groundtex2.getPosition().x + 982.5;
//		}
//		else {
//
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex2.getPosition().y - 48) {//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex2.getPosition().y - 48;
//				Scientist.onground = true;
//			}
//
//		}
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex4.getPosition().x) || (Scientist.rect.left + 33 <= groundtex4.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex4.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex4.getPosition().x + 2235.1) || (Scientist.rect.left >= groundtex4.getPosition().x + 2236.1)) {		//left
//			Scientist.rect.left = groundtex4.getPosition().x + 2240.1;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//			if (Scientist.rect.top > groundtex4.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex4.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
// 
// 
// if (Scientist.pico.getGlobalBounds().intersects(groundtex5.getGlobalBounds())) {
//
// if (Scientist.rect.top > groundtex5.getPosition().y + 50) { //down
//	Scientist.rect.top = groundtex5.getPosition().y + 55;
//	Scientist.onground = false;
//	Scientist.move_y += 0.007;
//
// }
//	}
// 
// 
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex6.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex6.getPosition().x) || (Scientist.rect.left + 33 <= groundtex6.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex6.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex6.getPosition().x + 1775.29) || (Scientist.rect.left >= groundtex6.getPosition().x + 1776.29)) {		//left
//			Scientist.rect.left = groundtex6.getPosition().x + 1780.29;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//			if (Scientist.rect.top > groundtex6.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex6.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex7.getGlobalBounds())) {
//
//		if ((Scientist.rect.left + 32 <= groundtex7.getPosition().x) || (Scientist.rect.left + 33 <= groundtex7.getPosition().x)) {			//right
//			if (!Scientist.pico.getGlobalBounds().intersects(teleporter2.getGlobalBounds()) && Joystick::isButtonPressed(0, 2) && timer2 > 50) {
//				Scientist.rect.left = groundtex7.getPosition().x - 36;
//			}
//		}
//		else if ((Scientist.rect.left >= groundtex7.getPosition().x + 980.5) || (Scientist.rect.left >= groundtex7.getPosition().x + 981.5)) {		//left
//			if (!Scientist.pico.getGlobalBounds().intersects(teleporter2.getGlobalBounds()) && Joystick::isButtonPressed(0, 2) && timer2 > 50) {
//				Scientist.rect.left = groundtex7.getPosition().x + 982.5;
//			}
//		}
//
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//			if (Scientist.rect.top > groundtex7.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex7.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex8.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex8.getPosition().x) || (Scientist.rect.left + 33 <= groundtex8.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex8.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex8.getPosition().x + 1251) || (Scientist.rect.left >= groundtex8.getPosition().x + 1252)) {		//left
//			Scientist.rect.left = groundtex8.getPosition().x + 1254.063;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//			if (Scientist.rect.top > groundtex8.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex8.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex10.getGlobalBounds())) {
//
//
//		if ((Scientist.rect.left + 32 <= groundtex10.getPosition().x) || (Scientist.rect.left + 33 <= groundtex10.getPosition().x)) {			//right
//			if (!Scientist.pico.getGlobalBounds().intersects(teleporter2.getGlobalBounds()) && Joystick::isButtonPressed(0, 2) && timer2 > 50) {
//				Scientist.rect.left = groundtex10.getPosition().x - 36;
//			}
//		}
//		else if ((Scientist.rect.left >= groundtex10.getPosition().x + 1245.74) || (Scientist.rect.left >= groundtex10.getPosition().x + 1246.74)) {		//left
//			if (!Scientist.pico.getGlobalBounds().intersects(teleporter2.getGlobalBounds()) && Joystick::isButtonPressed(0, 2) && timer2 > 50) {
//				Scientist.rect.left = groundtex10.getPosition().x + 1249.74;
//			}
//		}
//
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//			if (Scientist.rect.top > groundtex10.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex10.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex11.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex11.getPosition().x) || (Scientist.rect.left + 33 <= groundtex11.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex11.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex11.getPosition().x + 1175) || (Scientist.rect.left >= groundtex11.getPosition().x + 1176)) {		//left
//			Scientist.rect.left = groundtex11.getPosition().x + 1179;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//			if (Scientist.rect.top > groundtex11.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex11.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(button.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button.getPosition().x) {			//jump
//			Scientist.onground = true;
//			button_ispressedforwall = true;
//			button.setScale(0, 0);
//		}
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp.getGlobalBounds())) {
//
//		if (Scientist.rect.top >= buttonp.getPosition().x + 70) {			//jump
//			Scientist.rect.top = buttonp.getPosition().x + 72.9963;
//			Scientist.onground = true;
//			button_ispressedforwall = true;
//			button.setScale(0, 0);
//		}
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(button2.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button2.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressedforground = true;
//			button2.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp2.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp2.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp2.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressedforground = true;
//			button2.setScale(0, 0);
//		}
//
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(button3.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button3.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressed = true;
//			button3.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp3.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp3.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp3.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressed = true;
//			button3.setScale(0, 0);
//		}
//
//
//	}
//
//
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(button5.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button5.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressed2 = true;
//			button5.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp5.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp5.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp5.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressed2 = true;
//			button5.setScale(0, 0);
//		}
//
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= wall3.getPosition().x) || (Scientist.rect.left + 33 <= wall3.getPosition().x)) { //right to player
//			Scientist.rect.left = wall3.getPosition().x - 37;
//
//		}
//		else if ((Scientist.rect.left >= wall3.getPosition().x + 115.65) || (Scientist.rect.left >= wall3.getPosition().x + 116.65)) {//left to player
//			Scientist.rect.left = wall3.getPosition().x + 120.65;
//		}
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= wall4.getPosition().x) || (Scientist.rect.left + 33 <= wall4.getPosition().x)) { //right to player
//			Scientist.rect.left = wall4.getPosition().x - 37;
//
//		}
//		else if ((Scientist.rect.left >= wall4.getPosition().x + 115.65) || (Scientist.rect.left >= wall4.getPosition().x + 116.65)) {//left to player
//			Scientist.rect.left = wall4.getPosition().x + 120.65;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//			if (Scientist.rect.top > wall4.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = wall4.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall6.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= wall6.getPosition().x) || (Scientist.rect.left + 33 <= wall6.getPosition().x)) { //right to player
//			Scientist.rect.left = wall6.getPosition().x - 37;
//
//		}
//	}
//
//}
//
//
//void Scientist_collision7(Player& Scientist, Sprite& teleporter1, Sprite& teleporter2, Sprite& teleporter3, Sprite& teleporter4, RectangleShape laser, RectangleShape laser2, RectangleShape laser3, RectangleShape laser5, Sprite squares_1, Sprite squares_2, Sprite squares_3, Sprite squares_4, Sprite groundtex, Sprite groundtex2, Sprite groundtex3, Sprite groundtex4, Sprite groundtex5, Sprite groundtex6, Sprite groundtex7, Sprite groundtex8, Sprite groundtex9, Sprite groundtex10, Sprite wall_1, Sprite wall_2, Sprite wall_3, Sprite wall_4, Sprite wall_5, Sprite wall_6, Sprite wall_7, Sprite wall_8, Sprite wall_9, Sprite wall_10, Sprite wall_11, Sprite wall_12, Sprite& button, Sprite& buttonp, Sprite& button1, Sprite& buttonp1, Sprite& button2, Sprite& buttonp2, Sprite& button3, Sprite& buttonp3, Sprite& button4, Sprite& buttonp4, Sprite& button5, Sprite& buttonp5, Sprite death) {
//
//	if (Scientist.pico.getGlobalBounds().intersects(death.getGlobalBounds())) {
//		dead[1] = true;
//		fell = true;
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex.getGlobalBounds())) {
//		if (Scientist.rect.top > groundtex.getPosition().y - 48) {//jump
//			Scientist.move_y = 0;
//			Scientist.rect.top = groundtex.getPosition().y - 48;
//			Scientist.onground = true;
//		}
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex3.getPosition().x) || (Scientist.rect.left + 33 <= groundtex3.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex3.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex3.getPosition().x + 585) || (Scientist.rect.left >= groundtex3.getPosition().x + 586.5)) {		//left
//			Scientist.rect.left = groundtex3.getPosition().x + 589.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex3.getPosition().y) {		//down
//				Scientist.rect.top = groundtex3.getPosition().y + 80;
//				Scientist.move_y += 0.0007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex3.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex3.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex4.getPosition().x) || (Scientist.rect.left + 33 <= groundtex4.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex4.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex4.getPosition().x + 585) || (Scientist.rect.left >= groundtex4.getPosition().x + 586.5)) {		//left
//			Scientist.rect.left = groundtex4.getPosition().x + 589.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex4.getPosition().y) {		//down
//				Scientist.rect.top = groundtex4.getPosition().y + 70;
//				Scientist.move_y += 0.0007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex4.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex4.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex5.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex5.getPosition().x) || (Scientist.rect.left + 33 <= groundtex5.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex5.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex5.getPosition().x + 585) || (Scientist.rect.left >= groundtex5.getPosition().x + 586.5)) {		//left
//			Scientist.rect.left = groundtex5.getPosition().x + 589.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex5.getPosition().y) {		//down
//				Scientist.rect.top = groundtex5.getPosition().y + 80;
//				Scientist.move_y += 0.0007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex5.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex5.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex6.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex6.getPosition().x) || (Scientist.rect.left + 33 <= groundtex6.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex6.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex6.getPosition().x + 585) || (Scientist.rect.left >= groundtex6.getPosition().x + 586.5)) {		//left
//			Scientist.rect.left = groundtex6.getPosition().x + 589.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex6.getPosition().y) {		//down
//				Scientist.rect.top = groundtex6.getPosition().y + 70;
//				Scientist.move_y += 0.0007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex6.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex6.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex7.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex7.getPosition().x) || (Scientist.rect.left + 33 <= groundtex7.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex7.getPosition().x - 36;
//		}
//
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex7.getPosition().y) {		//down
//				Scientist.rect.top = groundtex7.getPosition().y + 70;
//				Scientist.move_y += 0.0007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex7.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex7.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex8.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex8.getPosition().x) || (Scientist.rect.left + 33 <= groundtex8.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex8.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex8.getPosition().x + groundtex8.getGlobalBounds().width) || (Scientist.rect.left >= groundtex8.getPosition().x + groundtex8.getGlobalBounds().width + 1)) {//left
//			Scientist.rect.left = groundtex8.getPosition().x + groundtex8.getGlobalBounds().width + 6;
//		}
//
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex8.getPosition().y) {		//down
//				Scientist.rect.top = groundtex8.getPosition().y + 70;
//				Scientist.move_y += 0.0007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex8.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex8.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex9.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex9.getPosition().x) || (Scientist.rect.left + 33 <= groundtex9.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex9.getPosition().x - 36;
//		}
//
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex9.getPosition().y) {		//down
//				Scientist.rect.top = groundtex9.getPosition().y + 70;
//				Scientist.move_y += 0.0007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex9.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex9.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex10.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex10.getPosition().x) || (Scientist.rect.left + 33 <= groundtex10.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex10.getPosition().x - 36;
//		}
//
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex10.getPosition().y) {		//down
//				Scientist.rect.top = groundtex10.getPosition().y + 70;
//				Scientist.move_y += 0.0007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex10.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex10.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressedforwall = true;
//			button.setScale(0, 0);
//		}
//
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp1.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp1.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp1.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressed = true;
//			button.setScale(0, 0);
//		}
//
//
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(teleporter1.getGlobalBounds()) && Joystick::isButtonPressed(0, 2) && timer2 > 50) {
//
//		Scientist.rect.top = teleporter2.getPosition().y;
//		Scientist.rect.left = teleporter2.getPosition().x;
//		firsttele = true;
//		secondtele = false;
//		timer2 = 0;
//		tele1 = 0;
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(teleporter2.getGlobalBounds()) && Joystick::isButtonPressed(0, 2) && timer2 > 50) {
//
//		Scientist.rect.left = teleporter1.getPosition().x - 50;
//		Scientist.rect.top = teleporter1.getPosition().y;
//		firsttele = false;
//		secondtele = true;
//		timer2 = 0;
//		tele2 = 0;
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(teleporter3.getGlobalBounds()) && Joystick::isButtonPressed(0, 2) && timer2 > 50) {
//
//		Scientist.rect.top = teleporter4.getPosition().y;
//		Scientist.rect.left = teleporter4.getPosition().x;
//		firsttele = true;
//		secondtele = false;
//		timer2 = 0;
//		tele1 = 0;
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(teleporter4.getGlobalBounds()) && Joystick::isButtonPressed(0, 2) && timer2 > 50) {
//
//		Scientist.rect.left = teleporter3.getPosition().x - 50;
//		Scientist.rect.top = teleporter3.getPosition().y;
//		firsttele = false;
//		secondtele = true;
//		timer2 = 0;
//		tele2 = 0;
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_1.getPosition().x) || (Scientist.rect.left + 33 <= squares_1.getPosition().x)) { //right
//			Scientist.rect.left = squares_1.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_1.getPosition().x + 72) || (Scientist.rect.left >= squares_1.getPosition().x + 73)) {//left
//			Scientist.rect.left = squares_1.getPosition().x + 75.6;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_1.getPosition().y + 55) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.5;
//
//			}
//
//			else if (Scientist.rect.top < squares_1.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_2.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_2.getPosition().x) || (Scientist.rect.left + 33 <= squares_2.getPosition().x)) { //right
//			Scientist.rect.left = squares_2.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_2.getPosition().x + 50) || (Scientist.rect.left >= squares_2.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_2.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_2.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_2.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_3.getPosition().x) || (Scientist.rect.left + 33 <= squares_3.getPosition().x)) { //right
//			Scientist.rect.left = squares_3.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_3.getPosition().x + 50) || (Scientist.rect.left >= squares_3.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_3.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_3.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_3.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(squares_4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_4.getPosition().x) || (Scientist.rect.left + 33 <= squares_4.getPosition().x)) { //right
//			Scientist.rect.left = squares_4.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_4.getPosition().x + 50) || (Scientist.rect.left >= squares_4.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_4.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_4.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_4.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(laser.getGlobalBounds())) {
//		/*if (Scientist.rect.left + 32 <= laser.getPosition().x || Scientist.rect.left + 33 <= laser.getPosition().x) {
//			Scientist.rect.left = laser.getPosition().x - 40;
//		}*/
//		dead[1] = true;
//		burn = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(laser3.getGlobalBounds())) {
//		/*if (Scientist.rect.left + 32 <= laser3.getPosition().x || Scientist.rect.left + 33 <= laser3.getPosition().x) {
//			Scientist.rect.left = laser3.getPosition().x - 40;
//		}*/
//		dead[1] = true;
//		burn = true;
//	}
//
//
//
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= wall_3.getPosition().x) || (Scientist.rect.left + 33 <= wall_3.getPosition().x)) { //right to player
//			Scientist.rect.left = wall_3.getPosition().x - 37;
//
//		}
//		else if ((Scientist.rect.left >= wall_3.getPosition().x + 185) || (Scientist.rect.left >= wall_3.getPosition().x + 186)) {//left to player
//			Scientist.rect.left = wall_3.getPosition().x + 190.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > wall_3.getPosition().y) {		//down
//				Scientist.rect.top = wall_3.getPosition().y + 645;
//				Scientist.move_y += 0.0007;
//				Scientist.onground = false;
//			}
//		}
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= wall_4.getPosition().x) || (Scientist.rect.left + 33 <= wall_4.getPosition().x)) { //right to player
//			Scientist.rect.left = wall_4.getPosition().x - 37;
//
//		}
//		else if ((Scientist.rect.left >= wall_4.getPosition().x + 60) || (Scientist.rect.left >= wall_4.getPosition().x + 61)) {//left to player
//			Scientist.rect.left = wall_4.getPosition().x + 63.5;
//
//		}
//
//	}
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_5.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= wall_5.getPosition().x) || (Scientist.rect.left + 33 <= wall_5.getPosition().x)) { //right to player
//			Scientist.rect.left = wall_5.getPosition().x - 37;
//
//		}
//		else if ((Scientist.rect.left >= wall_5.getPosition().x + 185) || (Scientist.rect.left >= wall_5.getPosition().x + 186)) {//left to player
//			Scientist.rect.left = wall_5.getPosition().x + 190.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > wall_5.getPosition().y) {		//down
//				Scientist.rect.top = wall_5.getPosition().y + 645;
//				Scientist.move_y += 0.0007;
//				Scientist.onground = false;
//			}
//		}
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_6.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= wall_6.getPosition().x) || (Scientist.rect.left + 33 <= wall_6.getPosition().x)) { //right to player
//			Scientist.rect.left = wall_6.getPosition().x - 37;
//
//		}
//		else if ((Scientist.rect.left >= wall_6.getPosition().x + 60) || (Scientist.rect.left >= wall_6.getPosition().x + 61)) {//left to player
//			Scientist.rect.left = wall_6.getPosition().x + 63.5;
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_7.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= wall_7.getPosition().x) || (Scientist.rect.left + 33 <= wall_7.getPosition().x)) { //right to player
//			Scientist.rect.left = wall_7.getPosition().x - 37;
//
//		}
//		else if ((Scientist.rect.left >= wall_7.getPosition().x + 60) || (Scientist.rect.left >= wall_7.getPosition().x + 61)) {//left to player
//			Scientist.rect.left = wall_7.getPosition().x + 63.5;
//
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > wall_7.getPosition().y) {		//down
//				Scientist.rect.top = wall_7.getPosition().y + 80;
//				Scientist.move_y += 0.0007;
//				Scientist.onground = false;
//			}
//		}
//
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(wall_8.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= wall_8.getPosition().x) || (Scientist.rect.left + 33 <= wall_8.getPosition().x)) { //right to player
//			Scientist.rect.left = wall_8.getPosition().x - 37;
//
//		}
//		else if ((Scientist.rect.left >= wall_8.getPosition().x + 60) || (Scientist.rect.left >= wall_8.getPosition().x + 61)) {//left to player
//			Scientist.rect.left = wall_8.getPosition().x + 63.5;
//
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_9.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= wall_9.getPosition().x) || (Scientist.rect.left + 33 <= wall_9.getPosition().x)) { //right to player
//			Scientist.rect.left = wall_9.getPosition().x - 37;
//
//		}
//		else if ((Scientist.rect.left >= wall_9.getPosition().x + 60) || (Scientist.rect.left >= wall_9.getPosition().x + 61)) {//left to player
//			Scientist.rect.left = wall_9.getPosition().x + 63.5;
//
//		}
//
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(wall_10.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= wall_10.getPosition().x) || (Scientist.rect.left + 33 <= wall_10.getPosition().x)) { //right to player
//			Scientist.rect.left = wall_10.getPosition().x - 37;
//
//		}
//		else if ((Scientist.rect.left >= wall_10.getPosition().x + 185) || (Scientist.rect.left >= wall_10.getPosition().x + 186)) {//left to player
//			Scientist.rect.left = wall_10.getPosition().x + 190.5;
//
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//		}
//
//		if (Scientist.rect.top < wall_10.getPosition().y - 55.5) {//jump
//			Scientist.move_y = 0;
//
//			Scientist.onground = true;
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_11.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= wall_11.getPosition().x) || (Scientist.rect.left + 33 <= wall_11.getPosition().x)) { //right to player
//			Scientist.rect.left = wall_11.getPosition().x - 37;
//
//		}
//		else if ((Scientist.rect.left >= wall_11.getPosition().x + 185) || (Scientist.rect.left >= wall_11.getPosition().x + 186)) {//left to player
//			Scientist.rect.left = wall_11.getPosition().x + 190.5;
//
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//		}
//
//		if (Scientist.rect.top < wall_11.getPosition().y - 55.5) {//jump
//			Scientist.move_y = 0;
//
//			Scientist.onground = true;
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_12.getGlobalBounds())) {
//		if ((Scientist.rect.left + 31 <= wall_12.getPosition().x) || (Scientist.rect.left + 33 <= wall_12.getPosition().x)) { //right to player
//			Scientist.rect.left = wall_12.getPosition().x - 37;
//
//		}
//
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(button.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressedforwall = true;
//			button.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressedforwall = true;
//			button.setScale(0, 0);
//		}
//
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(button3.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button3.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressedforground = true;
//			button3.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp3.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp3.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp3.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressedforground = true;
//			button3.setScale(0, 0);
//		}
//
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp4.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp4.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp4.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressed = true;
//			button4.setScale(0, 0);
//		}
//
//
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp5.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp5.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp5.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressedforground2 = true;
//			button5.setScale(0, 0);
//		}
//
//
//	}
//
//}
//
//
//
//void Scientist_collision8(Player& Scientist, Sprite groundtex, Sprite groundtex2, Sprite groundtex3, Sprite groundtex4, Sprite groundtex5, Sprite groundtex6, Sprite groundtex7, Sprite groundtex8, Sprite groundtex9, Sprite squares_1, Sprite squares_2, Sprite squares_3, Sprite squares_7, Sprite squares_9, Sprite squares_10, Sprite squares_11, RectangleShape laser, RectangleShape laser1, RectangleShape laser2, RectangleShape laser3, RectangleShape laser4, Sprite wall_2, Sprite wall_3, Sprite wall_5, Sprite wall_6, Sprite wall_9, Sprite wall_10, Sprite teleporter1, Sprite teleporter2, Sprite platform1, Sprite platform2, Sprite& button, Sprite& buttonp, Sprite& button1, Sprite& buttonp1,Sprite& buttonp2, Sprite death, Sprite squares_4, Sprite squares_5, Sprite squares_6) {
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(death.getGlobalBounds())) {
//		dead[1] = true;
//		fell = true;
//	}
//
//	if (button_ispressed2) {
//		if (Scientist.pico.getGlobalBounds().intersects(squares_4.getGlobalBounds())) {
//			if ((Scientist.rect.left + 32 <= squares_4.getPosition().x) || (Scientist.rect.left + 33 <= squares_4.getPosition().x)) { //right
//				Scientist.rect.left = squares_4.getPosition().x - 36;
//			}
//
//			else if ((Scientist.rect.left >= squares_4.getPosition().x + 50) || (Scientist.rect.left >= squares_4.getPosition().x + 50.5)) {//left
//				Scientist.rect.left = squares_4.getPosition().x + 55;
//			}
//			else {
//				Scientist.move_y = 0;
//				Scientist.onground = true;
//
//
//				if (Scientist.rect.top > squares_4.getPosition().y + 50) { //down
//					Scientist.onground = false;
//					Scientist.move_y += 0.007;
//
//				}
//
//				else if (Scientist.rect.top < squares_4.getPosition().y) {//jump
//
//					Scientist.onground = true;
//
//
//
//				}
//
//			}
//
//		}
//
//
//		if (Scientist.pico.getGlobalBounds().intersects(squares_5.getGlobalBounds())) {
//			if ((Scientist.rect.left + 32 <= squares_5.getPosition().x) || (Scientist.rect.left + 33 <= squares_5.getPosition().x)) { //right
//				Scientist.rect.left = squares_5.getPosition().x - 36;
//			}
//
//			else if ((Scientist.rect.left >= squares_5.getPosition().x + 50) || (Scientist.rect.left >= squares_5.getPosition().x + 50.5)) {//left
//				Scientist.rect.left = squares_5.getPosition().x + 55;
//			}
//			else {
//				Scientist.move_y = 0;
//				Scientist.onground = true;
//
//
//				if (Scientist.rect.top > squares_5.getPosition().y + 50) { //down
//					Scientist.onground = false;
//					Scientist.move_y += 0.007;
//
//				}
//
//				else if (Scientist.rect.top < squares_5.getPosition().y) {//jump
//
//					Scientist.onground = true;
//
//
//
//				}
//
//			}
//
//		}
// 
// if (Scientist.pico.getGlobalBounds().intersects(squares_6.getGlobalBounds())) {
//if ((Scientist.rect.left + 32 <= squares_6.getPosition().x) || (Scientist.rect.left + 33 <= squares_6.getPosition().x)) { //right
//	Scientist.rect.left = squares_6.getPosition().x - 36;
//}
//
//else if ((Scientist.rect.left >= squares_6.getPosition().x + 50) || (Scientist.rect.left >= squares_6.getPosition().x + 50.5)) {//left
//	Scientist.rect.left = squares_6.getPosition().x + 55;
//}
//else {
//	Scientist.move_y = 0;
//	Scientist.onground = true;
//
//
//	if (Scientist.rect.top > squares_6.getPosition().y + 50) { //down
//		Scientist.onground = false;
//		Scientist.move_y += 0.007;
//
//	}
//
//	else if (Scientist.rect.top < squares_6.getPosition().y) {//jump
//
//		Scientist.onground = true;
//
//
//
//	}
//
//}
//
//}
// 
//	}
//	//groundtex
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex.getPosition().x) || (Scientist.rect.left + 33 <= groundtex.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex.getPosition().x + 1373 || (Scientist.rect.left >= groundtex.getPosition().x + 1373.5))) {		//left
//			Scientist.rect.left = groundtex.getPosition().x + 1375.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex.getPosition().y) {		//down
//				Scientist.rect.top = groundtex.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex2.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex2.getPosition().x) || (Scientist.rect.left + 33 <= groundtex2.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex2.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex2.getPosition().x + 3533.5 || (Scientist.rect.left >= groundtex2.getPosition().x + 3534))) {		//left
//			Scientist.rect.left = groundtex2.getPosition().x + 3537;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex2.getPosition().y) {		//down
//				Scientist.rect.top = groundtex2.getPosition().y + 120.5;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex2.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex2.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex3.getPosition().x) || (Scientist.rect.left + 33 <= groundtex3.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex3.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex3.getPosition().x + 3533.5 || (Scientist.rect.left >= groundtex3.getPosition().x + 3534))) {		//left
//			Scientist.rect.left = groundtex3.getPosition().x + 3537;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex3.getPosition().y) {		//down
//				Scientist.rect.top = groundtex3.getPosition().y + 120.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex3.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex3.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex4.getPosition().x) || (Scientist.rect.left + 33 <= groundtex4.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex4.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex4.getPosition().x + 586 || (Scientist.rect.left >= groundtex4.getPosition().x + 586.5))) {		//left
//			Scientist.rect.left = groundtex4.getPosition().x + 589.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex4.getPosition().y) {		//down
//				Scientist.rect.top = groundtex4.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex4.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex4.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex5.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex5.getPosition().x) || (Scientist.rect.left + 33 <= groundtex5.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex5.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex5.getPosition().x + 251.95 || (Scientist.rect.left >= groundtex5.getPosition().x + 252.45))) {		//left
//			Scientist.rect.left = groundtex5.getPosition().x + 255.45;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex5.getPosition().y) {		//down
//				Scientist.rect.top = groundtex5.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex5.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex5.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex6.getGlobalBounds())) {
//
//		if ((Scientist.rect.left + 32 <= groundtex6.getPosition().x) || (Scientist.rect.left + 33 <= groundtex6.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex6.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex6.getPosition().x + 2758.5 || (Scientist.rect.left >= groundtex6.getPosition().x + 2749))) {		//left
//			Scientist.rect.left = groundtex6.getPosition().x + 2751;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex6.getPosition().y) {		//down
//				Scientist.rect.top = groundtex6.getPosition().y + 200;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex6.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex6.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex7.getGlobalBounds())) {
//		if ((Scientist.rect.left >= groundtex7.getPosition().x + 586 || (Scientist.rect.left >= groundtex7.getPosition().x + 586.5))) {		//left
//			Scientist.rect.left = groundtex7.getPosition().x + 589.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex7.getPosition().y) {		//down
//				Scientist.rect.top = groundtex7.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex7.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex7.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex8.getGlobalBounds())) {
//
//		if ((Scientist.rect.left + 32 <= groundtex8.getPosition().x) || (Scientist.rect.left + 33 <= groundtex8.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex8.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex8.getPosition().x + 602.72 || (Scientist.rect.left >= groundtex8.getPosition().x + 603.22))) {		//left
//			Scientist.rect.left = groundtex8.getPosition().x + 605.22;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex8.getPosition().y) {		//down
//				Scientist.rect.top = groundtex8.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex8.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex8.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex9.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex9.getPosition().x) || (Scientist.rect.left + 33 <= groundtex9.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex9.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex9.getPosition().x + 1019.3 || (Scientist.rect.left >= groundtex9.getPosition().x + 1019.8))) {		//left
//			Scientist.rect.left = groundtex9.getPosition().x + 1021.8;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex9.getPosition().y) {		//down
//				Scientist.rect.top = groundtex9.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex9.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex9.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	//lasers
//	if (maskon == 0) {
//
//		if (Scientist.pico.getGlobalBounds().intersects(laser.getGlobalBounds())) {
//			dead[1] = true;
//			burn = true;
//		}
//
//		if (Scientist.pico.getGlobalBounds().intersects(laser1.getGlobalBounds())) {
//			dead[1] = true;
//			burn = true;
//		}
//		if (Scientist.pico.getGlobalBounds().intersects(laser2.getGlobalBounds())) {
//			dead[1] = true;
//			burn = true;
//		}
//		if (Scientist.pico.getGlobalBounds().intersects(laser3.getGlobalBounds())) {
//			dead[1] = true;
//			burn = true;
//		}
//		if (Scientist.pico.getGlobalBounds().intersects(laser4.getGlobalBounds())) {
//			dead[1] = true;
//			burn = true;
//		}
//
//
//
//	}
//
//	//squares    //hatms7 squares_4,5,6
//	if (Scientist.pico.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_1.getPosition().x) || (Scientist.rect.left + 33 <= squares_1.getPosition().x)) { //right
//			Scientist.rect.left = squares_1.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_1.getPosition().x + 50) || (Scientist.rect.left >= squares_1.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_1.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_1.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_1.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_2.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_2.getPosition().x) || (Scientist.rect.left + 33 <= squares_2.getPosition().x)) { //right
//			Scientist.rect.left = squares_2.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_2.getPosition().x + 50) || (Scientist.rect.left >= squares_2.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_2.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_2.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_2.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_3.getPosition().x) || (Scientist.rect.left + 33 <= squares_3.getPosition().x)) { //right
//			Scientist.rect.left = squares_3.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_3.getPosition().x + 50) || (Scientist.rect.left >= squares_3.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_3.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_3.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_3.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_7.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_7.getPosition().x) || (Scientist.rect.left + 33 <= squares_7.getPosition().x)) { //right
//			Scientist.rect.left = squares_7.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_7.getPosition().x + 50) || (Scientist.rect.left >= squares_7.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_7.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_7.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_7.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_9.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_9.getPosition().x) || (Scientist.rect.left + 33 <= squares_9.getPosition().x)) { //right
//			Scientist.rect.left = squares_9.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_9.getPosition().x + 50) || (Scientist.rect.left >= squares_9.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_9.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_9.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_9.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_10.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_10.getPosition().x) || (Scientist.rect.left + 33 <= squares_10.getPosition().x)) { //right
//			Scientist.rect.left = squares_10.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_10.getPosition().x + 50) || (Scientist.rect.left >= squares_10.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_10.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_10.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_10.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_11.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_11.getPosition().x) || (Scientist.rect.left + 33 <= squares_11.getPosition().x)) { //right
//			Scientist.rect.left = squares_11.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_11.getPosition().x + 50) || (Scientist.rect.left >= squares_11.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_11.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_11.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_11.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//	//walls
//	if (Scientist.pico.getGlobalBounds().intersects(wall_2.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_2.getPosition().x) || (Scientist.rect.left + 33 <= wall_2.getPosition().x)) { //right
//			Scientist.rect.left = wall_2.getPosition().x - 36;
//		}
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_3.getPosition().x) || (Scientist.rect.left + 33 <= wall_3.getPosition().x)) { //right
//			Scientist.rect.left = wall_3.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= wall_3.getPosition().x + 315) || (Scientist.rect.left >= wall_3.getPosition().x + 315.5)) {//left
//			Scientist.rect.left = wall_3.getPosition().x + 317.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > wall_3.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < wall_3.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_5.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_5.getPosition().x) || (Scientist.rect.left + 33 <= wall_5.getPosition().x)) {			//right
//			Scientist.rect.left = wall_5.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= wall_5.getPosition().x + 315 || (Scientist.rect.left >= wall_5.getPosition().x + 315.5))) {		//left
//			Scientist.rect.left = wall_5.getPosition().x + 317.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > wall_5.getPosition().y) {		//down
//				Scientist.rect.top = wall_5.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > wall_5.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = wall_5.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_6.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_6.getPosition().x) || (Scientist.rect.left + 33 <= wall_6.getPosition().x)) {			//right
//			Scientist.rect.left = wall_6.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= wall_6.getPosition().x + 315 || (Scientist.rect.left >= wall_6.getPosition().x + 315.5))) {		//left
//			Scientist.rect.left = wall_6.getPosition().x + 317.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > wall_6.getPosition().y) {		//down
//				Scientist.rect.top = wall_6.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > wall_6.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = wall_6.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_9.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_9.getPosition().x) || (Scientist.rect.left + 33 <= wall_9.getPosition().x)) {			//right
//			Scientist.rect.left = wall_9.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= wall_9.getPosition().x + 91.75 || (Scientist.rect.left >= wall_9.getPosition().x + 92.25))) {		//left
//			Scientist.rect.left = wall_9.getPosition().x + 95.25;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > wall_9.getPosition().y) {		//down
//				Scientist.rect.top = wall_9.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > wall_9.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = wall_9.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_10.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_10.getPosition().x) || (Scientist.rect.left + 33 <= wall_10.getPosition().x)) {			//right
//			Scientist.rect.left = wall_10.getPosition().x - 36;
//		}
//	}
//	//teleporter
//	if (Scientist.pico.getGlobalBounds().intersects(teleporter1.getGlobalBounds()) && Joystick::isButtonPressed(0, 2) && timer2 > 50) {
//
//		Scientist.rect.left = teleporter2.getPosition().x;
//		Scientist.rect.top = teleporter2.getPosition().y;
//		firsttele = true;
//		secondtele = false;
//		timer2 = 0;
//		tele1 = 0;
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(teleporter2.getGlobalBounds()) && Joystick::isButtonPressed(0, 2) && timer2 > 50) {
//
//		Scientist.rect.left = teleporter1.getPosition().x - 50;
//		Scientist.rect.top = teleporter1.getPosition().y;
//		firsttele = false;
//		secondtele = true;
//		timer2 = 0;
//		tele2 = 0;
//	}
//
//
//	//platform
//
//	if (Scientist.pico.getGlobalBounds().intersects(platform1.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= platform1.getPosition().x) || (Scientist.rect.left + 33 <= platform1.getPosition().x)) {			//right
//			Scientist.rect.left = platform1.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= platform1.getPosition().x + 152.8 || (Scientist.rect.left >= platform1.getPosition().x + 153.2))) {		//left
//			Scientist.rect.left = platform1.getPosition().x + 156.2;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > platform1.getPosition().y) {		//down
//				Scientist.rect.top = platform1.getPosition().y + 19;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > platform1.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = platform1.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(platform2.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= platform2.getPosition().x) || (Scientist.rect.left + 33 <= platform2.getPosition().x)) {			//right
//			Scientist.rect.left = platform2.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= platform2.getPosition().x + 237.9 || (Scientist.rect.left >= platform2.getPosition().x + 238.4))) {		//left
//			Scientist.rect.left = platform2.getPosition().x + 241.302;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > platform2.getPosition().y) {		//down
//				Scientist.rect.top = platform2.getPosition().y + 19;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > platform2.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = platform2.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//
//	//buttons
//	if (Scientist.pico.getGlobalBounds().intersects(button.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressed = true;
//			button.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressed = true;
//			button.setScale(0, 0);
//		}
//
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(button1.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button1.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressedforwall = true;
//			button1.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp1.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp1.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp1.getPosition().y - 30;
//			Scientist.onground = true;
//			button_ispressedforwall = true;
//			button1.setScale(0, 0);
//		}
//
//
//	}
// 
// if (Scientist.pico.getGlobalBounds().intersects(buttonp2.getGlobalBounds())) {
//
//if (Scientist.rect.top < buttonp2.getPosition().y - 20) {			//jump
//	Scientist.rect.top = buttonp2.getPosition().y - 48.5;
//	Scientist.onground = true;
//	button_ispressed2 = true;
//
//}
//
//
//}
//
//}
//
//
//
//
//void Scientist_collision9(Player& Scientist, Sprite groundtex, Sprite groundtex2, Sprite groundtex3, Sprite groundtex4, Sprite groundtex5, Sprite groundtex6, Sprite groundtex7, Sprite groundtex8, Sprite groundtex9, Sprite groundtex10, Sprite groundtex11, Sprite groundtex12, Sprite teleporter1, Sprite teleporter2, Sprite squares_1, Sprite squares_2, Sprite squares_3, Sprite squares_4, Sprite squares_5, Sprite squares_6, Sprite squares_7, RectangleShape laser1, RectangleShape laser2[], RectangleShape laser3, RectangleShape laser4, Sprite wall_1, Sprite wall_2, Sprite wall_3, Sprite wall_4, Sprite wall_5, Sprite wall_6, Sprite wall_7, Sprite wall_8, Sprite wall_9, Sprite wall_10, Sprite wall_11, Sprite wall_12, Sprite wall_13, Sprite wall_14, Sprite& button3, Sprite& buttonp3, Sprite death) {
//
//	if (Scientist.pico.getGlobalBounds().intersects(death.getGlobalBounds())) {
//		dead[1] = true;
//		fell = true;
//	}
//
//	//groundtex
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex.getPosition().x) || (Scientist.rect.left + 33 <= groundtex.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex.getPosition().x + 1844.6 || (Scientist.rect.left >= groundtex.getPosition().x + 1845.1))) {		//left
//			Scientist.rect.left = groundtex.getPosition().x + 1847.1;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex.getPosition().y) {		//down
//				Scientist.rect.top = groundtex.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex2.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex2.getPosition().x) || (Scientist.rect.left + 33 <= groundtex2.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex2.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex2.getPosition().x + 1844.6 || (Scientist.rect.left >= groundtex2.getPosition().x + 1845.1))) {		//left
//			Scientist.rect.left = groundtex2.getPosition().x + 1847.1;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex2.getPosition().y) {		//down
//				Scientist.rect.top = groundtex2.getPosition().y + 73.1;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex2.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex2.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//
//
//
//		}
//
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex3.getPosition().x) || (Scientist.rect.left + 33 <= groundtex3.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex3.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex3.getPosition().x + 233.3 || (Scientist.rect.left >= groundtex3.getPosition().x + 233.8))) {		//left
//			Scientist.rect.left = groundtex3.getPosition().x + 235.8;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex3.getPosition().y) {		//down
//				Scientist.rect.top = groundtex3.getPosition().y + 73.1;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex3.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex3.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//
//
//
//		}
//
//
//	}
//
//if (Scientist.pico.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex4.getPosition().x) || (Scientist.rect.left + 33 <= groundtex4.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex4.getPosition().x - 36;
//		}
//		
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex4.getPosition().y) {		//down
//				Scientist.rect.top = groundtex4.getPosition().y + 50.5;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex4.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex4.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//
//
//		}
//
//
//	}
//	
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex5.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex5.getPosition().x) || (Scientist.rect.left + 33 <= groundtex5.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex5.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex5.getPosition().x + 1451.6 || (Scientist.rect.left >= groundtex5.getPosition().x + 1452.1))) {		//left
//			Scientist.rect.left = groundtex5.getPosition().x + 1454.1;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex5.getPosition().y) {		//down
//				Scientist.rect.top = groundtex5.getPosition().y + 50.5;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex5.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex5.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//
//
//		}
//
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex6.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex6.getPosition().x) || (Scientist.rect.left + 33 <= groundtex6.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex6.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex6.getPosition().x + 194 || (Scientist.rect.left >= groundtex6.getPosition().x + 194.5))) {		//left
//			Scientist.rect.left = groundtex6.getPosition().x + 196.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex6.getPosition().y) {		//down
//				Scientist.rect.top = groundtex6.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex6.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex6.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex7.getGlobalBounds())) {
//		if (Scientist.rect.top > groundtex7.getPosition().y - 48) {//jump
//			Scientist.move_y = 0;
//			Scientist.rect.top = groundtex7.getPosition().y - 48;
//			Scientist.onground = true;
//		}
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex8.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex8.getPosition().x) || (Scientist.rect.left + 33 <= groundtex8.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex8.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex8.getPosition().x + 264.76 || (Scientist.rect.left >= groundtex8.getPosition().x + 265.24))) {		//left
//			Scientist.rect.left = groundtex8.getPosition().x + 267.24;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex8.getPosition().y) {		//down
//				Scientist.rect.top = groundtex8.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex8.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex8.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex9.getGlobalBounds())) {
//		if (Scientist.rect.top > groundtex9.getPosition().y - 48) {//jump
//			Scientist.move_y = 0;
//			Scientist.rect.top = groundtex9.getPosition().y - 48;
//			Scientist.onground = true;
//		}
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex10.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex10.getPosition().x) || (Scientist.rect.left + 33 <= groundtex10.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex10.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex10.getPosition().x + 410.15 || (Scientist.rect.left >= groundtex10.getPosition().x + 410.65))) {		//left
//			Scientist.rect.left = groundtex10.getPosition().x + 412.65;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex10.getPosition().y) {		//down
//				Scientist.rect.top = groundtex10.getPosition().y + 91.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex10.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex10.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex11.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex11.getPosition().x) || (Scientist.rect.left + 33 <= groundtex11.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex11.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex11.getPosition().x + 541.412 || (Scientist.rect.left >= groundtex11.getPosition().x + 541.912))) {		//left
//			Scientist.rect.left = groundtex11.getPosition().x + 543.912;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex11.getPosition().y) {		//down
//				Scientist.rect.top = groundtex11.getPosition().y + 60.5;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex11.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex11.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//
//
//		}
//
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(groundtex12.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= groundtex12.getPosition().x) || (Scientist.rect.left + 33 <= groundtex12.getPosition().x)) {			//right
//			Scientist.rect.left = groundtex12.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= groundtex12.getPosition().x + 508.4 || (Scientist.rect.left >= groundtex12.getPosition().x + 508.9))) {		//left
//			Scientist.rect.left = groundtex12.getPosition().x + 510.9;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > groundtex12.getPosition().y) {		//down
//				Scientist.rect.top = groundtex12.getPosition().y + 61.5;
//				Scientist.move_y += 0.5;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > groundtex12.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = groundtex12.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//
//		}
//
//
//	}
//
//	//teleporter
//	if (Scientist.pico.getGlobalBounds().intersects(teleporter1.getGlobalBounds()) && Joystick::isButtonPressed(0, 2) && timer2 > 50) {
//
//		Scientist.rect.left = teleporter2.getPosition().x;
//		Scientist.rect.top = teleporter2.getPosition().y;
//		firsttele = true;
//		secondtele = false;
//		timer2 = 0;
//		tele1 = 0;
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(teleporter2.getGlobalBounds()) && Joystick::isButtonPressed(0, 2) && timer2 > 50) {
//
//		Scientist.rect.left = teleporter1.getPosition().x - 50;
//		Scientist.rect.top = teleporter1.getPosition().y;
//		firsttele = false;
//		secondtele = true;
//		timer2 = 0;
//		tele2 = 0;
//	}
//	//squares
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_1.getPosition().x) || (Scientist.rect.left + 33 <= squares_1.getPosition().x)) { //right
//			Scientist.rect.left = squares_1.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_1.getPosition().x + 50) || (Scientist.rect.left >= squares_1.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_1.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_1.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_1.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_2.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_2.getPosition().x) || (Scientist.rect.left + 33 <= squares_2.getPosition().x)) { //right
//			Scientist.rect.left = squares_2.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_2.getPosition().x + 50) || (Scientist.rect.left >= squares_2.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_2.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_2.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_2.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_3.getPosition().x) || (Scientist.rect.left + 33 <= squares_3.getPosition().x)) { //right
//			Scientist.rect.left = squares_3.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_3.getPosition().x + 50) || (Scientist.rect.left >= squares_3.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_3.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_3.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_3.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_4.getPosition().x) || (Scientist.rect.left + 33 <= squares_4.getPosition().x)) { //right
//			Scientist.rect.left = squares_4.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_4.getPosition().x + 50) || (Scientist.rect.left >= squares_4.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_4.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_4.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_4.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_5.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_5.getPosition().x) || (Scientist.rect.left + 33 <= squares_5.getPosition().x)) { //right
//			Scientist.rect.left = squares_5.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_5.getPosition().x + 50) || (Scientist.rect.left >= squares_5.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_5.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_5.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_5.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_6.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_6.getPosition().x) || (Scientist.rect.left + 33 <= squares_6.getPosition().x)) { //right
//			Scientist.rect.left = squares_6.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_6.getPosition().x + 50) || (Scientist.rect.left >= squares_6.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_6.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_6.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_6.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_7.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_7.getPosition().x) || (Scientist.rect.left + 33 <= squares_7.getPosition().x)) { //right
//			Scientist.rect.left = squares_7.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_7.getPosition().x + 50) || (Scientist.rect.left >= squares_7.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_7.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_7.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_7.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//	//lasers
//	if (laser1.getGlobalBounds().intersects(Scientist.pico.getGlobalBounds())) {
//
//		dead[1] = true;
//		burn = true;
//
//	}
//
//	for (int i = 0; i < 5; i++) {
//		if (laser2[i].getGlobalBounds().intersects(Scientist.pico.getGlobalBounds())) {
//
//			dead[1] = true;
//			burn = true;
//		}
//	}
//	if (laser3.getGlobalBounds().intersects(Scientist.pico.getGlobalBounds())) {
//
//		dead[1] = true;
//		burn = true;
//
//	}
//	if (laser4.getGlobalBounds().intersects(Scientist.pico.getGlobalBounds())) {
//
//		dead[1] = true;
//		burn = true;
//
//	}
//
//	//walls
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_1.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_1.getPosition().x) || (Scientist.rect.left + 33 <= wall_1.getPosition().x)) {			//right
//			Scientist.rect.left = wall_1.getPosition().x - 36;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//		}
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_2.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_2.getPosition().x) || (Scientist.rect.left + 33 <= wall_2.getPosition().x)) {			//right
//			Scientist.rect.left = wall_2.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= wall_2.getPosition().x + 60) || (Scientist.rect.left >= wall_2.getPosition().x + 60.5)) {		//left
//			Scientist.rect.left = wall_2.getPosition().x + 63.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//		}
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_3.getPosition().x) || (Scientist.rect.left + 33 <= wall_3.getPosition().x)) {			//right
//			Scientist.rect.left = wall_3.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= wall_3.getPosition().x + 60) || (Scientist.rect.left >= wall_3.getPosition().x + 60.5)) {		//left
//			Scientist.rect.left = wall_3.getPosition().x + 63.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > wall_3.getPosition().y) {		//down
//				Scientist.rect.top = wall_3.getPosition().y + 451.4;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > wall_3.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = wall_3.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//			if (helmeton == 1) {
//				if (Scientist.rect.top > wall_3.getPosition().y + 50) {//down
//					Scientist.rect.top = wall_3.getPosition().y + 497.9;
//					Scientist.move_y = 0;
//					Scientist.onground = true;
//				}
//
//			}
//
//		}
//
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_4.getPosition().x) || (Scientist.rect.left + 33 <= wall_4.getPosition().x)) {			//right
//			Scientist.rect.left = wall_4.getPosition().x - 36;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > wall_4.getPosition().y) {		//down
//				Scientist.rect.top = wall_4.getPosition().y + 451.4;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > wall_4.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = wall_4.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//
//
//		}
//
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_5.getGlobalBounds())) {
//		if ((Scientist.rect.left >= wall_5.getPosition().x + 29.25) || (Scientist.rect.left >= wall_5.getPosition().x + 29.75)) {		//left
//			Scientist.rect.left = wall_5.getPosition().x + 31.75;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > wall_5.getPosition().y) {		//down
//				Scientist.rect.top = wall_5.getPosition().y + 451.4;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > wall_5.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = wall_5.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//
//
//		}
//
//
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_6.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_6.getPosition().x) || (Scientist.rect.left + 33 <= wall_6.getPosition().x)) {			//right
//			Scientist.rect.left = wall_6.getPosition().x - 36;
//
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > wall_5.getPosition().y) {		//down
//				Scientist.rect.top = wall_5.getPosition().y + 451.4;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > wall_5.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = wall_5.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//
//
//		}
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(wall_7.getGlobalBounds())) {
//		if ((Scientist.rect.left >= wall_7.getPosition().x + 29.25) || (Scientist.rect.left >= wall_7.getPosition().x + 29.75)) {		//left
//			Scientist.rect.left = wall_7.getPosition().x + 31.75;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > wall_7.getPosition().y) {		//down
//				Scientist.rect.top = wall_7.getPosition().y + 451.4;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > wall_7.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = wall_7.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//
//
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_8.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_8.getPosition().x) || (Scientist.rect.left + 33 <= wall_8.getPosition().x)) {			//right
//			Scientist.rect.left = wall_8.getPosition().x - 36;
//
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > wall_8.getPosition().y) {		//down
//				Scientist.rect.top = wall_8.getPosition().y + 451.4;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > wall_8.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = wall_8.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//
//
//		}
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(wall_9.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_9.getPosition().x) || (Scientist.rect.left + 33 <= wall_9.getPosition().x)) {			//right
//			Scientist.rect.left = wall_9.getPosition().x - 36;
//
//		}
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_10.getGlobalBounds())) {
//		if ((Scientist.rect.left >= wall_10.getPosition().x + 29.25) || (Scientist.rect.left >= wall_10.getPosition().x + 29.75)) {		//left
//			Scientist.rect.left = wall_10.getPosition().x + 31.75;
//		}
//
//	}
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_11.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_11.getPosition().x) || (Scientist.rect.left + 33 <= wall_11.getPosition().x)) {			//right
//			Scientist.rect.left = wall_11.getPosition().x - 36;
//
//		}
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_12.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_12.getPosition().x) || (Scientist.rect.left + 33 <= wall_12.getPosition().x)) {			//right
//			Scientist.rect.left = wall_12.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= wall_12.getPosition().x + 60) || (Scientist.rect.left >= wall_12.getPosition().x + 60.5)) {		//left
//			Scientist.rect.left = wall_12.getPosition().x + 63.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//			if (Scientist.rect.top > wall_12.getPosition().y) {		//down
//				Scientist.rect.top = wall_12.getPosition().y + 227.7;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > wall_12.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = wall_12.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_13.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_13.getPosition().x) || (Scientist.rect.left + 33 <= wall_13.getPosition().x)) {			//right
//			Scientist.rect.left = wall_13.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= wall_13.getPosition().x + 60) || (Scientist.rect.left >= wall_13.getPosition().x + 60.5)) {		//left
//			Scientist.rect.left = wall_13.getPosition().x + 63.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//			if (Scientist.rect.top > wall_13.getPosition().y) {		//down
//				Scientist.rect.top = wall_13.getPosition().y + 233.12;
//				Scientist.move_y += 0.007;
//				Scientist.onground = false;
//
//			}
//
//			else if (Scientist.rect.top > wall_13.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = wall_13.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//
//		}
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_14.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_14.getPosition().x) || (Scientist.rect.left + 33 <= wall_14.getPosition().x)) {			//right
//			Scientist.rect.left = wall_14.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= wall_14.getPosition().x + 61) || (Scientist.rect.left >= wall_14.getPosition().x + 61.5)) {		//left
//			Scientist.rect.left = wall_14.getPosition().x + 63.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//		}
//
//	}
//
//	//buttons
//	if (Scientist.pico.getGlobalBounds().intersects(button3.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button3.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressedforwall = true;
//			button3.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp3.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp3.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp3.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressedforwall = true;
//			button3.setScale(0, 0);
//		}
//
//
//	}
//
//
//}
//
//
//
//
//void Scientist_collision10(Player& Scientist, Sprite ground, Sprite ground3, Sprite ground4, Sprite ground5, Sprite ground6, Sprite ground7, Sprite ground8, Sprite ground9, Sprite ground10, Sprite ground11, Sprite ground12, RectangleShape laser1, RectangleShape laser2, RectangleShape laser3, RectangleShape laser4, RectangleShape laser5, RectangleShape box1, RectangleShape box2, RectangleShape box3, RectangleShape box4, RectangleShape box5, RectangleShape box6, RectangleShape box7, RectangleShape box8, RectangleShape box9, RectangleShape box10, RectangleShape box11, RectangleShape box12, Sprite death_floor1, Sprite death_floor2, Sprite wall_1, Sprite wall_2, Sprite wall_3, Sprite wall_4, Sprite wall_5, Sprite wall_6, Sprite squares_1, Sprite squares_2, Sprite squares_3, Sprite squares_4, Sprite squares_5, Sprite squares_6, Sprite squares_7, Sprite squares_8, Sprite squares_9, Sprite squares_10, Sprite squares_12, Sprite squares_13, Sprite squares_14, Sprite squares_15, Sprite squares_16, Sprite squares_17, Sprite squares_18, Sprite squares_19, Sprite squares_20, Sprite squares_21, Sprite squares_22, Sprite squares_23, Sprite squares_24, Sprite squares_25, Sprite squares_26, Sprite squares_27, Sprite squares_28, Sprite squares_29, Sprite squares_30, Sprite squares_31, Sprite squares_32, Sprite squares_33, Sprite squares_34, Sprite squares_35, Sprite& button, Sprite& buttonp, Sprite splash1, Sprite splash2, Sprite splash3, Sprite splash4, Sprite splash5, Sprite splash6, Sprite splash7, Sprite splash8, Sprite splash9, Sprite splash10, Sprite splash11, Sprite splash12, Sprite splash13, Sprite splash14, Sprite splash15, Sprite splash16, Sprite splash17, Sprite splash18, Sprite splash19, Sprite splash20, Sprite splash21, Sprite splash22, Sprite splash23) {
//
//	if (Scientist.pico.getGlobalBounds().intersects(death_floor1.getGlobalBounds())) {
//		dead[1] = true;
//		Sfell = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(death_floor2.getGlobalBounds())) {
//		dead[1] = true;
//		Sfell = true;
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(ground.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= ground.getPosition().x) || (Scientist.rect.left + 33 <= ground.getPosition().x)) {			//right
//			Scientist.rect.left = ground.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= ground.getPosition().x + 996) || (Scientist.rect.left >= ground.getPosition().x + 998)) {		//left
//			Scientist.rect.left = ground.getPosition().x + 1000;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > ground.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = ground.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(laser1.getGlobalBounds()) && laser_on == true) {
//		dead[1] = true;
//		Sburn = true;
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(laser2.getGlobalBounds()) && laser_on == true) {
//		dead[1] = true;
//		Sburn = true;
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(laser3.getGlobalBounds()) && laser_on == true) {
//		dead[1] = true;
//		Sburn = true;
//	}
//
//
//	if (Scientist.pico.getPosition().x + (Scientist.pico.getPosition().y - 851.443) / 1.732050808 < laser4.getPosition().x - 520 - 5 && diagonal_laser_on1) {
//		dead[1] = true;
//		Sburn = true;
//	}
//
//	if (Scientist.pico.getPosition().x + Scientist.pico.getGlobalBounds().width - (Scientist.pico.getPosition().y - 851.443) / 1.732050808 > laser5.getPosition().x + 520 - 10 && diagonal_laser_on2) {
//		dead[1] = true;
//		Sburn = true;
//	}
//
//
//
//
//
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(box1.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= box1.getPosition().x) || (Scientist.rect.left + 33 <= box1.getPosition().x)) {			//right
//			Scientist.rect.left = box1.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= box1.getPosition().x + 96) || (Scientist.rect.left >= box1.getPosition().x + 98)) {		//left
//			Scientist.rect.left = box1.getPosition().x + 100;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > box1.getPosition().y) {		//down
//				dead[1] = true;
//				Sstomped = true;
//			}
//
//			else if (Scientist.rect.top > box1.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = box1.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(box2.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= box2.getPosition().x) || (Scientist.rect.left + 33 <= box2.getPosition().x)) {			//right
//			Scientist.rect.left = box2.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= box2.getPosition().x + 96) || (Scientist.rect.left >= box2.getPosition().x + 98)) {		//left
//			Scientist.rect.left = box2.getPosition().x + 100;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > box2.getPosition().y) {		//down
//				dead[1] = true;
//				Sstomped = true;
//			}
//
//			else if (Scientist.rect.top > box2.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = box2.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(box3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= box3.getPosition().x) || (Scientist.rect.left + 33 <= box3.getPosition().x)) {			//right
//			Scientist.rect.left = box3.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= box3.getPosition().x + 96) || (Scientist.rect.left >= box3.getPosition().x + 98)) {		//left
//			Scientist.rect.left = box3.getPosition().x + 100;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > box3.getPosition().y) {		//down
//				dead[1] = true;
//				Sstomped = true;
//			}
//
//			else if (Scientist.rect.top > box3.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = box3.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(box4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= box4.getPosition().x) || (Scientist.rect.left + 33 <= box4.getPosition().x)) {			//right
//			Scientist.rect.left = box4.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= box4.getPosition().x + 96) || (Scientist.rect.left >= box4.getPosition().x + 98)) {		//left
//			Scientist.rect.left = box4.getPosition().x + 100;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > box4.getPosition().y) {		//down
//				dead[1] = true;
//				Sstomped = true;
//			}
//
//			else if (Scientist.rect.top > box4.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = box4.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(box5.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= box5.getPosition().x) || (Scientist.rect.left + 33 <= box5.getPosition().x)) {			//right
//			Scientist.rect.left = box5.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= box5.getPosition().x + 96) || (Scientist.rect.left >= box5.getPosition().x + 98)) {		//left
//			Scientist.rect.left = box5.getPosition().x + 100;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > box5.getPosition().y) {		//down
//				dead[1] = true;
//				Sstomped = true;
//			}
//
//			else if (Scientist.rect.top > box5.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = box5.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(box6.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= box6.getPosition().x) || (Scientist.rect.left + 33 <= box6.getPosition().x)) {			//right
//			Scientist.rect.left = box6.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= box6.getPosition().x + 96) || (Scientist.rect.left >= box6.getPosition().x + 98)) {		//left
//			Scientist.rect.left = box6.getPosition().x + 100;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > box6.getPosition().y) {		//down
//				dead[1] = true;
//				Sstomped = true;
//			}
//
//			else if (Scientist.rect.top > box6.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = box6.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(box7.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= box7.getPosition().x) || (Scientist.rect.left + 33 <= box7.getPosition().x)) {			//right
//			Scientist.rect.left = box7.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= box7.getPosition().x + 96) || (Scientist.rect.left >= box7.getPosition().x + 98)) {		//left
//			Scientist.rect.left = box7.getPosition().x + 100;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > box7.getPosition().y) {		//down
//				dead[1] = true;
//				Sstomped = true;
//			}
//
//			else if (Scientist.rect.top > box7.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = box7.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(box8.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= box8.getPosition().x) || (Scientist.rect.left + 33 <= box8.getPosition().x)) {			//right
//			Scientist.rect.left = box8.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= box8.getPosition().x + 96) || (Scientist.rect.left >= box8.getPosition().x + 98)) {		//left
//			Scientist.rect.left = box8.getPosition().x + 100;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > box8.getPosition().y) {		//down
//				dead[1] = true;
//				Sstomped = true;
//			}
//
//			else if (Scientist.rect.top > box8.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = box8.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(box9.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= box9.getPosition().x) || (Scientist.rect.left + 33 <= box9.getPosition().x)) {			//right
//			Scientist.rect.left = box9.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= box9.getPosition().x + 96) || (Scientist.rect.left >= box9.getPosition().x + 98)) {		//left
//			Scientist.rect.left = box9.getPosition().x + 100;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > box9.getPosition().y) {		//down
//				dead[1] = true;
//				Sstomped = true;
//			}
//
//			else if (Scientist.rect.top > box9.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = box9.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(box10.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= box10.getPosition().x) || (Scientist.rect.left + 33 <= box10.getPosition().x)) {			//right
//			Scientist.rect.left = box10.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= box10.getPosition().x + 96) || (Scientist.rect.left >= box10.getPosition().x + 98)) {		//left
//			Scientist.rect.left = box10.getPosition().x + 100;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > box10.getPosition().y) {		//down
//				dead[1] = true;
//				Sstomped = true;
//			}
//
//			else if (Scientist.rect.top > box10.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = box10.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(box11.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= box11.getPosition().x) || (Scientist.rect.left + 33 <= box11.getPosition().x)) {			//right
//			Scientist.rect.left = box11.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= box11.getPosition().x + 96) || (Scientist.rect.left >= box11.getPosition().x + 98)) {		//left
//			Scientist.rect.left = box11.getPosition().x + 100;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > box11.getPosition().y) {		//down
//				dead[1] = true;
//				Sstomped = true;
//			}
//
//			else if (Scientist.rect.top > box11.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = box11.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(box12.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= box12.getPosition().x) || (Scientist.rect.left + 33 <= box12.getPosition().x)) {			//right
//			Scientist.rect.left = box12.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= box12.getPosition().x + 96) || (Scientist.rect.left >= box12.getPosition().x + 98)) {		//left
//			Scientist.rect.left = box12.getPosition().x + 100;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > box12.getPosition().y) {		//down
//				dead[1] = true;
//				Sstomped = true;
//			}
//
//			else if (Scientist.rect.top > box12.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = box12.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//	/////////////////////wave 4 collision ////////////
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(button.getGlobalBounds())) {
//
//		if (Scientist.rect.top < button.getPosition().y) {			//jump
//			Scientist.onground = true;
//			button_ispressedforground = true;
//			button.setScale(0, 0);
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(buttonp.getGlobalBounds())) {
//
//		if (Scientist.rect.top < buttonp.getPosition().y - 20) {			//jump
//			Scientist.rect.top = buttonp.getPosition().y - 48.5;
//			Scientist.onground = true;
//			button_ispressedforground = true;
//			button.setScale(0, 0);
//		}
//
//
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(ground3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= ground3.getPosition().x) || (Scientist.rect.left + 33 <= ground3.getPosition().x)) {			//right
//			Scientist.rect.left = ground3.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= ground3.getPosition().x + 584.5) || (Scientist.rect.left >= ground3.getPosition().x + 585.5)) {		//left
//			Scientist.rect.left = ground3.getPosition().x + 589.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > ground3.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = ground3.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(ground4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= ground4.getPosition().x) || (Scientist.rect.left + 33 <= ground4.getPosition().x)) {			//right
//			Scientist.rect.left = ground4.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= ground4.getPosition().x + 584.5) || (Scientist.rect.left >= ground4.getPosition().x + 585.5)) {		//left
//			Scientist.rect.left = ground4.getPosition().x + 589.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > ground4.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = ground4.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(ground5.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= ground5.getPosition().x) || (Scientist.rect.left + 33 <= ground5.getPosition().x)) {			//right
//			Scientist.rect.left = ground5.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= ground5.getPosition().x + 664.1) || (Scientist.rect.left >= ground5.getPosition().x + 665.1)) {		//left
//			Scientist.rect.left = ground5.getPosition().x + 668.1;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > ground5.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = ground5.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(ground6.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= ground6.getPosition().x) || (Scientist.rect.left + 33 <= ground6.getPosition().x)) {			//right
//			Scientist.rect.left = ground6.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= ground6.getPosition().x + 465.6) || (Scientist.rect.left >= ground6.getPosition().x + 466.6)) {		//left
//			Scientist.rect.left = ground6.getPosition().x + 471.6;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > ground6.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = ground6.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(ground7.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= ground7.getPosition().x) || (Scientist.rect.left + 33 <= ground7.getPosition().x)) {			//right
//			Scientist.rect.left = ground7.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= ground7.getPosition().x + 664.1) || (Scientist.rect.left >= ground7.getPosition().x + 665.1)) {		//left
//			Scientist.rect.left = ground7.getPosition().x + 668.1;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > ground7.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = ground7.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(ground8.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= ground8.getPosition().x) || (Scientist.rect.left + 33 <= ground8.getPosition().x)) {			//right
//			Scientist.rect.left = ground8.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= ground8.getPosition().x + 1372.5) || (Scientist.rect.left >= ground8.getPosition().x + 1373.5)) {		//left
//			Scientist.rect.left = ground8.getPosition().x + 1375.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > ground8.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = ground8.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(ground9.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= ground9.getPosition().x) || (Scientist.rect.left + 33 <= ground9.getPosition().x)) {			//right
//			Scientist.rect.left = ground9.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= ground9.getPosition().x + 1372.5) || (Scientist.rect.left >= ground9.getPosition().x + 1373.5)) {		//left
//			Scientist.rect.left = ground9.getPosition().x + 1375.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > ground9.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = ground9.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(ground10.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= ground10.getPosition().x) || (Scientist.rect.left + 33 <= ground10.getPosition().x)) {			//right
//			Scientist.rect.left = ground10.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= ground10.getPosition().x + 584.5) || (Scientist.rect.left >= ground10.getPosition().x + 585.5)) {		//left
//			Scientist.rect.left = ground10.getPosition().x + 589.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > ground10.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = ground10.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(ground11.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= ground11.getPosition().x) || (Scientist.rect.left + 33 <= ground11.getPosition().x)) {			//right
//			Scientist.rect.left = ground11.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= ground11.getPosition().x + 465.6) || (Scientist.rect.left >= ground11.getPosition().x + 466.6)) {		//left
//			Scientist.rect.left = ground11.getPosition().x + 471.6;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > ground11.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = ground11.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(ground12.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= ground12.getPosition().x) || (Scientist.rect.left + 33 <= ground12.getPosition().x)) {			//right
//			Scientist.rect.left = ground12.getPosition().x - 36;
//		}
//		else if ((Scientist.rect.left >= ground12.getPosition().x + 979.5) || (Scientist.rect.left >= ground12.getPosition().x + 980.5)) {		//left
//			Scientist.rect.left = ground12.getPosition().x + 982.5;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > ground12.getPosition().y) {		//jump
//				Scientist.move_y = 0;
//				Scientist.rect.top = ground12.getPosition().y - 30;
//				Scientist.onground = true;
//			}
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(wall_6.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= wall_6.getPosition().x) || (Scientist.rect.left + 33 <= wall_6.getPosition().x)) { //right
//			Scientist.rect.left = wall_6.getPosition().x - 36;
//		}
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_1.getPosition().x) || (Scientist.rect.left + 33 <= squares_1.getPosition().x)) { //right
//			Scientist.rect.left = squares_1.getPosition().x - 37;
//			Scientist.rect.left = squares_1.getPosition().x - 37;
//		}
//
//		else if ((Scientist.rect.left >= squares_1.getPosition().x + 50) || (Scientist.rect.left >= squares_1.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_1.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_1.getPosition().y + 55) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.5;
//
//			}
//
//			else if (Scientist.rect.top < squares_1.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_3.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_3.getPosition().x) || (Scientist.rect.left + 33 <= squares_3.getPosition().x)) { //right
//			Scientist.rect.left = squares_3.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_3.getPosition().x + 50) || (Scientist.rect.left >= squares_3.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_3.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_3.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_3.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_4.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_4.getPosition().x) || (Scientist.rect.left + 33 <= squares_4.getPosition().x)) { //right
//			Scientist.rect.left = squares_4.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_4.getPosition().x + 50) || (Scientist.rect.left >= squares_4.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_4.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_4.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_4.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_5.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_5.getPosition().x) || (Scientist.rect.left + 33 <= squares_5.getPosition().x)) { //right
//			Scientist.rect.left = squares_5.getPosition().x - 37;
//			Scientist.rect.left = squares_5.getPosition().x - 37;
//		}
//
//		else if ((Scientist.rect.left >= squares_5.getPosition().x + 50) || (Scientist.rect.left >= squares_5.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_5.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_5.getPosition().y + 55) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.5;
//
//			}
//
//			else if (Scientist.rect.top < squares_5.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_6.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_6.getPosition().x) || (Scientist.rect.left + 33 <= squares_6.getPosition().x)) { //right
//			Scientist.rect.left = squares_6.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_6.getPosition().x + 85) || (Scientist.rect.left >= squares_6.getPosition().x + 85.5)) {//left
//			Scientist.rect.left = squares_6.getPosition().x + 95;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_6.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_6.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_8.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_8.getPosition().x) || (Scientist.rect.left + 33 <= squares_8.getPosition().x)) { //right
//			Scientist.rect.left = squares_8.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_8.getPosition().x + 50) || (Scientist.rect.left >= squares_8.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_8.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_8.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_8.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_10.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_10.getPosition().x) || (Scientist.rect.left + 33 <= squares_10.getPosition().x)) { //right
//			Scientist.rect.left = squares_10.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_10.getPosition().x + 50) || (Scientist.rect.left >= squares_10.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_10.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_10.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_10.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_13.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_13.getPosition().x) || (Scientist.rect.left + 33 <= squares_13.getPosition().x)) { //right
//			Scientist.rect.left = squares_13.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_13.getPosition().x + 50) || (Scientist.rect.left >= squares_13.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_13.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_13.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_13.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_14.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_14.getPosition().x) || (Scientist.rect.left + 33 <= squares_14.getPosition().x)) { //right
//			Scientist.rect.left = squares_14.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_14.getPosition().x + 50) || (Scientist.rect.left >= squares_14.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_14.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_14.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_14.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_15.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_15.getPosition().x) || (Scientist.rect.left + 33 <= squares_15.getPosition().x)) { //right
//			Scientist.rect.left = squares_15.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_15.getPosition().x + 50) || (Scientist.rect.left >= squares_15.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_15.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_15.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_15.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_16.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_16.getPosition().x) || (Scientist.rect.left + 33 <= squares_16.getPosition().x)) { //right
//			Scientist.rect.left = squares_16.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_16.getPosition().x + 50) || (Scientist.rect.left >= squares_16.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_16.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_16.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_16.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_17.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_17.getPosition().x) || (Scientist.rect.left + 33 <= squares_17.getPosition().x)) { //right
//			Scientist.rect.left = squares_17.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_17.getPosition().x + 50) || (Scientist.rect.left >= squares_17.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_17.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_17.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_17.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//			}
//
//		}
//
//	}
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_19.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_19.getPosition().x) || (Scientist.rect.left + 33 <= squares_19.getPosition().x)) { //right
//			Scientist.rect.left = squares_19.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_19.getPosition().x + 50) || (Scientist.rect.left >= squares_19.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_19.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_19.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_19.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_20.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_20.getPosition().x) || (Scientist.rect.left + 33 <= squares_20.getPosition().x)) { //right
//			Scientist.rect.left = squares_20.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_20.getPosition().x + 50) || (Scientist.rect.left >= squares_20.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_20.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_20.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_20.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_21.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_21.getPosition().x) || (Scientist.rect.left + 33 <= squares_21.getPosition().x)) { //right
//			Scientist.rect.left = squares_21.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_21.getPosition().x + 50) || (Scientist.rect.left >= squares_21.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_21.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_21.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_21.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_22.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_22.getPosition().x) || (Scientist.rect.left + 33 <= squares_22.getPosition().x)) { //right
//			Scientist.rect.left = squares_22.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_22.getPosition().x + 50) || (Scientist.rect.left >= squares_22.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_22.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_22.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_22.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_23.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_23.getPosition().x) || (Scientist.rect.left + 33 <= squares_23.getPosition().x)) { //right
//			Scientist.rect.left = squares_23.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_23.getPosition().x + 50) || (Scientist.rect.left >= squares_23.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_23.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_23.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_23.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_24.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_24.getPosition().x) || (Scientist.rect.left + 33 <= squares_24.getPosition().x)) { //right
//			Scientist.rect.left = squares_24.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_24.getPosition().x + 50) || (Scientist.rect.left >= squares_24.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_24.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_24.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_24.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_25.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_25.getPosition().x) || (Scientist.rect.left + 33 <= squares_25.getPosition().x)) { //right
//			Scientist.rect.left = squares_25.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_25.getPosition().x + 50) || (Scientist.rect.left >= squares_25.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_25.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_25.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_25.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_26.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_26.getPosition().x) || (Scientist.rect.left + 33 <= squares_26.getPosition().x)) { //right
//			Scientist.rect.left = squares_26.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_26.getPosition().x + 50) || (Scientist.rect.left >= squares_26.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_26.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_26.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_26.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_28.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_28.getPosition().x) || (Scientist.rect.left + 33 <= squares_28.getPosition().x)) { //right
//			Scientist.rect.left = squares_28.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_28.getPosition().x + 50) || (Scientist.rect.left >= squares_28.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_28.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_28.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_28.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_30.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_30.getPosition().x) || (Scientist.rect.left + 33 <= squares_30.getPosition().x)) { //right
//			Scientist.rect.left = squares_30.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_30.getPosition().x + 50) || (Scientist.rect.left >= squares_30.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_30.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_30.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_30.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_33.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_33.getPosition().x) || (Scientist.rect.left + 33 <= squares_33.getPosition().x)) { //right
//			Scientist.rect.left = squares_33.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_33.getPosition().x + 50) || (Scientist.rect.left >= squares_33.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_33.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_33.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_33.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//
//	if (Scientist.pico.getGlobalBounds().intersects(squares_35.getGlobalBounds())) {
//		if ((Scientist.rect.left + 32 <= squares_35.getPosition().x) || (Scientist.rect.left + 33 <= squares_35.getPosition().x)) { //right
//			Scientist.rect.left = squares_35.getPosition().x - 36;
//		}
//
//		else if ((Scientist.rect.left >= squares_35.getPosition().x + 50) || (Scientist.rect.left >= squares_35.getPosition().x + 50.5)) {//left
//			Scientist.rect.left = squares_35.getPosition().x + 55;
//		}
//		else {
//			Scientist.move_y = 0;
//			Scientist.onground = true;
//
//
//			if (Scientist.rect.top > squares_35.getPosition().y + 50) { //down
//				Scientist.onground = false;
//				Scientist.move_y += 0.007;
//
//			}
//
//			else if (Scientist.rect.top < squares_35.getPosition().y) {//jump
//
//				Scientist.onground = true;
//
//
//
//			}
//
//		}
//
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash1.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash2.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash3.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash4.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash5.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash6.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash7.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash8.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash9.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash10.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash11.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash12.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash13.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash14.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash15.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash16.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash17.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash18.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash19.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash20.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash21.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash22.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//	if (Scientist.pico.getGlobalBounds().intersects(splash23.getGlobalBounds())) {
//		dead[1] = 1;
//		Spoisoned = true;
//		Sstomped = true;
//	}
//
//
//
//}
//#endif // !
//
//
