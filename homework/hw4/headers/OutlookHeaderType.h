#pragma once
#include "EmailHeaderType.h"
#ifndef OUTLOOKHEADERTYPE_H_
#define OUTLOOKHEADERTYPE_H_
class OutlookHeaderType: public EmailHeaderType
{
public:
	string header;
	string value;

	
	OutlookHeaderType(string);

	string getHeader();
	void setHeader(string);

	string getAuthentication();
	string getContentTr();
	string getThreadTopic();
	string getThreadIndex();
	string getReferences();
	string getInReplyTo();
	string getAcceptLanguage();
	string getContentLanguage();
	string getHasAttach();
	string getExchange();

};
#endif OULOOKHEADERTYPE_H_

