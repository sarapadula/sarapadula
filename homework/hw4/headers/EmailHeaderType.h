#pragma once

#include <string>
#include <regex>
using namespace std;
#ifndef EMAILHEADERTYPE_H_
#define EMAILHEADERTYPE_H_

class EmailHeaderType
{
protected:
	string myname;

public:
	EmailHeaderType();
	EmailHeaderType(string);

	string getEmailHeaderType();
	void setEmailHeaderType(string);
};

#endif EMAILHEADERTYPE_H_
