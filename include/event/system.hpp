#ifndef EVENT_SYSTEM_HPP_ 
#define EVENT_SYSTEM_HPP_
#include "handle.hpp"
#include "filter.hpp"
#include <vector>

namespace sf {
class RenderWindow;
}  // namespace sf
namespace event {
struct Config {
  Config(sf::RenderWindow &window, std::vector<EventFilter> filters);

  sf::RenderWindow &window;
  std::vector<EventFilter> const filters;
};
struct System {
  virtual void enumerate(void) const = 0;
};

struct SfmlSystem : public System {
  SfmlSystem(Config const& config);
  virtual void enumerate(void) const override;
 private:
  
  sf::RenderWindow &window_;
  std::vector<EventFilter> const filters_;
};

}  // namespace event

#endif  // EVENT_SYSTEM_HPP_
