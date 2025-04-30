#include <iostream>

#include "dl_loader"   // IWYU pragma: keep
#include "operations"  // IWYU pragma: keep

int main() {
  std::cout << "working with dynamic loading...\n";

  Structure structure(1, 2);
  Operation operation;
  int result = operation(structure);

  std::cout << "Result of operation: " << result << "\n";

  return 0;
}