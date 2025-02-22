#pragma once
#include <SFML\Graphics.hpp>

using namespace std;
using namespace sf;

class Menu
{
public:

	Text mainmenu[3];

	Menu(float width, float height);

	void draw(RenderWindow& window);

	void MoveUp();

	void MoveDown();

	void SetSelected(int n);

	int pressed() {

		return selected;
	}
	~Menu();

private:
	int selected;

	Font font;

};