#include "MyClass.h"


void main()
{
	MyClass m1;                 //по умолчанию
	MyClass m2 = MyClass(m1); //конструктор перемещения
	MyClass mcl3 = m2;          //конструктор копирования
	m1 = m2;                  //копирующее присваивание
	m1 = MyClass(m1);         //перемещающее присваиваание
}