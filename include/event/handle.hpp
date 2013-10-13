#ifndef EVENT_HANDLE_HPP_
#define EVENT_HANDLE_HPP_
#include <cstdint>

namespace event {
class Handle {
  friend class HandleFactory;
  explicit Handle(uint64_t const id);
  uint64_t const id_;
};

struct HandleFactory {
  HandleFactory(void);
  Handle Build(void);
 private:
  uint64_t index_;
};
}  // namespace event_

#endif  // EVENT_HANDLE_HPP_
