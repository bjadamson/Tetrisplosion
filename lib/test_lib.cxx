#include <test_include.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

void test_fn(void) {
  std::cout << "test_fn()" << std::endl;
  sf::RenderWindow test(sf::VideoMode(800, 600), "TestProject");

  sf::CircleShape shape(50);
  shape.setFillColor(sf::Color(150, 100, 255));

  while (test.isOpen()) {
    sf::Event event;
    while(test.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        test.close();
      }
      test.draw(shape);
      test.display();
    }
  }
}
