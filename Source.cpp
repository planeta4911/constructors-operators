#include "MyClass.h"


void main()
{
	MyClass m1;                 //�� ���������
	MyClass m2 = MyClass(m1); //����������� �����������
	MyClass mcl3 = m2;          //����������� �����������
	m1 = m2;                  //���������� ������������
	m1 = MyClass(m1);         //������������ �������������
}