#include <iostream>

//BUILD_TYPEについて
#if !defined(BUILD_TYPE)
	#define BUILD_TYPE "<None>"
#endif

int main(){
	std::cout << "Hello, World" << std::endl;
	std::cout << "BUILD_TYPE=" BUILD_TYPE << std::endl;
}
