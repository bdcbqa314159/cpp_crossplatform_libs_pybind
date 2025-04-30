#pragma once
#ifndef OPERATION_HPP
#define OPERATION_HPP

#include "structure"  // IWYU pragma: keep

class Operation {
 public:
  Operation() = default;

  int operator()(const Structure&) const;
  ~Operation() = default;
};

#endif  // OPERATION_HPP