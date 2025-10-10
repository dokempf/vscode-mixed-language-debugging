#include "grading/grading.hpp"

#include <cmath>
#include <numeric>

namespace grading {

double
calculate_average(const std::vector<int>& grades)
{
  // Calculate the average of the grades.
  int total = std::accumulate(grades.begin(), grades.end(), 0);
  double average = static_cast<double>(total) / grades.size();
  return std::round(average * 100) / 100; // round to 2 decimals
}

std::vector<std::string>
get_passing_students(const std::map<std::string, std::vector<int>>& students)
{
  std::vector<std::string> passing;

  for (const auto& [name, grades] : students) {
    double avg = calculate_average(grades);
    if (avg > 60) {
      passing.push_back(name);
    }
  }

  return passing;
}

} // namespace grading
