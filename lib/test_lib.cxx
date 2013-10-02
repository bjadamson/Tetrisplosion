#include <test_include.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

void test_fn(void) {
  std::cout << "test_fn()" << std::endl;
  sf::Window test(sf::VideoMode(800, 600), "TestProject");

  while (test.isOpen()) {
    sf::Event event;
    while(test.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        test.close();
      }
      test.display();
    }
  }
}
