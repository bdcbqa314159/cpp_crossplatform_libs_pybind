#include "structure.hpp"

Structure::Structure(int a, int b) : data(a, b) {}

const std::pair<int, int>& Structure::getData() const { return data; }
