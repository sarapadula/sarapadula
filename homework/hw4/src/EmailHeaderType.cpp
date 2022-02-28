#include "EmailHeaderType.h"
EmailHeaderType::EmailHeaderType()
{
	myname = "Shape:default-name";
}

EmailHeaderType::EmailHeaderType(string n)
{
	myname = n;
 
}

void EmailHeaderType::setEmailHeaderType(string n)
{
	myname = n;
}

string EmailHeaderType::getEmailHeaderType()
{
	return myname;
}
