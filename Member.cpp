// ��ʉ���N���X�i��P�ŁF�\�[�X���j

#include "stdafx.h"

using namespace std;

//--- �R���X�g���N�^ ---//
Member::Member(const string& name, int no, double w)
			   : full_name(name), number(no)
{
	set_weight(w);				// �̏d��ݒ�
}

//--- ������\�� ---//
void Member::print() const
{
	cout << "No." << number << "�F" << full_name << "�i" << weight << "kg�j\n";
}
