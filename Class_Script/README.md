
# CPP
Starting CPP for 42 Cursus



# C++ Class Generator Script

## Description

This Bash script automates the process of creating basic C++ class files. It generates a `.hpp` header file and a `.cpp` source file with a default constructor, copy constructor, copy assignment operator, and a destructor for the specified class. The script ensures that files with the same name do not already exist before creation to prevent overwriting.

## Features

- Interactive command-line interface
- Generates `.hpp` and `.cpp` files with pre-defined templates
- Protection against overwriting existing files
- Simple error handling for empty input or exit command

## Requirements

To use this script, you need:
- A Unix-like operating system with a Bash shell
- Write permissions in the directory where the script is executed

## Installation

No installation is needed. Simply download the script and ensure it is executable:

```bash
chmod +x class_generator.sh
Usage
Run the script from the terminal:

./class_generator.sh

Or to use without chmod 
terminal>$ bash class_generator.sh


Follow the interactive prompts:

Enter the desired class name without an extension.
If you want to exit the script, type exit.
The script will create two files: <class_name>.hpp and <class_name>.cpp, with basic C++ class structure 
    in Orthodox Canonical Structure.

Example

Enter the file name (without extension or exit to exit):
MyClass
Created file: MyClass.hpp
Created file: MyClass.cpp
The above will generate MyClass.hpp and MyClass.cpp with predefined class templates.

Contributing
Feel free to fork this project and submit a pull request with your improvements!

License
This script is provided under the MIT License.

Acknowledgments
This script was created to simplify the process of C++ class file creation during development.
