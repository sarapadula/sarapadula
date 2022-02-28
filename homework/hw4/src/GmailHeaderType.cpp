#include "GmailHeaderType.h"
GmailHeaderType::GmailHeaderType(string a)
{
	header = a;
	part = " ";
	regex_rule = " ";
}

void GmailHeaderType::setHeader(string a)
{
	header = a;
}

string GmailHeaderType::getHeader()
{
	return header;
}

