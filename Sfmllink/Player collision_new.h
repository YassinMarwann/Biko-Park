//#pragma once
//#include "Initialization.h"
//#include "player struct.h"
//
//
//
//void player_collision(RenderWindow& window, Player& Thief, Player& Scientist, Player& Builder, Player& Astronaut, RectangleShape& top1, RectangleShape& top2, RectangleShape& top3, RectangleShape& top4, RectangleShape& left1, RectangleShape& left2, RectangleShape& left3, RectangleShape& left4, RectangleShape& right1, RectangleShape& right2, RectangleShape& right3, RectangleShape& right4) {
//
//
//	//cases sha8ala (when first is under second)
//	a_b = 0;
//	a_s = 0;
//	t_s = 0;
//	t_b = 0;
//	t_a = 0;
//	s_b = 0;
//	s_t = 0;
//	s_a = 0;
//	b_t = 0;
//	b_s = 0;
//	b_a = 0;
//	a_t = 0;
//
//
//
//
//
//	top1.setPosition(Thief.rect.left + 11, Thief.rect.top);
//	top2.setPosition(Builder.rect.left + 11, Builder.rect.top);
//	top3.setPosition(Scientist.rect.left + 11, Scientist.rect.top);
//	top4.setPosition(Astronaut.rect.left + 11, Astronaut.rect.top);
//
//	left1.setPosition(Thief.rect.left, Thief.rect.top + 10);
//	left2.setPosition(Builder.rect.left, Builder.rect.top + 10);
//	left3.setPosition(Scientist.rect.left, Scientist.rect.top + 10);
//	left4.setPosition(Astronaut.rect.left, Astronaut.rect.top + 10);
//
//	right1.setPosition(Thief.rect.left + Thief.pico.getGlobalBounds().width - 2, Thief.rect.top + 10);
//	right2.setPosition(Builder.rect.left + Builder.pico.getGlobalBounds().width - 2, Builder.rect.top + 10);
//	right3.setPosition(Scientist.rect.left + Scientist.pico.getGlobalBounds().width - 2, Scientist.rect.top + 10);
//	right4.setPosition(Astronaut.rect.left + Astronaut.pico.getGlobalBounds().width - 2, Astronaut.rect.top + 10);
//
//	///////////////////// thief and builder
//
//	if (Builder.pico.getGlobalBounds().intersects(top1.getGlobalBounds())) {
//		if (Builder.rect.top <= top1.getGlobalBounds().top - top1.getGlobalBounds().height) {
//			Builder.move_y = 0;
//			t_b = 1;
//			Builder.onground = 1;
//		}
//		if (pagenum == 8)
//			dead[2] = true;
//	}
//	if (Keyboard::isKeyPressed(Keyboard::Left) || Keyboard::isKeyPressed(Keyboard::Right)) {
//		if (Builder.pico.getGlobalBounds().intersects(left1.getGlobalBounds())) {
//
//
//			Builder.rect.left = left1.getGlobalBounds().left - 37;
//
//			if (pagenum == 8)
//				dead[2] = true;
//		}
//		else if (Builder.pico.getGlobalBounds().intersects(right1.getGlobalBounds())) {
//
//
//			Builder.rect.left = right1.getGlobalBounds().left + 2.87;
//
//			if (pagenum == 8)
//				dead[2] = true;
//		}
//	}
//
//
//	if (Thief.pico.getGlobalBounds().intersects(top2.getGlobalBounds())) {
//		if (Thief.rect.top <= top2.getGlobalBounds().top - top2.getGlobalBounds().height) {
//			Thief.move_y = 0;
//			b_t = 1;
//			Thief.onground = 1;
//
//			if (pagenum == 8)
//				dead[0] = true;
//		}
//	}
//	if (Keyboard::isKeyPressed(Keyboard::A) || Keyboard::isKeyPressed(Keyboard::D)) {
//		if (Thief.pico.getGlobalBounds().intersects(left2.getGlobalBounds())) {
//
//
//			Thief.rect.left = left2.getGlobalBounds().left - 37;
//
//			if (pagenum == 8)
//				dead[0] = true;
//		}
//		else if (Thief.pico.getGlobalBounds().intersects(right2.getGlobalBounds())) {
//
//
//			Thief.rect.left = right2.getGlobalBounds().left + 2.87;
//
//			if (pagenum == 8)
//				dead[0] = true;
//		}
//	}
//	///////////////////// theif and scientist
//	if (Scientist.pico.getGlobalBounds().intersects(top1.getGlobalBounds())) {
//		if (Scientist.rect.top <= top1.getGlobalBounds().top - top1.getGlobalBounds().height) {
//			Scientist.move_y = 0;
//			t_s = 1;
//			Scientist.onground = 1;
//
//			if (pagenum == 8)
//				dead[1] = true;
//		}
//	}if (dPadX0 == 100 || dPadX0 == -100) {
//		if (Scientist.pico.getGlobalBounds().intersects(left1.getGlobalBounds())) {
//
//
//			Scientist.rect.left = left1.getGlobalBounds().left - 37;
//
//			if (pagenum == 8)
//				dead[1] = true;
//		}
//		else if (Scientist.pico.getGlobalBounds().intersects(right1.getGlobalBounds())) {
//
//
//			Scientist.rect.left = right1.getGlobalBounds().left + 2.87;
//
//			if (pagenum == 8)
//				dead[1] = true;
//		}
//	}
//
//
//
//
//
//
//	if (Thief.pico.getGlobalBounds().intersects(top3.getGlobalBounds())) {
//		if (Thief.rect.top <= top3.getGlobalBounds().top - top3.getGlobalBounds().height) {
//			Thief.move_y = 0;
//			s_t = 1;
//			Thief.onground = 1;
//
//			if (pagenum == 8)
//				dead[0] = true;
//		}
//	}
//	if (Keyboard::isKeyPressed(Keyboard::A) || Keyboard::isKeyPressed(Keyboard::D)) {
//		if (Thief.pico.getGlobalBounds().intersects(left3.getGlobalBounds())) {
//
//
//			Thief.rect.left = left3.getGlobalBounds().left - 37;
//
//			if (pagenum == 8)
//				dead[0] = true;
//		}
//		else if (Thief.pico.getGlobalBounds().intersects(right3.getGlobalBounds())) {
//
//
//			Thief.rect.left = right3.getGlobalBounds().left + 2.87;
//
//			if (pagenum == 8)
//				dead[0] = true;
//		}
//	}
//	////////////////////// thief and astro
//	if (Astronaut.pico.getGlobalBounds().intersects(top1.getGlobalBounds())) {
//		if (Astronaut.rect.top <= top1.getGlobalBounds().top - top1.getGlobalBounds().height) {
//			Astronaut.move_y = 0;
//			t_a = 1;
//			Astronaut.onground = 1;
//
//			if (pagenum == 8)
//				dead[3] = true;
//		}
//	}if (dPadX1 == 100 || dPadX1 == -100) {
//		if (Astronaut.pico.getGlobalBounds().intersects(left1.getGlobalBounds())) {
//
//
//			Astronaut.rect.left = left1.getGlobalBounds().left - 37;
//
//			if (pagenum == 8)
//				dead[3] = true;
//		}
//		else if (Astronaut.pico.getGlobalBounds().intersects(right1.getGlobalBounds())) {
//
//
//			Astronaut.rect.left = right1.getGlobalBounds().left + 2.87;
//
//			if (pagenum == 8)
//				dead[3] = true;
//		}
//	}
//
//
//
//	if (Thief.pico.getGlobalBounds().intersects(top4.getGlobalBounds())) {
//		if (Thief.rect.top <= top4.getGlobalBounds().top - top4.getGlobalBounds().height) {
//			Thief.move_y = 0;
//			a_t = 1;
//			Thief.onground = 1;
//			if (pagenum == 8)
//				dead[0] = true;
//		}
//	}if (Keyboard::isKeyPressed(Keyboard::A) || Keyboard::isKeyPressed(Keyboard::D)) {
//		if (Thief.pico.getGlobalBounds().intersects(left4.getGlobalBounds())) {
//
//
//			Thief.rect.left = left4.getGlobalBounds().left - 37;
//
//			if (pagenum == 8)
//				dead[0] = true;
//		}
//		else if (Thief.pico.getGlobalBounds().intersects(right4.getGlobalBounds())) {
//
//
//			Thief.rect.left = right4.getGlobalBounds().left + 2.87;
//
//			if (pagenum == 8)
//				dead[0] = true;
//		}
//	}
//	/////////////////////// builder and astro
//	if (Astronaut.pico.getGlobalBounds().intersects(top2.getGlobalBounds())) {
//		if (Astronaut.rect.top <= top2.getGlobalBounds().top - top2.getGlobalBounds().height) {
//			Astronaut.move_y = 0;
//			b_a = 1;
//			Astronaut.onground = 1;
//			if (pagenum == 8)
//				dead[3] = true;
//		}
//	}if (dPadX1 == 100 || dPadX1 == -100) {
//		if (Astronaut.pico.getGlobalBounds().intersects(left2.getGlobalBounds())) {
//
//
//			Astronaut.rect.left = left2.getGlobalBounds().left - 37;
//
//			if (pagenum == 8)
//				dead[3] = true;
//		}
//		else if (Astronaut.pico.getGlobalBounds().intersects(right2.getGlobalBounds())) {
//
//
//			Astronaut.rect.left = right2.getGlobalBounds().left + 2.87;
//
//			if (pagenum == 8)
//				dead[3] = true;
//		}
//	}
//	if (Builder.pico.getGlobalBounds().intersects(top4.getGlobalBounds())) {
//		if (Builder.rect.top <= top4.getGlobalBounds().top - top4.getGlobalBounds().height) {
//			Builder.move_y = 0;
//			a_b = 1;
//			Builder.onground = 1;
//			if (pagenum == 8)
//				dead[2] = true;
//		}
//	}if (Keyboard::isKeyPressed(Keyboard::Left) || Keyboard::isKeyPressed(Keyboard::Right)) {
//		if (Builder.pico.getGlobalBounds().intersects(left4.getGlobalBounds())) {
//
//
//			Builder.rect.left = left4.getGlobalBounds().left - 37;
//
//
//			if (pagenum == 8)
//				dead[2] = true;
//		}
//		else if (Builder.pico.getGlobalBounds().intersects(right4.getGlobalBounds())) {
//
//
//			Builder.rect.left = right4.getGlobalBounds().left + 2.87;
//
//			if (pagenum == 8)
//				dead[2] = true;
//		}
//	}
//	///////////////////// builder and scientist
//	if (Scientist.pico.getGlobalBounds().intersects(top2.getGlobalBounds())) {
//		if (Scientist.rect.top <= top2.getGlobalBounds().top - top2.getGlobalBounds().height) {
//			Scientist.move_y = 0;
//			b_s = 1;
//			Scientist.onground = 1;
//
//			if (pagenum == 8)
//				dead[1] = true;
//		}
//	}if (dPadX0 == 100 || dPadX0 == -100) {
//		if (Scientist.pico.getGlobalBounds().intersects(left2.getGlobalBounds())) {
//
//
//			Scientist.rect.left = left2.getGlobalBounds().left - 37;
//
//			if (pagenum == 8)
//				dead[1] = true;
//		}
//		else if (Scientist.pico.getGlobalBounds().intersects(right2.getGlobalBounds())) {
//
//
//			Scientist.rect.left = right2.getGlobalBounds().left + 2.87;
//
//			if (pagenum == 8)
//				dead[1] = true;
//		}
//	}
//	if (Builder.pico.getGlobalBounds().intersects(top3.getGlobalBounds())) {
//		if (Builder.rect.top <= top3.getGlobalBounds().top - top3.getGlobalBounds().height) {
//			Builder.move_y = 0;
//			s_b = 1;
//			Builder.onground = 1;
//
//			if (pagenum == 8)
//				dead[2] = true;
//		}
//	}
//	if (Keyboard::isKeyPressed(Keyboard::Left) || Keyboard::isKeyPressed(Keyboard::Right)) {
//		if (Builder.pico.getGlobalBounds().intersects(left3.getGlobalBounds())) {
//
//
//			Builder.rect.left = left3.getGlobalBounds().left - 37;
//
//			if (pagenum == 8)
//				dead[2] = true;
//		}
//	
//		else if (Builder.pico.getGlobalBounds().intersects(right3.getGlobalBounds())) {
//
//
//			Builder.rect.left = right3.getGlobalBounds().left + 2.87;
//
//			if (pagenum == 8)
//				dead[2] = true;
//		}
//	}
//	//////////////////// scientist and astro
//	if (Astronaut.pico.getGlobalBounds().intersects(top3.getGlobalBounds())) {
//		if (Astronaut.rect.top < top3.getGlobalBounds().top - top3.getGlobalBounds().height) {
//			Astronaut.move_y = 0;
//			s_a = 1;
//			Astronaut.onground = 1;
//
//			if (pagenum == 8)
//				dead[3] = true;
//		}
//	}if (dPadX1 == 100 || dPadX1 == -100) {
//		if (Astronaut.pico.getGlobalBounds().intersects(left3.getGlobalBounds())) {
//
//
//			Astronaut.rect.left = left3.getGlobalBounds().left - 37;
//
//			if (pagenum == 8)
//				dead[3] = true;
//		}
//		else if (Astronaut.pico.getGlobalBounds().intersects(right3.getGlobalBounds())) {
//
//
//			Astronaut.rect.left = right3.getGlobalBounds().left + 2.87;
//
//			if (pagenum == 8)
//				dead[3] = true;
//		}
//	}
//
//
//
//
//	if (Scientist.pico.getGlobalBounds().intersects(top4.getGlobalBounds())) {
//		if (Scientist.rect.top <= top4.getGlobalBounds().top - top4.getGlobalBounds().height) {
//			Scientist.move_y = 0;
//			a_s = 1;
//			Scientist.onground = 1;
//
//			if (pagenum == 8)
//				dead[1] = true;
//		}
//	}if (dPadX0 == 100 || dPadX0 == -100) {
//		if (Scientist.pico.getGlobalBounds().intersects(left4.getGlobalBounds())) {
//
//
//			Scientist.rect.left = left4.getGlobalBounds().left - 37;
//
//			if (pagenum == 8)
//				dead[1] = true;
//		}
//		else if (Scientist.pico.getGlobalBounds().intersects(right4.getGlobalBounds())) {
//
//
//			Scientist.rect.left = right4.getGlobalBounds().left + 2.87;
//
//			if (pagenum == 8)
//				dead[1] = true;
//		}
//	}
//
//}
//
