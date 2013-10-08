#ifndef WINDOW_CONFIG_HPP_
#define WINDOW_CONFIG_HPP_
#include <string>

namespace tet {
struct WindowWidth {
  explicit WindowWidth(unsigned int const width_param);
  unsigned int get(void) const;
 private:
  unsigned int const width_;
};
struct WindowHeight {
  explicit WindowHeight(unsigned int const height_param);
  unsigned int get(void) const;
 private:
  unsigned int const height_;
};
struct WindowTitle {
  explicit WindowTitle(std::string title_param);
  std::string get(void) const;
 private:
  std::string const title_;
};
struct WindowConfig {
  WindowConfig(WindowWidth width, WindowHeight height, WindowTitle title);

  WindowWidth const width;
  WindowHeight const height;
  WindowTitle const title;
};

}  // namespace tet
#endif  // WINDOW_CONFIG_HPP_
