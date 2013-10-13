#ifndef TETRISPLOSION_HPP_
#define TETRISPLOSION_HPP_

#include <SFML/Graphics.hpp>
#include <event/system.hpp>

namespace tet {
struct WindowConfig;
struct MenuConfig;
struct Tetrisplosion {
  Tetrisplosion(WindowConfig const& wc, MenuConfig const& mc);
  int run(void);
 private:
  //WindowConfig const& wc_;
  MenuConfig const& mc_;
  sf::RenderWindow window_;
  event::SfmlSystem event_system_;
};

}  // namespace tet

#endif  // TETRISPLOSION_HPP_
