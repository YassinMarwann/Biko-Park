//#pragma once
//#include "Initialization.h"
//#include "player struct.h"
//
//
//
//void player_collision(RenderWindow& window, Player& Thief, Player& Scientist, Player& Builder, Player& Astronaut, int& timer1, int& timer2, int& timer3, int& timer4, int touching[4]) {
//
//	//bool a = 0, b = 0, c = 0, d = 0;
//	//int t = 200;
//
//	////cases sha8ala (when first is under second)
//	//a_b = 0;
//	//a_s = 0;
//	//t_s = 0;
//	//t_b = 0;
//	//t_a = 0;
//	//s_b = 0;
//
//
//	////cases mesh sha8ala (when first is under second)
//	//s_t = 0; s_a = 0; b_t = 0; b_s = 0; b_a = 0; a_t = 0;
//
//	////bool c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0;
//
//
//
//
//
//
//
//	//		//PLAYERS COLLISION WITH EACH OTHER ....//////////////////////////////////////////////////////////////////
//
//
//
//	//		//theif collision with builder
//	//if (Keyboard::isKeyPressed(Keyboard::I) || Keyboard::isKeyPressed(Keyboard::J) || Keyboard::isKeyPressed(Keyboard::L) || timer3 < t || touching[2] == 0 || c == 1) {
//
//	//	if (Builder.pico.getGlobalBounds().intersects(Thief.pico.getGlobalBounds())) {
//
//	//		if (Builder.rect.left + 20 <= Thief.rect.left || Builder.rect.left + 21 <= Thief.rect.left) {
//
//	//			Builder.rect.left = Thief.rect.left - 36;
//
//	//		}
//
//
//	//		else {
//	//			Builder.onground = 0;
//	//			Builder.move_y = 0;
//	//			if (Builder.rect.top <= Thief.rect.top - 40) {
//	//				Builder.move_y = 0;
//	//				t_b = 1;
//	//				timer3 = 0;
//	//				if (Keyboard::isKeyPressed(Keyboard::I)) {
//
//	//					Builder.move_y = -0.4;
//	//					timer3 = 0;
//	//					c = 1;
//
//	//				}
//	//			}
//	//			else if (Builder.rect.left <= Thief.rect.left + 36 || Builder.rect.left <= Thief.rect.left + 37) {
//	//				Builder.onground = 1;
//	//				Builder.rect.left = Thief.rect.left + 37;
//	//			}
//
//
//
//	//		}
//	//		c = 0;
//	//	}
//
//	//}
//
//
//	//if (Keyboard::isKeyPressed(Keyboard::W) || Keyboard::isKeyPressed(Keyboard::A) || Keyboard::isKeyPressed(Keyboard::D) || timer1 < t || touching[0] == 0 || a == 1)
//	//{
//	//	if (t_b == 0) {
//	//		if (Thief.pico.getGlobalBounds().intersects(Builder.pico.getGlobalBounds())) {
//	//			if (Thief.rect.left + 20 <= Builder.rect.left || Thief.rect.left + 21 <= Builder.rect.left) {
//	//				Thief.rect.left = Builder.rect.left - 36;
//	//			}
//	//			else {
//	//				Thief.onground = 0;
//	//				Thief.move_y = 0;
//	//				if (Thief.rect.top <= Builder.rect.top - 40) {
//
//	//					Thief.move_y = 0;
//	//					b_t = 1;
//	//					timer1 = 0;
//	//					if (Keyboard::isKeyPressed(Keyboard::W)) {
//
//	//						Thief.move_y = -0.4;
//	//						timer1 = 0;
//	//						a = 1;
//
//	//					}
//	//				}
//
//	//				else if (Thief.rect.left <= Builder.rect.left + 36 || Thief.rect.left <= Builder.rect.left + 37) {
//	//					Thief.onground = 1;
//	//					Thief.rect.left = Builder.rect.left + 37;
//	//				}
//
//	//			}
//	//			a = 0;
//	//			/*c3 = 0;*/
//	//		}
//	//	}
//	//}
//
//	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	////thief collision with scientist
//
//	//if (Keyboard::isKeyPressed(Keyboard::T) || Keyboard::isKeyPressed(Keyboard::F) || Keyboard::isKeyPressed(Keyboard::H) || timer2 < t || touching[1] == 0 || b == 1) {
//
//	//	if (Scientist.pico.getGlobalBounds().intersects(Thief.pico.getGlobalBounds())) {
//
//	//		if (Scientist.rect.left + 20 <= Thief.rect.left || Scientist.rect.left + 21 <= Thief.rect.left) {
//
//	//			Scientist.rect.left = Thief.rect.left - 36;
//
//	//		}
//
//
//	//		else {
//	//			Scientist.onground = 0;
//	//			Scientist.move_y = 0;
//	//			if (Scientist.rect.top <= Thief.rect.top - 40) {
//	//				Scientist.move_y = 0;
//	//				t_s = 1;
//	//				timer2 = 0;
//	//				if (Keyboard::isKeyPressed(Keyboard::T)) {
//
//	//					Scientist.move_y = -0.4;
//	//					timer2 = 0;
//	//					b = 1;
//
//	//				}
//	//			}
//	//			else if (Scientist.rect.left <= Thief.rect.left + 36 || Scientist.rect.left <= Thief.rect.left + 37) {
//	//				Scientist.onground = 1;
//	//				Scientist.rect.left = Thief.rect.left + 37;
//	//			}
//
//	//		}
//	//		b = 0;
//	//	}
//
//	//}
//	//if (Keyboard::isKeyPressed(Keyboard::W) || Keyboard::isKeyPressed(Keyboard::A) || Keyboard::isKeyPressed(Keyboard::D) || timer1 < t || touching[0] == 0 || a == 1)
//	//{
//	//	if (t_s == 0 /*|| c1 == 1*/) {
//	//		if (Thief.pico.getGlobalBounds().intersects(Scientist.pico.getGlobalBounds())) {
//	//			if (Thief.rect.left + 20 <= Scientist.rect.left || Thief.rect.left + 21 <= Scientist.rect.left) {
//	//				Thief.rect.left = Scientist.rect.left - 36;
//	//			}
//	//			else {
//	//				Thief.onground = 0;
//	//				Thief.move_y = 0;
//	//				if (Thief.rect.top <= Scientist.rect.top - 40) {
//	//					Thief.move_y = 0;
//	//					s_t = 1;
//	//					timer1 = 0;
//	//					if (Keyboard::isKeyPressed(Keyboard::W)) {
//
//	//						Thief.move_y = -0.4;
//	//						timer1 = 0;
//	//						a = 1;
//
//	//					}
//	//				}
//
//	//				else if (Thief.rect.left <= Scientist.rect.left + 36 || Thief.rect.left <= Scientist.rect.left + 37) {
//	//					Thief.onground = 1;
//	//					Thief.rect.left = Scientist.rect.left + 37;
//	//				}
//
//	//			}
//	//			a = 0;
//	//			/*c1 = 0;*/
//	//		}
//	//	}
//	//}
//	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	////thief collision with Astronaut
//	//if (Keyboard::isKeyPressed(Keyboard::C) || Keyboard::isKeyPressed(Keyboard::V) || Keyboard::isKeyPressed(Keyboard::B) || timer4 < t || touching[3] == 0 || d == 1) {
//
//	//	if (Astronaut.pico.getGlobalBounds().intersects(Thief.pico.getGlobalBounds())) {
//
//	//		if (Astronaut.rect.left + 20 <= Thief.rect.left || Astronaut.rect.left + 21 <= Thief.rect.left) {
//
//	//			Astronaut.rect.left = Thief.rect.left - 36;
//
//	//		}
//
//
//	//		else {
//	//			Astronaut.onground = 0;
//	//			Astronaut.move_y = 0;
//	//			if (Astronaut.rect.top <= Thief.rect.top - 40) {
//	//				Astronaut.move_y = 0;
//	//				t_a = 1;
//	//				timer4 = 0;
//	//				if (Keyboard::isKeyPressed(Keyboard::V)) {
//
//	//					Astronaut.move_y = -0.4;
//	//					timer4 = 0;
//	//					d = 1;
//
//	//				}
//	//			}
//	//			else if (Astronaut.rect.left <= Thief.rect.left + 36 || Astronaut.rect.left <= Thief.rect.left + 37) {
//	//				Astronaut.onground = 1;
//	//				Astronaut.rect.left = Thief.rect.left + 37;
//	//			}
//
//
//	//		}
//	//		d = 0;
//	//	}
//
//	//}
//	//if (Keyboard::isKeyPressed(Keyboard::W) || Keyboard::isKeyPressed(Keyboard::A) || Keyboard::isKeyPressed(Keyboard::D) || timer1 < t || touching[0] == 0 || a == 1)
//	//{
//	//	if (t_a == 0 /*|| c6 == 1*/)
//	//	{
//	//		if (Thief.pico.getGlobalBounds().intersects(Astronaut.pico.getGlobalBounds())) {
//	//			if (Thief.rect.left + 20 <= Astronaut.rect.left || Thief.rect.left + 21 <= Astronaut.rect.left) {
//	//				Thief.rect.left = Astronaut.rect.left - 36;
//	//			}
//	//			else {
//	//				Thief.onground = 0;
//	//				Thief.move_y = 0;
//	//				if (Thief.rect.top <= Astronaut.rect.top - 40) {
//
//	//					Thief.move_y = 0;
//	//					a_t = 1;
//	//					timer1 = 0;
//	//					if (Keyboard::isKeyPressed(Keyboard::W)) {
//
//	//						Thief.move_y = -0.4;
//	//						timer1 = 0;
//	//						a = 1;
//
//	//					}
//	//				}
//
//	//				else if (Thief.rect.left <= Astronaut.rect.left + 36 || Thief.rect.left <= Astronaut.rect.left + 37) {
//	//					Thief.onground = 1;
//	//					Thief.rect.left = Astronaut.rect.left + 37;
//	//				}
//
//	//			}
//	//			a = 0;
//	//			/*c6 = 0;*/
//	//		}
//	//	}
//	//}
//	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	////builder collision with scientist
//
//
//	//if (Keyboard::isKeyPressed(Keyboard::I) || Keyboard::isKeyPressed(Keyboard::J) || Keyboard::isKeyPressed(Keyboard::L) || timer3 < t || touching[2] == 0 || c == 1) {
//
//	//	if (Builder.pico.getGlobalBounds().intersects(Scientist.pico.getGlobalBounds())) {
//
//	//		if (Builder.rect.left + 20 <= Scientist.rect.left || Builder.rect.left + 21 <= Scientist.rect.left) {
//
//	//			Builder.rect.left = Scientist.rect.left - 36;
//
//	//		}
//
//
//	//		else {
//	//			Builder.onground = 0;
//	//			Builder.move_y = 0;
//	//			if (Builder.rect.top <= Scientist.rect.top - 40) {
//	//				Builder.move_y = 0;
//	//				s_b = 1;
//	//				timer3 = 0;
//	//				if (Keyboard::isKeyPressed(Keyboard::I)) {
//
//	//					Builder.move_y = -0.4;
//	//					timer3 = 0;
//	//					c = 1;
//
//	//				}
//	//			}
//	//			else if (Builder.rect.left <= Scientist.rect.left + 36 || Builder.rect.left <= Scientist.rect.left + 37) {
//	//				Builder.onground = 1;
//	//				Builder.rect.left = Scientist.rect.left + 37;
//	//			}
//
//	//		}
//	//		c = 0;
//	//	}
//
//	//}
//	//if (Keyboard::isKeyPressed(Keyboard::T) || Keyboard::isKeyPressed(Keyboard::F) || Keyboard::isKeyPressed(Keyboard::H) || timer2 < t || touching[1] == 0 || b == 1)
//	//{
//	//	if (s_b == 0 /*|| c4 == 1*/) {
//	//		if (Scientist.pico.getGlobalBounds().intersects(Builder.pico.getGlobalBounds())) {
//	//			if (Scientist.rect.left + 20 <= Builder.rect.left || Scientist.rect.left + 21 <= Builder.rect.left) {
//	//				Scientist.rect.left = Builder.rect.left - 36;
//	//			}
//	//			else {
//	//				Scientist.onground = 0;
//	//				Scientist.move_y = 0;
//	//				if (Scientist.rect.top <= Builder.rect.top - 40) {
//
//	//					Scientist.move_y = 0;
//	//					b_s = 1;
//	//					timer2 = 0;
//	//					if (Keyboard::isKeyPressed(Keyboard::T)) {
//
//	//						Scientist.move_y = -0.4;
//	//						timer2 = 0;
//	//						b = 1;
//
//	//					}
//	//				}
//
//	//				else if (Scientist.rect.left <= Builder.rect.left + 36 || Scientist.rect.left <= Builder.rect.left + 37) {
//	//					Scientist.onground = 1;
//	//					Scientist.rect.left = Builder.rect.left + 37;
//	//				}
//
//	//			}
//	//			b = 0;
//	//			/*c4 = 0;*/
//	//		}
//	//	}
//	//}
//	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	////Builder collision with Astronaut
//	//if (Keyboard::isKeyPressed(Keyboard::I) || Keyboard::isKeyPressed(Keyboard::J) || Keyboard::isKeyPressed(Keyboard::L) || timer3 < t || touching[2] == 0 || c == 1) {
//
//	//	if (Builder.pico.getGlobalBounds().intersects(Astronaut.pico.getGlobalBounds())) {
//
//	//		if (Builder.rect.left + 20 <= Astronaut.rect.left || Builder.rect.left + 21 <= Astronaut.rect.left) {
//
//	//			Builder.rect.left = Astronaut.rect.left - 36;
//
//	//		}
//
//
//	//		else {
//	//			Builder.onground = 0;
//	//			Builder.move_y = 0;
//	//			if (Builder.rect.top <= Astronaut.rect.top - 40) {
//	//				Builder.move_y = 0;
//	//				a_b = 1;
//	//				timer3 = 0;
//	//				if (Keyboard::isKeyPressed(Keyboard::I)) {
//
//	//					Builder.move_y = -0.4;
//	//					timer3 = 0;
//	//					c = 1;
//
//	//				}
//	//			}
//	//			else if (Builder.rect.left <= Astronaut.rect.left + 36 || Builder.rect.left <= Astronaut.rect.left + 37) {
//	//				Builder.onground = 1;
//	//				Builder.rect.left = Astronaut.rect.left + 37;
//	//			}
//
//	//		}
//	//		c = 0;
//	//	}
//
//	//}
//	//if (Keyboard::isKeyPressed(Keyboard::C) || Keyboard::isKeyPressed(Keyboard::V) || Keyboard::isKeyPressed(Keyboard::B) || timer4 < t || touching[3] == 0 || d == 1)
//	//{
//	//	if (a_b == 0 /*|| c5 == 1*/) {
//	//		if (Astronaut.pico.getGlobalBounds().intersects(Builder.pico.getGlobalBounds())) {
//	//			if (Astronaut.rect.left + 20 <= Builder.rect.left || Astronaut.rect.left + 21 <= Builder.rect.left) {
//	//				Astronaut.rect.left = Builder.rect.left - 36;
//	//			}
//	//			else {
//	//				Astronaut.onground = 0;
//	//				Astronaut.move_y = 0;
//	//				if (Astronaut.rect.top <= Builder.rect.top - 40) {
//
//	//					Astronaut.move_y = 0;
//	//					b_a = 1;
//	//					timer4 = 0;
//	//					if (Keyboard::isKeyPressed(Keyboard::V)) {
//
//	//						Astronaut.move_y = -0.4;
//	//						timer4 = 0;
//	//						d = 1;
//
//	//					}
//	//				}
//
//	//				else if (Astronaut.rect.left <= Builder.rect.left + 36 || Astronaut.rect.left <= Builder.rect.left + 37) {
//	//					Astronaut.onground = 1;
//	//					Astronaut.rect.left = Builder.rect.left + 37;
//	//				}
//
//	//			}
//	//			d = 0;
//	//			/*c5 = 0;*/
//	//		}
//	//	}
//	//}
//	///////////////////////////////////////////////////////////////////////////////////////////////////////
//	////scientist collision with Astronaut
//	//if (Keyboard::isKeyPressed(Keyboard::F) || Keyboard::isKeyPressed(Keyboard::T) || Keyboard::isKeyPressed(Keyboard::H) || timer2 < t || touching[1] == 0 || b == 1) {
//
//	//	if (Scientist.pico.getGlobalBounds().intersects(Astronaut.pico.getGlobalBounds())) {
//
//	//		if (Scientist.rect.left + 20 <= Astronaut.rect.left || Scientist.rect.left + 21 <= Astronaut.rect.left) {
//
//	//			Scientist.rect.left = Astronaut.rect.left - 36;
//
//	//		}
//
//
//	//		else {
//	//			Scientist.onground = 0;
//	//			Scientist.move_y = 0;
//	//			if (Scientist.rect.top <= Astronaut.rect.top - 40) {
//	//				Scientist.move_y = 0;
//	//				a_s = 1;
//	//				timer2 = 0;
//	//				if (Keyboard::isKeyPressed(Keyboard::T)) {
//
//	//					Scientist.move_y = -0.4;
//	//					timer2 = 0;
//	//					b = 1;
//
//	//				}
//	//			}
//	//			else if (Scientist.rect.left <= Astronaut.rect.left + 36 || Scientist.rect.left <= Astronaut.rect.left + 37) {
//	//				Scientist.onground = 1;
//	//				Scientist.rect.left = Astronaut.rect.left + 37;
//	//			}
//
//	//		}
//	//		b = 0;
//	//	}
//
//	//}
//	//if (Keyboard::isKeyPressed(Keyboard::C) || Keyboard::isKeyPressed(Keyboard::V) || Keyboard::isKeyPressed(Keyboard::B) || timer4 < t || touching[3] == 0 || d == 1)
//	//{
//	//	if (a_s == 0 /*|| c2 == 1*/) {
//	//		if (Astronaut.pico.getGlobalBounds().intersects(Scientist.pico.getGlobalBounds())) {
//	//			if (Astronaut.rect.left + 20 <= Scientist.rect.left || Astronaut.rect.left + 21 <= Scientist.rect.left) {
//	//				Astronaut.rect.left = Scientist.rect.left - 36;
//	//			}
//	//			else
//	//			{
//	//				Astronaut.onground = 0;
//	//				Astronaut.move_y = 0;
//	//				if (Astronaut.rect.top <= Scientist.rect.top - 40) {
//
//	//					Astronaut.move_y = 0;
//	//					s_a = 1;
//	//					timer4 = 0;
//	//					if (Keyboard::isKeyPressed(Keyboard::V)) {
//
//	//						Astronaut.move_y = -0.4;
//	//						timer4 = 0;
//	//						d = 1;
//
//	//					}
//	//				}
//
//	//				else if (Astronaut.rect.left <= Scientist.rect.left + 36 || Astronaut.rect.left <= Scientist.rect.left + 37) {
//	//					Astronaut.onground = 1;
//	//					Astronaut.rect.left = Scientist.rect.left + 37;
//	//				}
//
//	//			}
//	//			d = 0;
//	//			/*c2 = 0;*/
//	//		}
//	//	}
//	//}
//
//
//	///*if(s_t == 1)
//	//	c1 = 1;
//
//	//if(s_a == 1)
//	//	c2 = 1;
//
//	//if(b_t == 1)
//	//	c3 = 1;
//
//	//if(b_s == 1)
//	//	c4 = 1;
//
//	//if(b_a == 1)
//	//	c5 = 1;
//
//	//if(a_t == 1)
//	//	c6 = 1;*/
//
//
//}