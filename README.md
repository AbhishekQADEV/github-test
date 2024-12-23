# Prodigy Build Project

This repository contains several algorithms implemented in C language, with good practices and standards. Moreover, it incorporates multiple data structures definitions for efficient computation. The codebase includes a setup for test cases as well as examples of command-line user interfaces. 

If anyone wishes to contribute, kindly refer to the `CONTRIBUTING.md` for the rules and guidelines.

## Prerequisites

* A C compiler, for example, GCC or Clang
* GNU Make build automation tool

For macOS:
```bash
brew install gcc
brew install make
```

For Ubuntu:
```bash
sudo apt-get install gcc
sudo apt-get install make
```

For Windows (via [MinGW](http://www.mingw.org/)):

1. Download MinGW installer from the website
2. Run the installer and choose `gcc` and `make` packages to install
3. Add the MinGW `bin` folder to your PATH

## Installation

After cloning/downloading the repository, navigate to the project directory. Compile the required file by invoking the compiler directly e.g., `gcc -o outputfile inputfile.c`.

Alternatively, if there's an associated makefile, run the `make` command.

## Usage

To run any algorithm:
```bash
./compiled_file
```
Replace `compiled_file` with the actual file you want to execute.

## Testing

To run any tests written, use the same command as above pointing it to the compiled test file.

## Deployments / CI / CD

Deployment processes, including continuous integration and continuous deployment, will be mentioned in the CI/CD pipeline respective section. 

## Environment Variables

At present, no environment variables are needed. If required in the future, a `.env.example` file will be added to the project, outlining the necessary variables.