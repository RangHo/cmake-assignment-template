#!/bin/sh

# Usage: ./clean.sh <workspace>

WORKSPACE=$1
if [ -z "$WORKSPACE" ]; then
    echo "Usage: $0 <workspace>"
    exit 2
fi

# Remove the build directory if it exists.
BUILD_DIR="$WORKSPACE/build"
if [ -d "$BUILD_DIR" ]; then
    rm -rf "$BUILD_DIR"
fi
