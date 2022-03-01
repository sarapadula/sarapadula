#include "GmailHeaderType.h"
GmailHeaderType::GmailHeaderType(string a)
{
	header = a;
	value = " ";
}

void GmailHeaderType::setHeader(string a)
{
	header = a;
}

string GmailHeaderType::getHeader()
{
	return header;
}
string GmailHeaderType::getDeliveredTo()
{
	string regex_rule = "DeliveredTo.*";
	regex reg(regex_rule);
	sregex_iterator currentMatch(header.begin(), header.end(), reg);
	sregex_iterator lastMatch;
	while (currentMatch != lastMatch)
	{
		smatch match = *currentMatch;
		value = value + match.str() + '\n';
		currentMatch++;
	}
	return value;
}

string GmailHeaderType::getGoogle()
{
	string regex_rule = "X-Google-Smtp-Source.*";
	regex reg(regex_rule);
	sregex_iterator currentMatch(header.begin(), header.end(), reg);
	sregex_iterator lastMatch;
	while (currentMatch != lastMatch)
	{
		smatch match = *currentMatch;
		value = value + match.str() + '\n';
		currentMatch++;
	}
	return value;
}

string GmailHeaderType::getReplyto()
{
	string regex_rule = "Reply-To.*";
	regex reg(regex_rule);
	sregex_iterator currentMatch(header.begin(), header.end(), reg);
	sregex_iterator lastMatch;
	while (currentMatch != lastMatch)
	{
		smatch match = *currentMatch;
		value = value + match.str() + '\n';
		currentMatch++;
	}
	return value;
}
string GmailHeaderType::getMime()
{
	string regex_rule = "MIME-Version.*";
	regex reg(regex_rule);
	sregex_iterator currentMatch(header.begin(), header.end(), reg);
	sregex_iterator lastMatch;
	while (currentMatch != lastMatch)
	{
		smatch match = *currentMatch;
		value = value + match.str() + '\n';
		currentMatch++;
	}
	return value;
}
string GmailHeaderType::getCTE()
{
	string regex_rule = "Content-Transfer-Encoding.*";
	regex reg(regex_rule);
	sregex_iterator currentMatch(header.begin(), header.end(), reg);
	sregex_iterator lastMatch;
	while (currentMatch != lastMatch)
	{
		smatch match = *currentMatch;
		value = value + match.str() + '\n';
		currentMatch++;
	}
	return value;
}