#include <exception>
#include <iostream>
#include <string>

#include "solution.hpp"

/**
 * Entrypoint.
 */
int main(int argc, char *argv[]) {
  // Make sure that argv[1] is the question number to run, and that there are no
  // extra arguments. All inputs and outputs are to be passed through stdin and
  // stdout.
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <number>" << std::endl;
    return 2;
  }

  // Make sure that argv[1] is a valid integer, and store it in the variable `target`.
  int target;
  try {
    target = std::stoi(argv[1]);
  } catch (const std::exception &e) {
    std::cerr << "Invalid number: " << argv[1] << std::endl;
    return 2;
  }

  // Dispatch to the appropriate function based on the question number.
  switch (target) {
    // TODO: Add cases for each assignment, and call the appropriate functions.
    //
    // For example, if the question #5 is to add two integers, you might have:
    //
    //     case 5: {
    //         int a, b;
    //         std::cin >> a >> b;
    //         std::cout << add(a, b) << std::endl;
    //         break;
    //     }

  default:
    std::cerr << "No such assignment: " << target << std::endl;
    return 1;
  }

  return 0;
}
