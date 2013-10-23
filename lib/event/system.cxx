#include <event/system.hpp>
#include <event/filter.hpp>
#include <event/event.hpp>
#include <stdexcept>
#include <vector>

using Event = sf::Event::EventType;
using std::move;
using std::vector;

namespace event {
//===----------------------------------------------------------------------===//
// Config
//===----------------------------------------------------------------------===//
Config::Config(sf::RenderWindow &window, vector<EventFilter> filters)
    : window(window), filters(filters) {
}
//===----------------------------------------------------------------------===//
// SfmlSystem
//===----------------------------------------------------------------------===//
SfmlSystem::SfmlSystem(Config const& config)
    : window_(config.window), filters_(move(config.filters)) {
}

void SfmlSystem::enumerate(void) const {
  for (auto const& filter : filters_) {
    std::vector<Event> const empty_events;
    bool const result = filter.send_events(empty_events);
  }
  throw std::runtime_error("Unimplemented");
}

}  // namespace event
