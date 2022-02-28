#pragma once
#include "EmailHeaderType.h"
class GmailHeaderType
{
public:
	string header;
	string part;
	string regex_rule;

	GmailHeaderType(string);

	string getHeader();
	void setHeader(string);

};

