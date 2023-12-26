#pragma once
#ifndef Validator_HPP
#define Validator_HPP

#include <iostream>
#include <fstream>
#include <string>

namespace ValidatorSystem
{
	class Validator {
		// Returns true when the date is a valid date.
		bool isValidDate(std::string input);
	
		// Returns true when input is a valid int.
		bool isValidInt(std::string input);
		
		// Returns true when input is a valid time.
		bool isValidTime(std::string input);




		
	
	}
}

#endif