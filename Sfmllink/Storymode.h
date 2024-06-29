#pragma once
#include <SFML\Graphics.hpp>

using namespace std;
using namespace sf;

class Storymode
{
public:

	Text storymodemenu[3];

	Storymode(float width, float height);

	void draw(RenderWindow& window);

	void MoveUp();

	void MoveDown();

	void SetSelected(int n);

	int pressed() {

		return selected;
	}
	~Storymode();

private:
	int selected;

	Font font;

};

