# About

This repository is just a start up for a project. It includes a Makefile to compile the project together with a set of external libraries (including ROOT). 

# Overview 
After building the project, you can run the `main` executable that the Makefile produces. It takes a path to a CSV file as an argument. It can also produce a help message describing the CLI when passing in -h or --help. 

# Build instructions 

The following commands should be executed from the root directory of the demonstration.

## Build and install the required libraries
``` sh

# first make a directory for where you will place the libraries
mkdir dependencies

# Download the external library responsible for handling command line arguments into the directory. here you can use 

git clone 

#for each of the following libraries

git@github.com:adishavit/argh.git
git@github.com:HowardHinnant/date.git
git@github.com:ben-strasser/fast-cpp-csv-parser.git
git@github.com:fmtlib/fmt.git

#now make another directory called external and place a subdirectory within it called include where you will place necessary header files from the downloaded libraries. 

mkdir external 
cd external 
mkdir include 

# move the header file argh.h out of the argh library, the date.h out of the date library, the csv.h out of fast-cpp-csv-parser, the core.h and format.h out of fmt. Place these files in the external/include directory. 
```

## Build the project demo 

Having followed the previous instructions you can build and run the project as (remember that you need to be in the container environment to have access to ROOT!)

``` sh
# first you must extract the file needed from the datasets.tgz in the directory datasets 
cd datasets 
#extract using
tar zxvf datasets.tgz
# go back to parent directory 
cd ..
# and build the project 
make 
# run main 
./main --input-file datasets/smhi-opendata_1_53430_20231007_155558_Lund.csv 

```


