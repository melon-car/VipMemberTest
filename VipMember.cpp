// �D�҉���N���X�i��P�ŁF�\�[�X���j

#include "stdafx.h"

using namespace std;

//--- �R���X�g���N�^ ---//
VipMember::VipMember(const string& name, int no, double w, const string& prv)
                    : Member(name, no, w)
{
    set_privilege(prv);   // ���T��ݒ�
}

//--- ������\�� ---//
void VipMember::print() const
{
    cout << "No." << no() << "�F" << name() << "�i" << get_weight() << "kg�j"
         << "���T��" << privilege << '\n';
}
