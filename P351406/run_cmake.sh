#!/bin/bash

# Set the build directory
BUILD_DIR="build"

# Create the build directory if it doesn't exist
if [ ! -d "$BUILD_DIR" ]; then
    mkdir "$BUILD_DIR"
fi

# Change to the build directory
cd "$BUILD_DIR"

#make && build -b

# Run CMake and make
cmake ..
make
