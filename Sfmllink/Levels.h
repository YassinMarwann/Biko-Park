#pragma once
#include <SFML\Graphics.hpp>

using namespace std;
using namespace sf;

class Levels
{
public:
	Text levelnum[10];
	Levels(float width, float height);

	void draw(RenderWindow& window);
	void MoveLeft();
	void MoveRight();
	void SetSelected(int n);
	int pressed() {
		return selected;
	}
	~Levels();

private:
	int selected;
	Font font;

};


