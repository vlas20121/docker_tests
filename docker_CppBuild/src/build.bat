mkdir build
cd build
cmake .. > cmake.log
cmake --build . --config Release > make.log
ctest --config Release -VV
