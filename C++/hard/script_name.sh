#!/bin/bash

# Define the directory path
directory_path="."

# Loop through each file in the directory
for filename in "$directory_path"/*; do
    if [[ $filename =~ \[([0-9]+)\]\ (.*)\ \[(.*?)\]\.cpp ]]; then
        # Extract digit part
        digit="${BASH_REMATCH[1]}"
        # Extract alpha part
        alpha="${BASH_REMATCH[2]}"
        # Extract characters within square brackets
        brackets="${BASH_REMATCH[3]}"
        # New filename
        new_filename="${digit}_${alpha}_${brackets}.cpp"
        # Rename the file
        mv "$filename" "$directory_path/$new_filename"
    fi
done
