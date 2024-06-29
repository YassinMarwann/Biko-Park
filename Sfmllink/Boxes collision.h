#pragma once
#include "Initialization.h"


void boxes_collision(RectangleShape& box1, RectangleShape& box2, RectangleShape& box3, RectangleShape& box4, RectangleShape& box5, RectangleShape& box6, RectangleShape& box7, RectangleShape& box8, RectangleShape& box9, RectangleShape& box10, RectangleShape& box11, RectangleShape& box12, bool& fall2, bool& fall3, bool& fall4, bool& fall5, bool& fall6, bool& fall7, bool& fall8, bool& fall9, bool& fall10, bool& fall11, bool& fall12)
{



	if (box1.getGlobalBounds().intersects(box2.getGlobalBounds())) {
		if ((box1.getPosition().x + 96 <= box2.getPosition().x) || (box1.getPosition().x + 99 <= box2.getPosition().x)) {			//right
			box1.setPosition(box2.getPosition().x - 100, box1.getPosition().y);
			box2.move(0.5, 0);
		}
		else if ((box1.getPosition().x >= box2.getPosition().x + 96) || (box1.getPosition().x >= box2.getPosition().x + 98)) {		//left
			box1.setPosition(box2.getPosition().x + 100, box1.getPosition().y);
			box2.move(-0.5, 0);
		}
		else if (box1.getPosition().y > box2.getPosition().y) {		//jump
			fall2 = false;
		}
	}

	if (box1.getGlobalBounds().intersects(box3.getGlobalBounds())) {
		if ((box1.getPosition().x + 96 <= box3.getPosition().x) || (box1.getPosition().x + 99 <= box3.getPosition().x)) {			//right
			box1.setPosition(box3.getPosition().x - 100, box1.getPosition().y);
			box3.move(0.5, 0);
		}
		else if ((box1.getPosition().x >= box3.getPosition().x + 96) || (box1.getPosition().x >= box3.getPosition().x + 98)) {		//left
			box1.setPosition(box3.getPosition().x + 100, box1.getPosition().y);
			box3.move(-0.5, 0);
		}
		else if (box1.getPosition().y > box3.getPosition().y) {		//jump
			fall3 = false;
		}
	}

	if (box1.getGlobalBounds().intersects(box4.getGlobalBounds())) {
		if ((box1.getPosition().x + 96 <= box4.getPosition().x) || (box1.getPosition().x + 99 <= box4.getPosition().x)) {			//right
			box1.setPosition(box4.getPosition().x - 100, box1.getPosition().y);
			box4.move(0.5, 0);
		}
		else if ((box1.getPosition().x >= box4.getPosition().x + 96) || (box1.getPosition().x >= box4.getPosition().x + 98)) {		//left
			box1.setPosition(box4.getPosition().x + 100, box1.getPosition().y);
			box4.move(-0.5, 0);
		}
		else if (box1.getPosition().y > box4.getPosition().y) {		//jump
			fall4 = false;
		}
	}

	if (box1.getGlobalBounds().intersects(box5.getGlobalBounds())) {
		if ((box1.getPosition().x + 96 <= box5.getPosition().x) || (box1.getPosition().x + 99 <= box5.getPosition().x)) {			//right
			box1.setPosition(box5.getPosition().x - 100, box1.getPosition().y);
			box5.move(0.5, 0);
		}
		else if ((box1.getPosition().x >= box5.getPosition().x + 96) || (box1.getPosition().x >= box5.getPosition().x + 98)) {		//left
			box1.setPosition(box5.getPosition().x + 100, box1.getPosition().y);
			box5.move(-0.5, 0);
		}
		else if (box1.getPosition().y > box5.getPosition().y) {		//jump
			fall5 = false;
		}
	}

	if (box1.getGlobalBounds().intersects(box6.getGlobalBounds())) {
		if ((box1.getPosition().x + 96 <= box6.getPosition().x) || (box1.getPosition().x + 99 <= box6.getPosition().x)) {			//right
			box1.setPosition(box6.getPosition().x - 100, box1.getPosition().y);
			box6.move(0.5, 0);
		}
		else if ((box1.getPosition().x >= box6.getPosition().x + 96) || (box1.getPosition().x >= box6.getPosition().x + 98)) {		//left
			box1.setPosition(box6.getPosition().x + 100, box1.getPosition().y);
			box6.move(-0.5, 0);
		}
		else if (box1.getPosition().y > box6.getPosition().y) {		//jump
			fall6 = false;
		}
	}

	if (box1.getGlobalBounds().intersects(box7.getGlobalBounds())) {
		if ((box1.getPosition().x + 96 <= box7.getPosition().x) || (box1.getPosition().x + 99 <= box7.getPosition().x)) {			//right
			box1.setPosition(box7.getPosition().x - 100, box1.getPosition().y);
			box7.move(0.5, 0);
		}
		else if ((box1.getPosition().x >= box7.getPosition().x + 96) || (box1.getPosition().x >= box7.getPosition().x + 98)) {		//left
			box1.setPosition(box7.getPosition().x + 100, box1.getPosition().y);
			box7.move(-0.5, 0);
		}
		else if (box1.getPosition().y > box7.getPosition().y) {		//jump
			fall7 = false;
		}
	}

	if (box1.getGlobalBounds().intersects(box8.getGlobalBounds())) {
		if ((box1.getPosition().x + 96 <= box8.getPosition().x) || (box1.getPosition().x + 99 <= box8.getPosition().x)) {			//right
			box1.setPosition(box8.getPosition().x - 100, box1.getPosition().y);
			box8.move(0.5, 0);
		}
		else if ((box1.getPosition().x >= box8.getPosition().x + 96) || (box1.getPosition().x >= box8.getPosition().x + 98)) {		//left
			box1.setPosition(box8.getPosition().x + 100, box1.getPosition().y);
			box8.move(-0.5, 0);
		}
		else if (box1.getPosition().y > box8.getPosition().y) {		//jump
			fall8 = false;
		}
	}

	if (box1.getGlobalBounds().intersects(box9.getGlobalBounds())) {
		if ((box1.getPosition().x + 96 <= box9.getPosition().x) || (box1.getPosition().x + 99 <= box9.getPosition().x)) {			//right
			box1.setPosition(box9.getPosition().x - 100, box1.getPosition().y);
			box9.move(0.5, 0);
		}
		else if ((box1.getPosition().x >= box9.getPosition().x + 96) || (box1.getPosition().x >= box9.getPosition().x + 98)) {		//left
			box1.setPosition(box9.getPosition().x + 100, box1.getPosition().y);
			box9.move(-0.5, 0);
		}
		else if (box1.getPosition().y > box9.getPosition().y) {		//jump
			fall9 = false;
		}
	}

	if (box1.getGlobalBounds().intersects(box10.getGlobalBounds())) {
		if ((box1.getPosition().x + 96 <= box10.getPosition().x) || (box1.getPosition().x + 99 <= box10.getPosition().x)) {			//right
			box1.setPosition(box10.getPosition().x - 100, box1.getPosition().y);
			box10.move(0.5, 0);
		}
		else if ((box1.getPosition().x >= box10.getPosition().x + 96) || (box1.getPosition().x >= box10.getPosition().x + 98)) {		//left
			box1.setPosition(box10.getPosition().x + 100, box1.getPosition().y);
			box10.move(-0.5, 0);
		}
		else if (box1.getPosition().y > box10.getPosition().y) {		//jump
			fall10 = false;
		}
	}

	if (box1.getGlobalBounds().intersects(box11.getGlobalBounds())) {
		if ((box1.getPosition().x + 96 <= box11.getPosition().x) || (box1.getPosition().x + 99 <= box11.getPosition().x)) {			//right
			box1.setPosition(box11.getPosition().x - 100, box1.getPosition().y);
			box11.move(0.5, 0);
		}
		else if ((box1.getPosition().x >= box11.getPosition().x + 96) || (box1.getPosition().x >= box11.getPosition().x + 98)) {		//left
			box1.setPosition(box11.getPosition().x + 100, box1.getPosition().y);
			box11.move(-0.5, 0);
		}
		else if (box1.getPosition().y > box11.getPosition().y) {		//jump
			fall11 = false;
		}
	}

	if (box1.getGlobalBounds().intersects(box12.getGlobalBounds())) {
		if ((box1.getPosition().x + 96 <= box12.getPosition().x) || (box1.getPosition().x + 99 <= box12.getPosition().x)) {			//right
			box1.setPosition(box12.getPosition().x - 100, box1.getPosition().y);
			box12.move(0.5, 0);
		}
		else if ((box1.getPosition().x >= box12.getPosition().x + 96) || (box1.getPosition().x >= box12.getPosition().x + 98)) {		//left
			box1.setPosition(box12.getPosition().x + 100, box1.getPosition().y);
			box12.move(-0.5, 0);
		}
		else if (box1.getPosition().y > box12.getPosition().y) {		//jump
			fall12 = false;
		}
	}




	/////////////////////////////////////////////////////////


	if (box2.getGlobalBounds().intersects(box3.getGlobalBounds())) {
		if ((box2.getPosition().x + 96 <= box3.getPosition().x) || (box2.getPosition().x + 99 <= box3.getPosition().x)) {			//right
			box2.setPosition(box3.getPosition().x - 100, box2.getPosition().y);
			box3.move(0.5, 0);
		}
		else if ((box2.getPosition().x >= box3.getPosition().x + 96) || (box2.getPosition().x >= box3.getPosition().x + 98)) {		//left
			box2.setPosition(box3.getPosition().x + 100, box2.getPosition().y);
			box3.move(-0.5, 0);
		}
		else if (box2.getPosition().y > box3.getPosition().y) {		//jump
			fall3 = false;
		}
	}

	if (box2.getGlobalBounds().intersects(box4.getGlobalBounds())) {
		if ((box2.getPosition().x + 96 <= box4.getPosition().x) || (box2.getPosition().x + 99 <= box4.getPosition().x)) {			//right
			box2.setPosition(box4.getPosition().x - 100, box2.getPosition().y);
			box4.move(0.5, 0);
		}
		else if ((box2.getPosition().x >= box4.getPosition().x + 96) || (box2.getPosition().x >= box4.getPosition().x + 98)) {		//left
			box2.setPosition(box4.getPosition().x + 100, box2.getPosition().y);
			box4.move(-0.5, 0);
		}
		else if (box2.getPosition().y > box4.getPosition().y) {		//jump
			fall4 = false;
		}
	}

	if (box2.getGlobalBounds().intersects(box5.getGlobalBounds())) {
		if ((box2.getPosition().x + 96 <= box5.getPosition().x) || (box2.getPosition().x + 99 <= box5.getPosition().x)) {			//right
			box2.setPosition(box5.getPosition().x - 100, box2.getPosition().y);
			box5.move(0.5, 0);
		}
		else if ((box2.getPosition().x >= box5.getPosition().x + 96) || (box2.getPosition().x >= box5.getPosition().x + 98)) {		//left
			box2.setPosition(box5.getPosition().x + 100, box2.getPosition().y);
			box5.move(-0.5, 0);
		}
		else if (box2.getPosition().y > box5.getPosition().y) {		//jump
			fall5 = false;
		}
	}

	if (box2.getGlobalBounds().intersects(box6.getGlobalBounds())) {
		if ((box2.getPosition().x + 96 <= box6.getPosition().x) || (box2.getPosition().x + 99 <= box6.getPosition().x)) {			//right
			box2.setPosition(box6.getPosition().x - 100, box2.getPosition().y);
			box6.move(0.5, 0);
		}
		else if ((box2.getPosition().x >= box6.getPosition().x + 96) || (box2.getPosition().x >= box6.getPosition().x + 98)) {		//left
			box2.setPosition(box6.getPosition().x + 100, box2.getPosition().y);
			box6.move(-0.5, 0);
		}
		else if (box2.getPosition().y > box6.getPosition().y) {		//jump
			fall6 = false;
		}
	}

	if (box2.getGlobalBounds().intersects(box7.getGlobalBounds())) {
		if ((box2.getPosition().x + 96 <= box7.getPosition().x) || (box2.getPosition().x + 99 <= box7.getPosition().x)) {			//right
			box2.setPosition(box7.getPosition().x - 100, box2.getPosition().y);
			box7.move(0.5, 0);
		}
		else if ((box2.getPosition().x >= box7.getPosition().x + 96) || (box2.getPosition().x >= box7.getPosition().x + 98)) {		//left
			box2.setPosition(box7.getPosition().x + 100, box2.getPosition().y);
			box7.move(-0.5, 0);
		}
		else if (box2.getPosition().y > box7.getPosition().y) {		//jump
			fall7 = false;
		}
	}

	if (box2.getGlobalBounds().intersects(box8.getGlobalBounds())) {
		if ((box2.getPosition().x + 96 <= box8.getPosition().x) || (box2.getPosition().x + 99 <= box8.getPosition().x)) {			//right
			box2.setPosition(box8.getPosition().x - 100, box2.getPosition().y);
			box8.move(0.5, 0);
		}
		else if ((box2.getPosition().x >= box8.getPosition().x + 96) || (box2.getPosition().x >= box8.getPosition().x + 98)) {		//left
			box2.setPosition(box8.getPosition().x + 100, box2.getPosition().y);
			box8.move(-0.5, 0);
		}
		else if (box2.getPosition().y > box8.getPosition().y) {		//jump
			fall8 = false;
		}
	}

	if (box2.getGlobalBounds().intersects(box9.getGlobalBounds())) {
		if ((box2.getPosition().x + 96 <= box9.getPosition().x) || (box2.getPosition().x + 99 <= box9.getPosition().x)) {			//right
			box2.setPosition(box9.getPosition().x - 100, box2.getPosition().y);
			box9.move(0.5, 0);
		}
		else if ((box2.getPosition().x >= box9.getPosition().x + 96) || (box2.getPosition().x >= box9.getPosition().x + 98)) {		//left
			box2.setPosition(box9.getPosition().x + 100, box2.getPosition().y);
			box9.move(-0.5, 0);
		}
		else if (box2.getPosition().y > box9.getPosition().y) {		//jump
			fall9 = false;
		}
	}

	if (box2.getGlobalBounds().intersects(box10.getGlobalBounds())) {
		if ((box2.getPosition().x + 96 <= box10.getPosition().x) || (box2.getPosition().x + 99 <= box10.getPosition().x)) {			//right
			box2.setPosition(box10.getPosition().x - 100, box2.getPosition().y);
			box10.move(0.5, 0);
		}
		else if ((box2.getPosition().x >= box10.getPosition().x + 96) || (box2.getPosition().x >= box10.getPosition().x + 98)) {		//left
			box2.setPosition(box10.getPosition().x + 100, box2.getPosition().y);
			box10.move(-0.5, 0);
		}
		else if (box2.getPosition().y > box10.getPosition().y) {		//jump
			fall10 = false;
		}
	}

	if (box2.getGlobalBounds().intersects(box11.getGlobalBounds())) {
		if ((box2.getPosition().x + 96 <= box11.getPosition().x) || (box2.getPosition().x + 99 <= box11.getPosition().x)) {			//right
			box2.setPosition(box11.getPosition().x - 100, box2.getPosition().y);
			box11.move(0.5, 0);
		}
		else if ((box2.getPosition().x >= box11.getPosition().x + 96) || (box2.getPosition().x >= box11.getPosition().x + 98)) {		//left
			box2.setPosition(box11.getPosition().x + 100, box2.getPosition().y);
			box11.move(-0.5, 0);
		}
		else if (box2.getPosition().y > box11.getPosition().y) {		//jump
			fall11 = false;
		}
	}

	if (box2.getGlobalBounds().intersects(box12.getGlobalBounds())) {
		if ((box2.getPosition().x + 96 <= box12.getPosition().x) || (box2.getPosition().x + 99 <= box12.getPosition().x)) {			//right
			box2.setPosition(box12.getPosition().x - 100, box2.getPosition().y);
			box12.move(0.5, 0);
		}
		else if ((box2.getPosition().x >= box12.getPosition().x + 96) || (box2.getPosition().x >= box12.getPosition().x + 98)) {		//left
			box2.setPosition(box12.getPosition().x + 100, box2.getPosition().y);
			box12.move(-0.5, 0);
		}
		else if (box2.getPosition().y > box12.getPosition().y) {		//jump
			fall12 = false;
		}
	}

	///////////////////////////////////////////

	if (box3.getGlobalBounds().intersects(box4.getGlobalBounds())) {
		if ((box3.getPosition().x + 96 <= box4.getPosition().x) || (box3.getPosition().x + 99 <= box4.getPosition().x)) {			//right
			box3.setPosition(box4.getPosition().x - 100, box3.getPosition().y);
			box4.move(0.5, 0);
		}
		else if ((box3.getPosition().x >= box4.getPosition().x + 96) || (box3.getPosition().x >= box4.getPosition().x + 98)) {		//left
			box3.setPosition(box4.getPosition().x + 100, box3.getPosition().y);
			box4.move(-0.5, 0);
		}
		else if (box3.getPosition().y > box4.getPosition().y) {		//jump
			fall4 = false;
		}
	}

	if (box3.getGlobalBounds().intersects(box5.getGlobalBounds())) {
		if ((box3.getPosition().x + 96 <= box5.getPosition().x) || (box3.getPosition().x + 99 <= box5.getPosition().x)) {			//right
			box3.setPosition(box5.getPosition().x - 100, box3.getPosition().y);
			box5.move(0.5, 0);
		}
		else if ((box3.getPosition().x >= box5.getPosition().x + 96) || (box3.getPosition().x >= box5.getPosition().x + 98)) {		//left
			box3.setPosition(box5.getPosition().x + 100, box3.getPosition().y);
			box5.move(-0.5, 0);
		}
		else if (box3.getPosition().y > box5.getPosition().y) {		//jump
			fall5 = false;
		}
	}

	if (box3.getGlobalBounds().intersects(box6.getGlobalBounds())) {
		if ((box3.getPosition().x + 96 <= box6.getPosition().x) || (box3.getPosition().x + 99 <= box6.getPosition().x)) {			//right
			box3.setPosition(box6.getPosition().x - 100, box3.getPosition().y);
			box6.move(0.5, 0);
		}
		else if ((box3.getPosition().x >= box6.getPosition().x + 96) || (box3.getPosition().x >= box6.getPosition().x + 98)) {		//left
			box3.setPosition(box6.getPosition().x + 100, box3.getPosition().y);
			box6.move(-0.5, 0);
		}
		else if (box3.getPosition().y > box6.getPosition().y) {		//jump
			fall6 = false;
		}
	}

	if (box3.getGlobalBounds().intersects(box7.getGlobalBounds())) {
		if ((box3.getPosition().x + 96 <= box7.getPosition().x) || (box3.getPosition().x + 99 <= box7.getPosition().x)) {			//right
			box3.setPosition(box7.getPosition().x - 100, box3.getPosition().y);
			box7.move(0.5, 0);
		}
		else if ((box3.getPosition().x >= box7.getPosition().x + 96) || (box3.getPosition().x >= box7.getPosition().x + 98)) {		//left
			box3.setPosition(box7.getPosition().x + 100, box3.getPosition().y);
			box7.move(-0.5, 0);
		}
		else if (box3.getPosition().y > box7.getPosition().y) {		//jump
			fall7 = false;
		}
	}

	if (box3.getGlobalBounds().intersects(box8.getGlobalBounds())) {
		if ((box3.getPosition().x + 96 <= box8.getPosition().x) || (box3.getPosition().x + 99 <= box8.getPosition().x)) {			//right
			box3.setPosition(box8.getPosition().x - 100, box3.getPosition().y);
			box8.move(0.5, 0);
		}
		else if ((box3.getPosition().x >= box8.getPosition().x + 96) || (box3.getPosition().x >= box8.getPosition().x + 98)) {		//left
			box3.setPosition(box8.getPosition().x + 100, box3.getPosition().y);
			box8.move(-0.5, 0);
		}
		else if (box3.getPosition().y > box8.getPosition().y) {		//jump
			fall8 = false;
		}
	}

	if (box3.getGlobalBounds().intersects(box9.getGlobalBounds())) {
		if ((box3.getPosition().x + 96 <= box9.getPosition().x) || (box3.getPosition().x + 99 <= box9.getPosition().x)) {			//right
			box3.setPosition(box9.getPosition().x - 100, box3.getPosition().y);
			box9.move(0.5, 0);
		}
		else if ((box3.getPosition().x >= box9.getPosition().x + 96) || (box3.getPosition().x >= box9.getPosition().x + 98)) {		//left
			box3.setPosition(box9.getPosition().x + 100, box3.getPosition().y);
			box9.move(-0.5, 0);
		}
		else if (box3.getPosition().y > box9.getPosition().y) {		//jump
			fall9 = false;
		}
	}

	if (box3.getGlobalBounds().intersects(box10.getGlobalBounds())) {
		if ((box3.getPosition().x + 96 <= box10.getPosition().x) || (box3.getPosition().x + 99 <= box10.getPosition().x)) {			//right
			box3.setPosition(box10.getPosition().x - 100, box3.getPosition().y);
			box10.move(0.5, 0);
		}
		else if ((box3.getPosition().x >= box10.getPosition().x + 96) || (box3.getPosition().x >= box10.getPosition().x + 98)) {		//left
			box3.setPosition(box10.getPosition().x + 100, box3.getPosition().y);
			box10.move(-0.5, 0);
		}
		else if (box3.getPosition().y > box10.getPosition().y) {		//jump
			fall10 = false;
		}
	}

	if (box3.getGlobalBounds().intersects(box11.getGlobalBounds())) {
		if ((box3.getPosition().x + 96 <= box11.getPosition().x) || (box3.getPosition().x + 99 <= box11.getPosition().x)) {			//right
			box3.setPosition(box11.getPosition().x - 100, box3.getPosition().y);
			box11.move(0.5, 0);
		}
		else if ((box3.getPosition().x >= box11.getPosition().x + 96) || (box3.getPosition().x >= box11.getPosition().x + 98)) {		//left
			box3.setPosition(box11.getPosition().x + 100, box3.getPosition().y);
			box11.move(-0.5, 0);
		}
		else if (box3.getPosition().y > box11.getPosition().y) {		//jump
			fall11 = false;
		}
	}

	if (box3.getGlobalBounds().intersects(box12.getGlobalBounds())) {
		if ((box3.getPosition().x + 96 <= box12.getPosition().x) || (box3.getPosition().x + 99 <= box12.getPosition().x)) {			//right
			box3.setPosition(box12.getPosition().x - 100, box3.getPosition().y);
			box12.move(0.5, 0);
		}
		else if ((box3.getPosition().x >= box12.getPosition().x + 96) || (box3.getPosition().x >= box12.getPosition().x + 98)) {		//left
			box3.setPosition(box12.getPosition().x + 100, box3.getPosition().y);
			box12.move(-0.5, 0);
		}
		else if (box3.getPosition().y > box12.getPosition().y) {		//jump
			fall12 = false;
		}
	}


	///////////////////////////////////////

	if (box4.getGlobalBounds().intersects(box5.getGlobalBounds())) {
		if ((box4.getPosition().x + 96 <= box5.getPosition().x) || (box4.getPosition().x + 99 <= box5.getPosition().x)) {			//right
			box4.setPosition(box5.getPosition().x - 100, box4.getPosition().y);
			box5.move(0.5, 0);
		}
		else if ((box4.getPosition().x >= box5.getPosition().x + 96) || (box4.getPosition().x >= box5.getPosition().x + 98)) {		//left
			box4.setPosition(box5.getPosition().x + 100, box4.getPosition().y);
			box5.move(-0.5, 0);
		}
		else if (box4.getPosition().y > box5.getPosition().y) {		//jump
			fall5 = false;
		}
	}

	if (box4.getGlobalBounds().intersects(box6.getGlobalBounds())) {
		if ((box4.getPosition().x + 96 <= box6.getPosition().x) || (box4.getPosition().x + 99 <= box6.getPosition().x)) {			//right
			box4.setPosition(box6.getPosition().x - 100, box4.getPosition().y);
			box6.move(0.5, 0);
		}
		else if ((box4.getPosition().x >= box6.getPosition().x + 96) || (box4.getPosition().x >= box6.getPosition().x + 98)) {		//left
			box4.setPosition(box6.getPosition().x + 100, box4.getPosition().y);
			box6.move(-0.5, 0);
		}
		else if (box4.getPosition().y > box6.getPosition().y) {		//jump
			fall6 = false;
		}
	}

	if (box4.getGlobalBounds().intersects(box7.getGlobalBounds())) {
		if ((box4.getPosition().x + 96 <= box7.getPosition().x) || (box4.getPosition().x + 99 <= box7.getPosition().x)) {			//right
			box4.setPosition(box7.getPosition().x - 100, box4.getPosition().y);
			box7.move(0.5, 0);
		}
		else if ((box4.getPosition().x >= box7.getPosition().x + 96) || (box4.getPosition().x >= box7.getPosition().x + 98)) {		//left
			box4.setPosition(box7.getPosition().x + 100, box4.getPosition().y);
			box7.move(-0.5, 0);
		}
		else if (box4.getPosition().y > box7.getPosition().y) {		//jump
			fall7 = false;
		}
	}

	if (box4.getGlobalBounds().intersects(box8.getGlobalBounds())) {
		if ((box4.getPosition().x + 96 <= box8.getPosition().x) || (box4.getPosition().x + 99 <= box8.getPosition().x)) {			//right
			box4.setPosition(box8.getPosition().x - 100, box4.getPosition().y);
			box8.move(0.5, 0);
		}
		else if ((box4.getPosition().x >= box8.getPosition().x + 96) || (box4.getPosition().x >= box8.getPosition().x + 98)) {		//left
			box4.setPosition(box8.getPosition().x + 100, box4.getPosition().y);
			box8.move(-0.5, 0);
		}
		else if (box4.getPosition().y > box8.getPosition().y) {		//jump
			fall8 = false;
		}
	}

	if (box4.getGlobalBounds().intersects(box9.getGlobalBounds())) {
		if ((box4.getPosition().x + 96 <= box9.getPosition().x) || (box4.getPosition().x + 99 <= box9.getPosition().x)) {			//right
			box4.setPosition(box9.getPosition().x - 100, box4.getPosition().y);
			box9.move(0.5, 0);
		}
		else if ((box4.getPosition().x >= box9.getPosition().x + 96) || (box4.getPosition().x >= box9.getPosition().x + 98)) {		//left
			box4.setPosition(box9.getPosition().x + 100, box4.getPosition().y);
			box9.move(-0.5, 0);
		}
		else if (box4.getPosition().y > box9.getPosition().y) {		//jump
			fall9 = false;
		}
	}

	if (box4.getGlobalBounds().intersects(box10.getGlobalBounds())) {
		if ((box4.getPosition().x + 96 <= box10.getPosition().x) || (box4.getPosition().x + 99 <= box10.getPosition().x)) {			//right
			box4.setPosition(box10.getPosition().x - 100, box4.getPosition().y);
			box10.move(0.5, 0);
		}
		else if ((box4.getPosition().x >= box10.getPosition().x + 96) || (box4.getPosition().x >= box10.getPosition().x + 98)) {		//left
			box4.setPosition(box10.getPosition().x + 100, box4.getPosition().y);
			box10.move(-0.5, 0);
		}
		else if (box4.getPosition().y > box10.getPosition().y) {		//jump
			fall10 = false;
		}
	}

	if (box4.getGlobalBounds().intersects(box11.getGlobalBounds())) {
		if ((box4.getPosition().x + 96 <= box11.getPosition().x) || (box4.getPosition().x + 99 <= box11.getPosition().x)) {			//right
			box4.setPosition(box11.getPosition().x - 100, box4.getPosition().y);
			box11.move(0.5, 0);
		}
		else if ((box4.getPosition().x >= box11.getPosition().x + 96) || (box4.getPosition().x >= box11.getPosition().x + 98)) {		//left
			box4.setPosition(box11.getPosition().x + 100, box4.getPosition().y);
			box11.move(-0.5, 0);
		}
		else if (box4.getPosition().y > box11.getPosition().y) {		//jump
			fall11 = false;
		}
	}

	if (box4.getGlobalBounds().intersects(box12.getGlobalBounds())) {
		if ((box4.getPosition().x + 96 <= box12.getPosition().x) || (box4.getPosition().x + 99 <= box12.getPosition().x)) {			//right
			box4.setPosition(box12.getPosition().x - 100, box4.getPosition().y);
			box12.move(0.5, 0);
		}
		else if ((box4.getPosition().x >= box12.getPosition().x + 96) || (box4.getPosition().x >= box12.getPosition().x + 98)) {		//left
			box4.setPosition(box12.getPosition().x + 100, box4.getPosition().y);
			box12.move(-0.5, 0);
		}
		else if (box4.getPosition().y > box12.getPosition().y) {		//jump
			fall12 = false;
		}
	}



	////////////////////////////////////

	if (box5.getGlobalBounds().intersects(box6.getGlobalBounds())) {
		if ((box5.getPosition().x + 96 <= box6.getPosition().x) || (box5.getPosition().x + 99 <= box6.getPosition().x)) {			//right
			box5.setPosition(box6.getPosition().x - 100, box5.getPosition().y);
			box6.move(0.5, 0);
		}
		else if ((box5.getPosition().x >= box6.getPosition().x + 96) || (box5.getPosition().x >= box6.getPosition().x + 98)) {		//left
			box5.setPosition(box6.getPosition().x + 100, box5.getPosition().y);
			box6.move(-0.5, 0);
		}
		else if (box5.getPosition().y > box6.getPosition().y) {		//jump
			fall6 = false;
		}
	}

	if (box5.getGlobalBounds().intersects(box7.getGlobalBounds())) {
		if ((box5.getPosition().x + 96 <= box7.getPosition().x) || (box5.getPosition().x + 99 <= box7.getPosition().x)) {			//right
			box5.setPosition(box7.getPosition().x - 100, box5.getPosition().y);
			box7.move(0.5, 0);
		}
		else if ((box5.getPosition().x >= box7.getPosition().x + 96) || (box5.getPosition().x >= box7.getPosition().x + 98)) {		//left
			box5.setPosition(box7.getPosition().x + 100, box5.getPosition().y);
			box7.move(-0.5, 0);
		}
		else if (box5.getPosition().y > box7.getPosition().y) {		//jump
			fall7 = false;
		}
	}

	if (box5.getGlobalBounds().intersects(box8.getGlobalBounds())) {
		if ((box5.getPosition().x + 96 <= box8.getPosition().x) || (box5.getPosition().x + 99 <= box8.getPosition().x)) {			//right
			box5.setPosition(box8.getPosition().x - 100, box5.getPosition().y);
			box8.move(0.5, 0);
		}
		else if ((box5.getPosition().x >= box8.getPosition().x + 96) || (box5.getPosition().x >= box8.getPosition().x + 98)) {		//left
			box5.setPosition(box8.getPosition().x + 100, box5.getPosition().y);
			box8.move(-0.5, 0);
		}
		else if (box5.getPosition().y > box8.getPosition().y) {		//jump
			fall8 = false;
		}
	}

	if (box5.getGlobalBounds().intersects(box9.getGlobalBounds())) {
		if ((box5.getPosition().x + 96 <= box9.getPosition().x) || (box5.getPosition().x + 99 <= box9.getPosition().x)) {			//right
			box5.setPosition(box9.getPosition().x - 100, box5.getPosition().y);
			box9.move(0.5, 0);
		}
		else if ((box5.getPosition().x >= box9.getPosition().x + 96) || (box5.getPosition().x >= box9.getPosition().x + 98)) {		//left
			box5.setPosition(box9.getPosition().x + 100, box5.getPosition().y);
			box9.move(-0.5, 0);
		}
		else if (box5.getPosition().y > box9.getPosition().y) {		//jump
			fall9 = false;
		}
	}

	if (box5.getGlobalBounds().intersects(box10.getGlobalBounds())) {
		if ((box5.getPosition().x + 96 <= box10.getPosition().x) || (box5.getPosition().x + 99 <= box10.getPosition().x)) {			//right
			box5.setPosition(box10.getPosition().x - 100, box5.getPosition().y);
			box10.move(0.5, 0);
		}
		else if ((box5.getPosition().x >= box10.getPosition().x + 96) || (box5.getPosition().x >= box10.getPosition().x + 98)) {		//left
			box5.setPosition(box10.getPosition().x + 100, box5.getPosition().y);
			box10.move(-0.5, 0);
		}
		else if (box5.getPosition().y > box10.getPosition().y) {		//jump
			fall10 = false;
		}
	}

	if (box5.getGlobalBounds().intersects(box11.getGlobalBounds())) {
		if ((box5.getPosition().x + 96 <= box11.getPosition().x) || (box5.getPosition().x + 99 <= box11.getPosition().x)) {			//right
			box5.setPosition(box11.getPosition().x - 100, box5.getPosition().y);
			box11.move(0.5, 0);
		}
		else if ((box5.getPosition().x >= box11.getPosition().x + 96) || (box5.getPosition().x >= box11.getPosition().x + 98)) {		//left
			box5.setPosition(box11.getPosition().x + 100, box5.getPosition().y);
			box11.move(-0.5, 0);
		}
		else if (box5.getPosition().y > box11.getPosition().y) {		//jump
			fall11 = false;
		}
	}

	if (box5.getGlobalBounds().intersects(box12.getGlobalBounds())) {
		if ((box5.getPosition().x + 96 <= box12.getPosition().x) || (box5.getPosition().x + 99 <= box12.getPosition().x)) {			//right
			box5.setPosition(box12.getPosition().x - 100, box5.getPosition().y);
			box12.move(0.5, 0);
		}
		else if ((box5.getPosition().x >= box12.getPosition().x + 96) || (box5.getPosition().x >= box12.getPosition().x + 98)) {		//left
			box5.setPosition(box12.getPosition().x + 100, box5.getPosition().y);
			box12.move(-0.5, 0);
		}
		else if (box5.getPosition().y > box12.getPosition().y) {		//jump
			fall12 = false;
		}
	}



	////////////////////////////

	if (box6.getGlobalBounds().intersects(box7.getGlobalBounds())) {
		if ((box6.getPosition().x + 96 <= box7.getPosition().x) || (box6.getPosition().x + 99 <= box7.getPosition().x)) {			//right
			box6.setPosition(box7.getPosition().x - 100, box6.getPosition().y);
			box7.move(0.5, 0);
		}
		else if ((box6.getPosition().x >= box7.getPosition().x + 96) || (box6.getPosition().x >= box7.getPosition().x + 98)) {		//left
			box6.setPosition(box7.getPosition().x + 100, box6.getPosition().y);
			box7.move(-0.5, 0);
		}
		else if (box6.getPosition().y > box7.getPosition().y) {		//jump
			fall7 = false;
		}
	}

	if (box6.getGlobalBounds().intersects(box8.getGlobalBounds())) {
		if ((box6.getPosition().x + 96 <= box8.getPosition().x) || (box6.getPosition().x + 99 <= box8.getPosition().x)) {			//right
			box6.setPosition(box8.getPosition().x - 100, box6.getPosition().y);
			box8.move(0.5, 0);
		}
		else if ((box6.getPosition().x >= box8.getPosition().x + 96) || (box6.getPosition().x >= box8.getPosition().x + 98)) {		//left
			box6.setPosition(box8.getPosition().x + 100, box6.getPosition().y);
			box8.move(-0.5, 0);
		}
		else if (box6.getPosition().y > box8.getPosition().y) {		//jump
			fall8 = false;
		}
	}

	if (box6.getGlobalBounds().intersects(box9.getGlobalBounds())) {
		if ((box6.getPosition().x + 96 <= box9.getPosition().x) || (box6.getPosition().x + 99 <= box9.getPosition().x)) {			//right
			box6.setPosition(box9.getPosition().x - 100, box6.getPosition().y);
			box9.move(0.5, 0);
		}
		else if ((box6.getPosition().x >= box9.getPosition().x + 96) || (box6.getPosition().x >= box9.getPosition().x + 98)) {		//left
			box6.setPosition(box9.getPosition().x + 100, box6.getPosition().y);
			box9.move(-0.5, 0);
		}
		else if (box6.getPosition().y > box9.getPosition().y) {		//jump
			fall9 = false;
		}
	}

	if (box6.getGlobalBounds().intersects(box10.getGlobalBounds())) {
		if ((box6.getPosition().x + 96 <= box10.getPosition().x) || (box6.getPosition().x + 99 <= box10.getPosition().x)) {			//right
			box6.setPosition(box10.getPosition().x - 100, box6.getPosition().y);
			box10.move(0.5, 0);
		}
		else if ((box6.getPosition().x >= box10.getPosition().x + 96) || (box6.getPosition().x >= box10.getPosition().x + 98)) {		//left
			box6.setPosition(box10.getPosition().x + 100, box6.getPosition().y);
			box10.move(-0.5, 0);
		}
		else if (box6.getPosition().y > box10.getPosition().y) {		//jump
			fall10 = false;
		}
	}

	if (box6.getGlobalBounds().intersects(box11.getGlobalBounds())) {
		if ((box6.getPosition().x + 96 <= box11.getPosition().x) || (box6.getPosition().x + 99 <= box11.getPosition().x)) {			//right
			box6.setPosition(box11.getPosition().x - 100, box6.getPosition().y);
			box11.move(0.5, 0);
		}
		else if ((box6.getPosition().x >= box11.getPosition().x + 96) || (box6.getPosition().x >= box11.getPosition().x + 98)) {		//left
			box6.setPosition(box11.getPosition().x + 100, box6.getPosition().y);
			box11.move(-0.5, 0);
		}
		else if (box6.getPosition().y > box11.getPosition().y) {		//jump
			fall11 = false;
		}
	}

	if (box6.getGlobalBounds().intersects(box12.getGlobalBounds())) {
		if ((box6.getPosition().x + 96 <= box12.getPosition().x) || (box6.getPosition().x + 99 <= box12.getPosition().x)) {			//right
			box6.setPosition(box12.getPosition().x - 100, box6.getPosition().y);
			box12.move(0.5, 0);
		}
		else if ((box6.getPosition().x >= box12.getPosition().x + 96) || (box6.getPosition().x >= box12.getPosition().x + 98)) {		//left
			box6.setPosition(box12.getPosition().x + 100, box6.getPosition().y);
			box12.move(-0.5, 0);
		}
		else if (box6.getPosition().y > box12.getPosition().y) {		//jump
			fall12 = false;
		}
	}



	//////////////////////////////
	if (box7.getGlobalBounds().intersects(box8.getGlobalBounds())) {
		if ((box7.getPosition().x + 96 <= box8.getPosition().x) || (box7.getPosition().x + 99 <= box8.getPosition().x)) {			//right
			box7.setPosition(box8.getPosition().x - 100, box7.getPosition().y);
			box8.move(0.5, 0);
		}
		else if ((box7.getPosition().x >= box8.getPosition().x + 96) || (box7.getPosition().x >= box8.getPosition().x + 98)) {		//left
			box7.setPosition(box8.getPosition().x + 100, box7.getPosition().y);
			box8.move(-0.5, 0);
		}
		else if (box7.getPosition().y > box8.getPosition().y) {		//jump
			fall8 = false;
		}
	}

	if (box7.getGlobalBounds().intersects(box9.getGlobalBounds())) {
		if ((box7.getPosition().x + 96 <= box9.getPosition().x) || (box7.getPosition().x + 99 <= box9.getPosition().x)) {			//right
			box7.setPosition(box9.getPosition().x - 100, box7.getPosition().y);
			box9.move(0.5, 0);
		}
		else if ((box7.getPosition().x >= box9.getPosition().x + 96) || (box7.getPosition().x >= box9.getPosition().x + 98)) {		//left
			box7.setPosition(box9.getPosition().x + 100, box7.getPosition().y);
			box9.move(-0.5, 0);
		}
		else if (box7.getPosition().y > box9.getPosition().y) {		//jump
			fall9 = false;
		}
	}

	if (box7.getGlobalBounds().intersects(box10.getGlobalBounds())) {
		if ((box7.getPosition().x + 96 <= box10.getPosition().x) || (box7.getPosition().x + 99 <= box10.getPosition().x)) {			//right
			box7.setPosition(box10.getPosition().x - 100, box7.getPosition().y);
			box10.move(0.5, 0);
		}
		else if ((box7.getPosition().x >= box10.getPosition().x + 96) || (box7.getPosition().x >= box10.getPosition().x + 98)) {		//left
			box7.setPosition(box10.getPosition().x + 100, box7.getPosition().y);
			box10.move(-0.5, 0);
		}
		else if (box7.getPosition().y > box10.getPosition().y) {		//jump
			fall10 = false;
		}
	}

	if (box7.getGlobalBounds().intersects(box11.getGlobalBounds())) {
		if ((box7.getPosition().x + 96 <= box11.getPosition().x) || (box7.getPosition().x + 99 <= box11.getPosition().x)) {			//right
			box7.setPosition(box11.getPosition().x - 100, box7.getPosition().y);
			box11.move(0.5, 0);
		}
		else if ((box7.getPosition().x >= box11.getPosition().x + 96) || (box7.getPosition().x >= box11.getPosition().x + 98)) {		//left
			box7.setPosition(box11.getPosition().x + 100, box7.getPosition().y);
			box11.move(-0.5, 0);
		}
		else if (box7.getPosition().y > box11.getPosition().y) {		//jump
			fall11 = false;
		}
	}

	if (box7.getGlobalBounds().intersects(box12.getGlobalBounds())) {
		if ((box7.getPosition().x + 96 <= box12.getPosition().x) || (box7.getPosition().x + 99 <= box12.getPosition().x)) {			//right
			box7.setPosition(box12.getPosition().x - 100, box7.getPosition().y);
			box12.move(0.5, 0);
		}
		else if ((box7.getPosition().x >= box12.getPosition().x + 96) || (box7.getPosition().x >= box12.getPosition().x + 98)) {		//left
			box7.setPosition(box12.getPosition().x + 100, box7.getPosition().y);
			box12.move(-0.5, 0);
		}
		else if (box7.getPosition().y > box12.getPosition().y) {		//jump
			fall12 = false;
		}
	}

	///////////////////////////////////

	if (box8.getGlobalBounds().intersects(box9.getGlobalBounds())) {
		if ((box8.getPosition().x + 96 <= box9.getPosition().x) || (box8.getPosition().x + 99 <= box9.getPosition().x)) {			//right
			box8.setPosition(box9.getPosition().x - 100, box8.getPosition().y);
			box9.move(0.5, 0);
		}
		else if ((box8.getPosition().x >= box9.getPosition().x + 96) || (box8.getPosition().x >= box9.getPosition().x + 98)) {		//left
			box8.setPosition(box9.getPosition().x + 100, box8.getPosition().y);
			box9.move(-0.5, 0);
		}
		else if (box8.getPosition().y > box9.getPosition().y) {		//jump
			fall9 = false;
		}
	}

	if (box8.getGlobalBounds().intersects(box10.getGlobalBounds())) {
		if ((box8.getPosition().x + 96 <= box10.getPosition().x) || (box8.getPosition().x + 99 <= box10.getPosition().x)) {			//right
			box8.setPosition(box10.getPosition().x - 100, box8.getPosition().y);
			box10.move(0.5, 0);
		}
		else if ((box8.getPosition().x >= box10.getPosition().x + 96) || (box8.getPosition().x >= box10.getPosition().x + 98)) {		//left
			box8.setPosition(box10.getPosition().x + 100, box8.getPosition().y);
			box10.move(-0.5, 0);
		}
		else if (box8.getPosition().y > box10.getPosition().y) {		//jump
			fall10 = false;
		}
	}

	if (box8.getGlobalBounds().intersects(box11.getGlobalBounds())) {
		if ((box8.getPosition().x + 96 <= box11.getPosition().x) || (box8.getPosition().x + 99 <= box11.getPosition().x)) {			//right
			box8.setPosition(box11.getPosition().x - 100, box8.getPosition().y);
			box11.move(0.5, 0);
		}
		else if ((box8.getPosition().x >= box11.getPosition().x + 96) || (box8.getPosition().x >= box11.getPosition().x + 98)) {		//left
			box8.setPosition(box11.getPosition().x + 100, box8.getPosition().y);
			box11.move(-0.5, 0);
		}
		else if (box8.getPosition().y > box11.getPosition().y) {		//jump
			fall11 = false;
		}
	}

	if (box8.getGlobalBounds().intersects(box12.getGlobalBounds())) {
		if ((box8.getPosition().x + 96 <= box12.getPosition().x) || (box8.getPosition().x + 99 <= box12.getPosition().x)) {			//right
			box8.setPosition(box12.getPosition().x - 100, box8.getPosition().y);
			box12.move(0.5, 0);
		}
		else if ((box8.getPosition().x >= box12.getPosition().x + 96) || (box8.getPosition().x >= box12.getPosition().x + 98)) {		//left
			box8.setPosition(box12.getPosition().x + 100, box8.getPosition().y);
			box12.move(-0.5, 0);
		}
		else if (box8.getPosition().y > box12.getPosition().y) {		//jump
			fall12 = false;
		}
	}

	//////////////////////////////////////


	if (box9.getGlobalBounds().intersects(box10.getGlobalBounds())) {
		if ((box9.getPosition().x + 96 <= box10.getPosition().x) || (box9.getPosition().x + 99 <= box10.getPosition().x)) {			//right
			box9.setPosition(box10.getPosition().x - 100, box9.getPosition().y);
			box10.move(0.5, 0);
		}
		else if ((box9.getPosition().x >= box10.getPosition().x + 96) || (box9.getPosition().x >= box10.getPosition().x + 98)) {		//left
			box9.setPosition(box10.getPosition().x + 100, box9.getPosition().y);
			box10.move(-0.5, 0);
		}
		else if (box9.getPosition().y > box10.getPosition().y) {		//jump
			fall10 = false;
		}
	}

	if (box9.getGlobalBounds().intersects(box11.getGlobalBounds())) {
		if ((box9.getPosition().x + 96 <= box11.getPosition().x) || (box9.getPosition().x + 99 <= box11.getPosition().x)) {			//right
			box9.setPosition(box11.getPosition().x - 100, box9.getPosition().y);
			box11.move(0.5, 0);
		}
		else if ((box9.getPosition().x >= box11.getPosition().x + 96) || (box9.getPosition().x >= box11.getPosition().x + 98)) {		//left
			box9.setPosition(box11.getPosition().x + 100, box9.getPosition().y);
			box11.move(-0.5, 0);
		}
		else if (box9.getPosition().y > box11.getPosition().y) {		//jump
			fall11 = false;
		}
	}

	if (box9.getGlobalBounds().intersects(box12.getGlobalBounds())) {
		if ((box9.getPosition().x + 96 <= box12.getPosition().x) || (box9.getPosition().x + 99 <= box12.getPosition().x)) {			//right
			box9.setPosition(box12.getPosition().x - 100, box9.getPosition().y);
			box12.move(0.5, 0);
		}
		else if ((box9.getPosition().x >= box12.getPosition().x + 96) || (box9.getPosition().x >= box12.getPosition().x + 98)) {		//left
			box9.setPosition(box12.getPosition().x + 100, box9.getPosition().y);
			box12.move(-0.5, 0);
		}
		else if (box9.getPosition().y > box12.getPosition().y) {		//jump
			fall12 = false;
		}
	}

	///////////////////////////////////

	if (box10.getGlobalBounds().intersects(box11.getGlobalBounds())) {
		if ((box10.getPosition().x + 96 <= box11.getPosition().x) || (box10.getPosition().x + 99 <= box11.getPosition().x)) {			//right
			box10.setPosition(box11.getPosition().x - 100, box10.getPosition().y);
			box11.move(0.5, 0);
		}
		else if ((box10.getPosition().x >= box11.getPosition().x + 96) || (box10.getPosition().x >= box11.getPosition().x + 98)) {		//left
			box10.setPosition(box11.getPosition().x + 100, box10.getPosition().y);
			box11.move(-0.5, 0);
		}
		else if (box10.getPosition().y > box11.getPosition().y) {		//jump
			fall11 = false;
		}
	}

	if (box10.getGlobalBounds().intersects(box12.getGlobalBounds())) {
		if ((box10.getPosition().x + 96 <= box12.getPosition().x) || (box10.getPosition().x + 99 <= box12.getPosition().x)) {			//right
			box10.setPosition(box12.getPosition().x - 100, box10.getPosition().y);
			box12.move(0.5, 0);
		}
		else if ((box10.getPosition().x >= box12.getPosition().x + 96) || (box10.getPosition().x >= box12.getPosition().x + 98)) {		//left
			box10.setPosition(box12.getPosition().x + 100, box10.getPosition().y);
			box12.move(-0.5, 0);
		}
		else if (box10.getPosition().y > box12.getPosition().y) {		//jump
			fall12 = false;
		}
	}

	////////////////////

	if (box11.getGlobalBounds().intersects(box12.getGlobalBounds())) {
		if ((box11.getPosition().x + 96 <= box12.getPosition().x) || (box11.getPosition().x + 99 <= box12.getPosition().x)) {			//right
			box11.setPosition(box12.getPosition().x - 100, box11.getPosition().y);
			box12.move(0.5, 0);
		}
		else if ((box11.getPosition().x >= box12.getPosition().x + 96) || (box11.getPosition().x >= box12.getPosition().x + 98)) {		//left
			box11.setPosition(box12.getPosition().x + 100, box11.getPosition().y);
			box12.move(-0.5, 0);
		}
		else if (box11.getPosition().y > box12.getPosition().y) {		//jump
			fall12 = false;
		}
	}




}
