#include "operations.hpp"

int Operation::operator()(const Structure& structure) const {
  // Perform some operation on the structure
  return structure.getData().first + structure.getData().second;
}