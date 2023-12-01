#include <boost/program_options/options_description.hpp>
#include <boost/program_options/option.hpp>
#include <boost/program_options/variables_map.hpp>
#include <boost/program_options/parsers.hpp>
namespace po = boost::program_options;

#include <boost/version.hpp>
#include <boost/config.hpp>
#include <iostream>
using namespace std;

void get_versions() {
    std::cout << "BOOST_VERSION           " << BOOST_VERSION           << "\n";
    std::cout << "BOOST_LIB_VERSION       " << BOOST_LIB_VERSION       << "\n";
    std::cout << "BOOST_PLATFORM          " << BOOST_PLATFORM          << "\n";
    std::cout << "BOOST_PLATFORM_CONFIG   " << BOOST_PLATFORM_CONFIG   << "\n";
    std::cout << "BOOST_COMPILER          " << BOOST_COMPILER          << "\n";
    #ifdef BOOST_LIBSTDCXX_VERSION
    std::cout << "BOOST_LIBSTDCXX_VERSION " << BOOST_LIBSTDCXX_VERSION << "\n";
    #endif
    #ifdef BOOST_LIBSTDCXX11
    std::cout << "Compiled with c++11 support enabled\n";
    #endif
    std::cout << "BOOST_STDLIB            " << BOOST_STDLIB            << "\n";
    std::cout << "BOOST_STDLIB_CONFIG     " << BOOST_STDLIB_CONFIG     << "\n";
}

int main(int argc, char** argv) {
	std::cout << "Hello World from docker\n";
//https://www.boost.org/doc/libs/1_42_0/doc/html/program_options/tutorial.html
// Declare the supported options.
po::options_description desc("Allowed options");
desc.add_options()
    ("help", "produce help message")
    ("version", "get version info")
;

po::variables_map vm;
po::store(po::parse_command_line(argc, argv, desc), vm);
po::notify(vm);    

if (vm.count("help")) {
    cout << desc << "\n";
    return 1;
}

if (vm.count("version")) {
    get_versions();
}
return 0;
}
