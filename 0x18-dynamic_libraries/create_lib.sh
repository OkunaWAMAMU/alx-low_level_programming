#!/bin/bash

# Name of the output library
output_lib="liball.so"

# Find all .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

# Check if there are any .c files
if [ -z "$c_files" ]; then
  echo "No .c files found in the current directory."
  exit 1
fi

# Compile each .c file into an object file
object_files=""
for c_file in $c_files; do
  object_file="${c_file%.c}.o"
  gcc -c -fPIC "$c_file" -o "$object_file"
  if [ $? -ne 0 ]; then
    echo "Compilation failed for $c_file"
    exit 1
  fi
  object_files="$object_files $object_file"
done

# Create the shared library from the object files
gcc -shared -o "$output_lib" $object_files
if [ $? -ne 0 ]; then
  echo "Failed to create the shared library."
  exit 1
fi

# Cleanup object files
rm -f $object_files

echo "Shared library $output_lib created successfully."
