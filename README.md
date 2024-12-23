# Prodigy Build Project

[//]: # (Brief introduction)

This repository is a collection of algorithms in C along with data structures and test case setup. The programs include features from basic mathematical operations to creating and manipulating various data structures like Binary Search Trees, Linked Lists, etc.

## Prerequisites

The following software are required to run the programs locally:

* GCC or Clang - C language compiler
* GNU Make build automation tool

You can install them using the below commands:

For macOS, brew can be used to install:

```bash
brew install gcc
brew install make
```

For Ubuntu, use the following commands:

```bash
sudo apt-get install gcc
sudo apt-get install make
```

For Windows, the packages can be installed using [MinGW](http://www.mingw.org/):

1. Download MinGW installer from the website
2. Run the installer and choose `gcc` and `make` packages to install
3. Add the MinGW `bin` folder to your PATH

## Installation

Once you have cloned or downloaded the repository, navigate to the project directory from your terminal or command prompt. If the code has an associated makefile, you can compile it by simply running the `make` command.

```bash
make
```

In the absence of a makefile, use the following format to compile:

```bash
gcc -o outputfile inputfile.c
```

## Usage

To run any compiled C program, use the following format:

```bash
./compiled_file
```

Replace `compiled_file` with the actual file you want to run.

## Testing

To run any test cases defined in the repository, use the same command as above, pointing to the compiled test file.

## Deployments / CI / CD

Any details regarding Continuous Integration and Continuous Deployment processes will be documented in the respective CI/CD pipeline sections.

## Environment Variables

No environment variables are required to run the programs in this repository currently. If any are needed in future, a `.env.example` file will be created with necessary variable names mentioned.

For queries or contributions, refer to `CONTRIBUTING.md` for guidelines.

