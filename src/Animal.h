#pragma once

namespace Zoo {

#define FMT_HEADER_ONLY

  class Animal {
  public:
    Animal() {}
    virtual ~Animal() {}

    virtual void Speak() = 0;
  };

  class Dog : public Animal {
  public:
    Dog() {}
    virtual ~Dog() {}

    virtual void Speak() override;
  };

} // namespace Zoo
