#include <functional>
#include <iostream>

int main() {
  [out = std::ref(std::cout << "hello")]() { out.get() << "leo"; }();
}
