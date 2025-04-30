#pragma once
#ifndef STRUCTURE_HPP
#define STRUCTURE_HPP

#include "exported.hpp"
#include <utility>  // std::pair

class EXPORTED Structure {
 public:
  Structure() = default;
  Structure(int, int);

  ~Structure() = default;

  const std::pair<int, int>& getData() const;

 private:
  std::pair<int, int> data;
};

#endif  // STRUCTURE_HPP