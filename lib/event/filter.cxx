#include <event/filter.hpp>
#include <event/handle.hpp>

using EventType = sf::Event::EventType;
using std::vector;

namespace event {
//===----------------------------------------------------------------------===//
// Filter
//===----------------------------------------------------------------------===//
EventFilter::EventFilter(HandleFactory const& hf, EventType const type)
    : handle_factory_(hf), types_({type}) {
}

EventFilter::EventFilter(HandleFactory const& hf, vector<EventType> types)
    : handle_factory_(hf), types_(types) {
}

Handle EventFilter::register_filter(void) {
  // TODO(@anyone) implement.
  return handle_factory_.Build();
}

void EventFilter::unregister(Handle const handle) {
  // TODO(@anyone) implement.
}

bool EventFilter::send_events(std::vector<Event> const events) const {
  for (auto const& event : events) {
    // TODO(@anyone) implement
  }
  return false;
}
}  // namespace event
