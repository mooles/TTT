#pragma once
#include <SFML/Window/Mouse.hpp>
#include <SFML/Graphics.hpp>

/*
* a class made for clicking on things
*/
class ClickBox
{
public:
	sf::Vector2i bounds;

	ClickBox(int, int, int, int);
	void update(sf::RenderWindow window);
	sf::Vector2i clickAction();
	bool check();

private:
	sf::Rect<int> boundbox;
};