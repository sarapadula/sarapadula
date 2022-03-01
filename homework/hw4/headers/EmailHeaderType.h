#pragma once

#include <string>
#include <regex>
using namespace std;
#ifndef EMAILHEADERTYPE_H_
#define EMAILHEADERTYPE_H_

class EmailHeaderType
{


public:
	
	EmailHeaderType();
	EmailHeaderType(string);

	string header;
	string value;

	void setHeader(string);
	string getHeader();
	string getReceived();
	string getContentType();
	string getDate();
	string getFrom();
	string getCC();
	string getTo();
	string getMessageID();
	string getSubject();
	string getEmailHeaderType();
	string getCTE();
	void setEmailHeaderType(string);


	string getDeliveredTo();
	string getGoogle();
	string getReplyto();
	string getMime();
};

#endif EMAILHEADERTYPE_H_
