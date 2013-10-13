#ifndef EVENT_FILTER_HPP_
#define EVENT_FILTER_HPP_
#include "handle.hpp"
#include "event.hpp"
#include <vector>
namespace event {
struct HandleFactory;

struct Filter {
  virtual ~Filter(void) { }
  virtual bool send_events(std::vector<Event> const events) const = 0;
};

struct EventFilter : public Filter {
  EventFilter(HandleFactory const& hf, sf::Event::EventType const type);
  EventFilter(HandleFactory const& hf,
      std::vector<sf::Event::EventType> types);
  Handle register_filter(void);
  void unregister(Handle const handle);
  bool send_events(std::vector<Event> const events) const override;
 private:
  HandleFactory const& handle_factory_;
  std::vector<sf::Event::EventType> const types_;
  std::vector<Handle> handles_;
};

}  // namespace event
#endif // EVENT_FILTER_HPP_
