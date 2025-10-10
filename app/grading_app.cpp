#include "grading/grading.hpp"

#include <iostream>

int
main()
{
  std::map<std::string, std::vector<int>> students = {
    { "Alice", { 80, 90, 100 } },
    { "Bob", { 59, 60, 61 } },
    { "Charlie", { 40, 50, 45 } }
  };

  auto passing = grading::get_passing_students(students);

  std::cout << "Passing students: ";
  for (const auto& name : passing) {
    std::cout << name << " ";
  }
  std::cout << std::endl;

  return 0;
}
