#include "my_plugin_test.hpp"

#include "plugin/includes/my_plugin.hpp"

int main() {
  run();
  return 0;
}

void run() {
  dlloader::DLLoader<Processor> my_library_loader(LIBRARY_NAME, "allocator",
                                                  "deallocator");

  my_library_loader.DLOpenLib();

  std::shared_ptr<Processor> my_library_functions =
      my_library_loader.DLGetInstance();

  int result = my_library_functions->operator()(1, 2);
  std::cout << "Result of operation: " << result << "\n";
}
