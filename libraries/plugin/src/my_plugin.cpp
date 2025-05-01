#include "my_plugin.hpp"  // IWYU pragma: keep

int Processor::operator()(int a, int b) const {
  Structure structure(a, b);
  Operation operation;
  int result = operation(structure);
  return result;
}

Processor *allocator() { return new Processor(); }

void deallocator(Processor *ptr) { delete ptr; }