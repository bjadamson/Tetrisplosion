#ifndef EVENT_SYSTEM_HPP_ 
#define EVENT_SYSTEM_HPP_
#include "handle.hpp"
#include "filter.hpp"
#include <vector>

namespace sf {
class Window;
}  // namespace sf

namespace event {
struct System {
  virtual void add_filter(Filter &&f) = 0;
  virtual void enumerate(void) const = 0;
};

struct SfmlSystem : public System {
  SfmlSystem(sf::Window &window);
  virtual void add_filter(Filter &&f) override;
  virtual void enumerate(void) const override;
 private:
  sf::Window &window_;
  std::vector<Filter> filters_;
};

}  // namespace event

#endif  // EVENT_SYSTEM_HPP_
