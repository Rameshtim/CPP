#!/bin/bash

while true; do
    echo "Enter the file name (without extension or exit to exit):"
    read class_name
    if [ "$class_name" == "exit" ]; then
        echo "Exiting..."
        exit 0
    fi

	if [ -z "$class_name" ]; then
		echo "Error: Class name is empty."
		continue
	fi
	cpp_file="${class_name}.cpp"
    hpp_file="${class_name}.hpp"
	if [ -e  "$hpp_file" ] || [ -e "$cpp_file" ]; then
		echo "Error: Files already exist. Choose another name"
		continue
	fi

	# For .HPP File

    echo "#ifndef $(echo $class_name | tr 'a-z' 'A-Z')_HPP" > "$hpp_file"
    echo "# define $(echo $class_name | tr 'a-z' 'A-Z')_HPP" >> "$hpp_file"

    echo "" >> "$hpp_file"
    echo "using std::cout;" >> "$hpp_file"
    echo "using std::endl;" >> "$hpp_file"

    echo "" >> "$hpp_file"
    echo "class $class_name {" >> "$hpp_file"
    echo "" >> "$hpp_file"
    echo "  public:" >> "$hpp_file"
    echo "      $class_name(void);" >> "$hpp_file"
    echo "      $class_name(const $class_name &to_copy);" >> "$hpp_file"
    echo "      $class_name& operator=(const $class_name &original);" >> "$hpp_file"
    echo "      ~$class_name(void);" >> "$hpp_file"
    echo "};" >> "$hpp_file"
    echo "" >> "$hpp_file"

    echo "#endif" >> "$hpp_file"


    # For .CPP File

    echo "#include \"${class_name}.hpp\"" > "$cpp_file"
    echo "" >> "$cpp_file"
    echo "$class_name::$class_name(void) {" >> "$cpp_file"
    echo " //std::cout << \"$class_name Default Constructor called\" << std::endl;" >> "$cpp_file"
    echo "}" >> "$cpp_file"
    echo "" >> "$cpp_file"
    echo "$class_name::~$class_name(void) {" >> "$cpp_file"
    echo " //std::cout << \"$class_name Default Destructor called\" << std::endl;" >> "$cpp_file"
    echo "}" >> "$cpp_file"
    echo "" >> "$cpp_file"
    echo "$class_name::$class_name(const $class_name &to_copy) {" >> "$cpp_file"
    echo "  //std::cout << \"$class_name Copy Constructor called\" << std::endl;" >> "$cpp_file"
    echo "}" >> "$cpp_file"
    echo "" >> "$cpp_file"
    echo "$class_name& $class_name::operator=(const $class_name &other) {" >> "$cpp_file"
    echo "  //std::cout << \"$class_name Copy Assignment operator called\" << std::endl;" >> "$cpp_file"
    echo "  return *this;" >> "$cpp_file"
    echo "}" >> "$cpp_file"


    echo "Created file: ${class_name}.hpp"
    echo "Created file: ${class_name}.cpp"
done




