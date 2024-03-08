#!/bin/bash

# Create an array of example filenames
files=(
    "file.txt"
    "File.txt"
    "123.txt"
    "file123.txt"
    "file.txt.backup"
    "file"
    "123"
    "FILE.TXT"
)

# Loop through the array of filenames
for file in "${files[@]}"; do
    echo "Filename: $file"

    # Check if the filename is lowercase
    if [[ "$file" == *[[:lower:]]* ]]; then
        echo "  - Lowercase filename"
    fi

    # Check if the filename is uppercase
    if [[ "$file" == *[[:upper:]]* ]]; then
        echo "  - Uppercase filename"
    fi

    # Check if the filename contains numbers
    if [[ "$file" == *[[:digit:]]* ]]; then
        echo "  - Filename contains numbers"
    fi

    # Check if the filename is alphanumeric
    if [[ "$file" == *[[:alnum:]]* ]]; then
        echo "  - Alphanumeric filename"
    fi

    # Extract the file extension
    extension="${file##*.}"
    if [[ "$extension" != "$file" ]]; then
        echo "  - File extension: $extension"
    fi

    echo  # Add a blank line for readability
done
