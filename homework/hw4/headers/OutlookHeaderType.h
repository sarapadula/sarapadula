#pragma once

#include "EmailHeaderType.h"
class OutlookHeaderType: public EmailHeaderType
{
public:
	string header;
	string part;
	string regex_rule;

	OutlookHeaderType(string);

	string getHeader();
	void setHeader(string);


};

