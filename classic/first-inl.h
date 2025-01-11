#pragma once
#include "first.h"
#include "second.h"
#include "second-inl.h"

template <class Type>
auto first(bool nothing) -> Type {
  if (nothing) {
    second<Type>(false);
  }
  return 0;
}
