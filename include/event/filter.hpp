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

template<typename EventType>
struct EventFilter : public Filter {
  EventFilter(HandleFactory const& hf);
  Handle register_filter(void);
  void unregister(Handle const handle);
  bool send_events(std::vector<Event> const events) const;
 private:
  HandleFactory const& handle_factory_;
  std::vector<Handle> handles_;
};

}  // namespace event
#endif // EVENT_FILTER_HPP_
