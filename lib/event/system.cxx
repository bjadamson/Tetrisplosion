#include <event/system.hpp>
#include <event/filter.hpp>
#include <event/event.hpp>
#include <stdexcept>
#include <vector>

using Event = sf::Event::EventType;
using std::move;

namespace event {
SfmlSystem::SfmlSystem(sf::Window &window) : window_(window) {
}

void SfmlSystem::add_filter(EventFilter f) {
  filters_.push_back(move(f));
}

void SfmlSystem::enumerate(void) const {
  for (auto const& filter : filters_) {
    std::vector<Event> const empty_events;
    bool const result = filter.send_events(empty_events);
  }
  throw std::runtime_error("Unimplemented");
}

}  // namespace event
