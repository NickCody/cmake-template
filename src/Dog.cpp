#include "Animal.h"
#include "fmt/format.h"

namespace Zoo {
  void Dog::Speak() {
    fmt::print("Woof!\n");
  }

} // namespace Zoo
