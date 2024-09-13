#pragma once
#include <iostream>
#include <chrono>
#include <iomanip>

class logger
{	
public:
	logger(){}
	void log(const std::string& s)
	{
		auto now = std::chrono::system_clock::now();
		std::time_t time = std::chrono::system_clock::to_time_t(now);
		std::tm* time_info = std::localtime(&time);
		std::cout << "[" 
			  << std::setfill('0') << std::setw(2) << time_info->tm_hour << ":"
			  << std::setfill('0') << std::setw(2) << time_info->tm_min  << ":" 			     << std::setfill('0') << std::setw(2) << time_info->tm_sec  << "]   " << s << std::endl;
		
	}

};
