#include "OutlookHeaderType.h"

OutlookHeaderType::OutlookHeaderType(string a)
{
	
	header = a;
	value = " ";
}

void OutlookHeaderType::setHeader(string a)
{
	header = a;
}

string OutlookHeaderType::getHeader()
{
	return header;
}

string OutlookHeaderType::getAuthentication()
{
	string regex_rule = "Authentication-Results.*";
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

string OutlookHeaderType::getContentTr()
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
string OutlookHeaderType::getThreadTopic()
{
	string regex_rule = "Thread-Topic.*";
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
string OutlookHeaderType::getThreadIndex()
{
	string regex_rule = "Thread-Index.*";
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
string OutlookHeaderType::getReferences()
{
	string regex_rule = "References.*";
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
string OutlookHeaderType::getInReplyTo()
{
	string regex_rule = "In-Reply_to.*";
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

string OutlookHeaderType::getAcceptLanguage()
{
	string regex_rule = "Accept-Language.*";
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

string OutlookHeaderType::getContentLanguage()
{
	string regex_rule = "Content-Language.*";
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

string OutlookHeaderType::getHasAttach()
{
	string regex_rule = "X-MS-Has-Attach.*";
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

string OutlookHeaderType::getExchange()
{
	string regex_rule = "X-MS-Exchange-Organization.*";
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
