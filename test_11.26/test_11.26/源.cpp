#define _CRT_SECURE_NO_WARNINGS
#include "test.h"

Person::Person()
{
	sex_ = "";
}

Person::~Person()
{

}

int Person::SetValue(const string& sex)
{
	sex_ = sex;
	return 0;
}

string& Person::GetValue()
{
	return sex_;
}

StuInfo::StuInfo()
{
	schoolname1_ = NULL;
	schoolname1_ = new char[20];
	memset(schoolname1_, '0', STUCOUNT);
	classname1_ = NULL;
	classname1_ = new char[20];
	memset(classname1_, '0', STUCOUNT);
	memset(stuname1_, '0', STUCOUNT);
}

StuInfo::~StuInfo()
{
	delete[] schoolname1_;
	delete[] classname1_;
}

int StuInfo::OnInit(const char* schoolname, char* classname, const char* stuname, const string& sex)
{
	strcpy(schoolname1_, schoolname);
	classname1_ = classname;
	strcpy(stuname1_, stuname);
	Person::SetValue(sex);

	return 0;
}


void StuInfo::printInfo()
{
	printf("%s-%s-%s-%s\n", schoolname1_, classname1_, stuname1_, Person::GetValue().c_str());
}



