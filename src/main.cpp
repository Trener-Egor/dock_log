#include <iostream>
#include <chrono>
#include "logger.hpp"
#include <thread>

int main()
{
	logger a;
	while(true)
	{
		a.log("logging string");
		std::this_thread::sleep_for(std::chrono::seconds(5));
	}
	return 0;
}
