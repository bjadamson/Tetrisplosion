#ifndef EVENT_FILTER_INL_HPP_
#define EVENT_FILTER_INL_HPP_
#include <event/filter_source.hpp>
#include <event/handle.hpp>

using sf::Event::EventType;
using std::function;

namespace event {
//===----------------------------------------------------------------------===//
// Filter
//===----------------------------------------------------------------------===//
template<typename EventType>
Filter::Filter(HandleFactory const& hf) : handle_factory_(hf) {
}

template<typename EventType>
Handle Filter::register(void) {
  return handle_factory_.build();
}

template<typename EventType>
void Filter::unregister(Handle const handle) {
  // TODO(@anyone) implement.
}

template<typename EventType>
bool Filter::send_events(std::vector<Event> const events) const {
  for (auto const& event : events) {
    // TODO(@anyone) implement
  }
  return false;
}
}  // namespace event

#endif  // EVENT_FILTER_INL_HPP_
