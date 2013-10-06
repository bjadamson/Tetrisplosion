#ifndef TETRISPLOSION_HPP_
#define TETRISPLOSION_HPP_

namespace tet {
struct WindowConfig;
struct MenuConfig;
struct Tetrisplosion {
  Tetrisplosion(WindowConfig const& wc, MenuConfig const& mc);
 private:
  WindowConfig const& wc_;
  MenuConfig const& mc_;
};

}  // namespace tet

#endif  // TETRISPLOSION_HPP_
