#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/bernardocohen/repos/cppQuantFi/cpp/Xcode
  /usr/local/Cellar/cmake/3.20.5/bin/cmake -E cmake_symlink_library /Users/bernardocohen/repos/cppQuantFi/cpp/Xcode/Debug/libcppQuantFi.dylib /Users/bernardocohen/repos/cppQuantFi/cpp/Xcode/Debug/libcppQuantFi.dylib /Users/bernardocohen/repos/cppQuantFi/cpp/Xcode/Debug/libcppQuantFi.dylib
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/bernardocohen/repos/cppQuantFi/cpp/Xcode
  /usr/local/Cellar/cmake/3.20.5/bin/cmake -E cmake_symlink_library /Users/bernardocohen/repos/cppQuantFi/cpp/Xcode/Release/libcppQuantFi.dylib /Users/bernardocohen/repos/cppQuantFi/cpp/Xcode/Release/libcppQuantFi.dylib /Users/bernardocohen/repos/cppQuantFi/cpp/Xcode/Release/libcppQuantFi.dylib
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/bernardocohen/repos/cppQuantFi/cpp/Xcode
  /usr/local/Cellar/cmake/3.20.5/bin/cmake -E cmake_symlink_library /Users/bernardocohen/repos/cppQuantFi/cpp/Xcode/MinSizeRel/libcppQuantFi.dylib /Users/bernardocohen/repos/cppQuantFi/cpp/Xcode/MinSizeRel/libcppQuantFi.dylib /Users/bernardocohen/repos/cppQuantFi/cpp/Xcode/MinSizeRel/libcppQuantFi.dylib
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/bernardocohen/repos/cppQuantFi/cpp/Xcode
  /usr/local/Cellar/cmake/3.20.5/bin/cmake -E cmake_symlink_library /Users/bernardocohen/repos/cppQuantFi/cpp/Xcode/RelWithDebInfo/libcppQuantFi.dylib /Users/bernardocohen/repos/cppQuantFi/cpp/Xcode/RelWithDebInfo/libcppQuantFi.dylib /Users/bernardocohen/repos/cppQuantFi/cpp/Xcode/RelWithDebInfo/libcppQuantFi.dylib
fi

