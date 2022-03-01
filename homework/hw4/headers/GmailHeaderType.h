#pragma once
#include "EmailHeaderType.h"
#ifndef GMAILHEADERTYPE_H_
#define GMAILHEADERTYPE_H_
class GmailHeaderType: public EmailHeaderType
{
public:
	string header;
	string value;

	GmailHeaderType(string);

	string getHeader();
	void setHeader(string);

	string getDeliveredTo();
	string getGoogle();
	string getReplyto();
	string getMime();
	string getCTE();

};

#endif GMAILHEADERTYPE_H_

