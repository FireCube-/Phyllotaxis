#include <SFML/Graphics.hpp>
#include <cmath>

int main()
{
	sf::RenderWindow window(sf::VideoMode(1000, 1000), "Phyllotaxis");
	window.setFramerateLimit(5);

	double n = 0;
	double c = 20;
	sf::CircleShape circle(8);

	window.clear();

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		double a = n * 2.3998;
		double r = c * sqrt(n);
		double x = r * cos(a) + 500;
		double y = r * sin(a) + 500;

		window.clear();

		circle.setPosition(x , y);
		window.draw(circle);

 		window.display();

		++n;
	}

	return 0;
}