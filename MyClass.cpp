#include "MyClass.h"



MyClass::MyClass()
{
	field1 = 0;
}

MyClass::MyClass(const MyClass & mcl)
{
	field1 = mcl.field1;
}

MyClass::MyClass(MyClass && mcl)
{
	field1 = mcl.field1;
}

MyClass & MyClass::operator=(MyClass && rhs)
{
	field1 = rhs.field1;
	return *this;
}

MyClass & MyClass::operator=(const MyClass & rhs)
{
	field1 = rhs.field1;
	return *this;
}



