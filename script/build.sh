#!/bin/sh

# Usage: ./build.sh <workspace>

WORKSPACE=$1
if [ -z "$WORKSPACE" ]; then
  echo "Usage: $0 <workspace>"
  exit 2
fi

# Check if CMake is installed.
if ! command -v cmake >/dev/null 2>&1; then
  echo "CMake is not installed. Please install CMake to build the project."
  exit 1
fi

# Build the project using CMake.
BUILD_DIR="$WORKSPACE/build"
cmake -S "$WORKSPACE" -B "$BUILD_DIR"
cmake --build "$BUILD_DIR" --clean-first --config Release
