#pragma once

class MyClass
{
private:
	int field1;
public:
	MyClass();
	MyClass(const MyClass& mcl);
	MyClass(MyClass&& mcl);

	MyClass& operator=(MyClass&& rhs);
	MyClass& operator=(const MyClass& rhs);
};
