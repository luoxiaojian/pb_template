#include <iostream>
#include "example.pb.h"

int main() {
  ExampleMessage msg;

  msg.set_id(123);
  msg.set_name("Test");

  std::cout << "ID: " << msg.id() << "\n";
  std::cout << "Name: " << msg.name() << "\n";

  return 0;
}