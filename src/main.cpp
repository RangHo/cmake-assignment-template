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
  if (argc != 3) {
    std::cerr << "Usage: " << argv[0] << " <question> <testcases>" << std::endl;
    return 2;
  }

  // Make sure that argv[1] is a valid integer, and store it in the variable `target`.
  int question, testcases;
  try {
    question = std::stoi(argv[1]);
    testcases = std::stoi(argv[2]);
  } catch (const std::exception &e) {
    std::cerr << "Invalid command line arguments: " << e.what() << std::endl;
    return 2;
  }

  // Dispatch to the appropriate function based on the question number.
  for (int i = 0; i < testcases; i++) {
    switch (question) {
      // TODO: Add cases for each assignment, and call the appropriate functions.
      //
      // For example, if the question 1 is to add two integers, you might have:
    case 1: {
      int a, b;
      std::cin >> a >> b;
      std::cout << add(a, b) << std::endl;
      break;
    }

    default:
      std::cerr << "No such question: " << question << std::endl;
      return 1;
    }
  }

  return 0;
}
