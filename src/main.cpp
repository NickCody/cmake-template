#define FMT_HEADER_ONLY
#include <fmt/format.h>

#include "Animal.h"

auto main() -> int {
  Zoo::Dog dog;
  dog.Speak();
}
