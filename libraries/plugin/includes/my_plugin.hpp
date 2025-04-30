#pragma once
#ifndef MY_PLUGIN_HPP
#define MY_PLUGIN_HPP

#include "code_cpp.hpp"    // IWYU pragma: keep
#include "exported.hpp"    // IWYU pragma: keep
#include "operations.hpp"  // IWYU pragma: keep
#include "structure.hpp"   // IWYU pragma: keep

class Processor {
 public:
  Processor() = default;
  ~Processor() = default;

  int operator()(int, int) const;
};

EXPORT_C {
  EXPORTED Processor *allocator();

  EXPORTED void deallocator(Processor * ptr);
}

#endif  // MY_PLUGIN_HPP