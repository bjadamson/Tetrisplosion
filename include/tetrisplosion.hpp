#ifndef TETRISPLOSION_HPP_
#define TETRISPLOSION_HPP_

#include <SFML/Graphics.hpp>
#include <event/system.hpp>

namespace event {
  struct Config;
}  // namespace event
namespace tet {
struct WindowConfig;
struct MenuConfig;
struct TetrisplosionConfig {
  TetrisplosionConfig(WindowConfig const& wc, MenuConfig const& mc);
  WindowConfig const& window_config;
  MenuConfig const& menu_config;
};
struct Tetrisplosion {
  Tetrisplosion(TetrisplosionConfig const& tc, event::Config const& ec);
  int run(void);

 private:
  //WindowConfig const& wc_;
  TetrisplosionConfig const& tc_;
  sf::RenderWindow &window_;
  event::SfmlSystem event_system_;
};

}  // namespace tet

#endif  // TETRISPLOSION_HPP_
