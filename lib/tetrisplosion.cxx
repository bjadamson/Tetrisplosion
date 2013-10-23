#include <tetrisplosion.hpp>
#include <window_config.hpp>

using event::System;

namespace tet {
//===----------------------------------------------------------------------===//
// TetrisplosionConfig
//===----------------------------------------------------------------------===//
TetrisplosionConfig::TetrisplosionConfig(WindowConfig const& wc,
    MenuConfig const& mc) : window_config(wc), menu_config(mc) {
}
//===----------------------------------------------------------------------===//
// Tetrisplosion
//===----------------------------------------------------------------------===//
Tetrisplosion::Tetrisplosion(TetrisplosionConfig const& tc,
  event::Config const& ec) : tc_(tc),
    //window_(sf::VideoMode(tc.window_config.width.get(),
    //tc.window_config.height.get()), tc.window_config.title.get()),
    window_(ec.window),
    event_system_(ec) {
  //EventFilter filt(sf::Keyboard, 
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
