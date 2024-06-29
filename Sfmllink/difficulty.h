#pragma once
#include <SFML\Graphics.hpp>

using namespace std;
using namespace sf;

class difficulty
{
public:

	Text diff[3];

	difficulty(float width, float height);

	void draw(RenderWindow& window);

	void MoveUp();

	void MoveDown();

	void SetSelected(int n);

	int pressed() {

		return selected;
	}
	~difficulty();

private:
	int selected;

	Font font;

};