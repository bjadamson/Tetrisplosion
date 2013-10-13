#include <event/handle.hpp>
#include <cstdint>

namespace event {
//===----------------------------------------------------------------------===//
// Handle
//===----------------------------------------------------------------------===//
Handle::Handle(uint64_t const id) : id_(id) {
}

//===----------------------------------------------------------------------===//
// HandleFactory
//===----------------------------------------------------------------------===//
HandleFactory::HandleFactory(void) : index_(0U) {
}

Handle HandleFactory::Build(void) {
  return Handle(index_++);
}
}  // namespace event
