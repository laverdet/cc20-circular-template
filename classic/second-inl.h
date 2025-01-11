#pragma once
#include "first.h"
#include "first-inl.h"
#include "second.h"

template <class Type>
auto second(bool nothing) -> Type {
  if (nothing) {
    first<Type>(false);
  }
  return 0;
}
