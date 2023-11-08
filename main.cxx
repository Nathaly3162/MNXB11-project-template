#include <iostream>
#include "argh.h"
#include "csv.h"
#include "date.h"
#include "format.h"
#include "core.h"

int main(int argc, char *argv[]) {
  argh::parser cmdl(argc, argv); // Initialize the Argh parser

  cmdl.add_params({"-h", "--help"}); // Define help option

  cmdl.add_params({"-i", "--input-file"}); // Define input file option

  if (cmdl[ "--help" ]) {
    std::cout << "help"; // Display help message
    return 0;
  }

  std::string input_filename;
  if (cmdl[ "-i" ]) { 
    cmdl( "-i" ) >> input_filename; // Get the input CSV file name
    std::cout << "Input CSV file: " << input_filename << std::endl;
  } else {
    std::cerr << "Error: Input CSV file not specified." << std::endl;
    return 1;
  }


  return 0;
}
