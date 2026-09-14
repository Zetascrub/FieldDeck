cmake_minimum_required(VERSION 3.20)
project(fielddeck_native_tests LANGUAGES CXX)
enable_testing()

function(fielddeck_test name source)
  add_executable(${name} ${source})
  target_compile_features(${name} PRIVATE cxx_std_17)
  target_compile_options(${name} PRIVATE -Wall -Wextra -Wpedantic -Werror)
  add_test(NAME ${name} COMMAND ${name})
endfunction()

fielddeck_test(fielddeck_rf_history rf_history_tests.cpp)
fielddeck_test(fielddeck_checked_file checked_file_print_tests.cpp)
target_include_directories(fielddeck_checked_file PRIVATE cardputer_mocks)
fielddeck_test(fielddeck_ndef_content ndef_content_tests.cpp)

add_executable(fielddeck_scan cardputer_scan_tests.cpp
  ../src/network_host_scan_service.cpp ../src/network_port_scan_service.cpp)
target_include_directories(fielddeck_scan PRIVATE cardputer_mocks)
target_compile_features(fielddeck_scan PRIVATE cxx_std_17)
target_compile_options(fielddeck_scan PRIVATE -Wall -Wextra -Wpedantic -Werror)
add_test(NAME fielddeck_scan COMMAND fielddeck_scan)
