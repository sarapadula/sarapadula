#include "OutlookHeaderType.h"
OutlookHeaderType::OutlookHeaderType(string a)
{
	header = a;
	part = " ";
	regex_rule = " ";
}

void OutlookHeaderType::setHeader(string a)
{
	header = a;
}

string OutlookHeaderType::getHeader()
{
	return header;
}

