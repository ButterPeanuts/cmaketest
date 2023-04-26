#include <iostream>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include "temp.hpp"

//BUILD_TYPEについて
#if !defined(BUILD_TYPE)
	#define BUILD_TYPE "<None>"
#endif

int main(){
	auto logger = spdlog::basic_logger_mt("logger", "log/log.log");
	logger -> set_level(spdlog::level::debug);
	std::cout << "Hello, World" << std::endl;
	std::cout << "BUILD_TYPE=" BUILD_TYPE << std::endl;
	spdlog::info("Hello, World");
	logger->info("Hello, World");
	logger->debug("That is japanse true KUSA movie.");
	goodbye_world();
}
