#pragma once
#ifndef OPERATION_HPP
#define OPERATION_HPP

#include "exported.hpp"
#include "structure"  // IWYU pragma: keep

class EXPORTED Operation {
 public:
  Operation() = default;

  int operator()(const Structure&) const;
  ~Operation() = default;
};

#endif  // OPERATION_HPP