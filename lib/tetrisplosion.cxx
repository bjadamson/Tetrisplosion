#include <tetrisplosion.hpp>
#include <window_config.hpp>

using event::System;

namespace tet {
Tetrisplosion::Tetrisplosion(WindowConfig const& wc, MenuConfig const& mc)
  : mc_(mc), window_(sf::VideoMode(wc.width.get(), wc.height.get()), wc.title.get()),
    event_system_(window_) {
}

int Tetrisplosion::run(void) {
  sf::CircleShape shape(150);
  shape.setFillColor(sf::Color(80, 80, 150));

  while(window_.isOpen()) {
    event_system_.enumerate();
    window_.draw(shape);
    window_.display();

    /*sf::Event event;
    while(window_.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window_.close();
      }
      window_.draw(shape);
      window_.display();
    }
    */
  }

}

}  // namespace tet
