#!/bin/bash

# Define the directory path
directory_path="."

# Loop through each file in the directory
for filename in "$directory_path"/*; do
    if [[ $filename =~ \[([0-9]+)\]\ .* ]]; then
        # Extract digit part
        digit="${BASH_REMATCH[1]}"
        # New filename
        new_filename="${digit}.cpp"
        # Rename the file
        mv "$filename" "$directory_path/$new_filename"
    fi
done