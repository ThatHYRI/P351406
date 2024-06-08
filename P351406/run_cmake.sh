#!/bin/bash

# Set the build directory
BUILD_DIR="build"

# Create build directory if it doesn't exist
mkdir -p $BUILD_DIR
cd $BUILD_DIR

# Run cmake and make
cmake ..
make
