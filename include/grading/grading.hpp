#pragma once

#include <map>
#include <string>
#include <vector>
namespace grading {

std::vector<std::string>
get_passing_students(const std::map<std::string, std::vector<int>>& students);

} // namespace grading
