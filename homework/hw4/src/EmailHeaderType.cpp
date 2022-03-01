#include "EmailHeaderType.h"

EmailHeaderType::EmailHeaderType()
{
	header = "default";
	value = " ";
}
EmailHeaderType::EmailHeaderType(string a)
{
	
	header = a;
	value = " ";
 
}

void EmailHeaderType::setHeader(string n)
{
	header = n;
}

string EmailHeaderType::getHeader()
{
	return header;
}

string EmailHeaderType::getReceived()
{
	string regex_rule = "Received.*";
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
string EmailHeaderType::getContentType()
{
	string regex_rule = "Content-Type.*";
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
string EmailHeaderType::getDate()
{
	string regex_rule = "Date.*";
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
string EmailHeaderType::getFrom()
{
	string regex_rule = "From.*";
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
string EmailHeaderType::getCC()
{
	string regex_rule = "CC.*";
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
string EmailHeaderType::getTo()
{
	string regex_rule = "To.*";
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
string EmailHeaderType::getMessageID()
{
	string regex_rule = "Message-ID.*";
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
string EmailHeaderType::getSubject()
{
	string regex_rule = "Subject.*";
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

string EmailHeaderType::getCTE()
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
string EmailHeaderType::getGoogle()
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

string EmailHeaderType::getReplyto()
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
string EmailHeaderType::getMime()
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
string EmailHeaderType::getDeliveredTo()
{
	string regex_rule = "Delivered-To.*";
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