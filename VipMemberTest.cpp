// VipMemberTest.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"

using namespace std;

int main()
{
    VipMember mineya("�􉮗���", 17, 89.2, "���S�z�Ə�");
    VipMember tako("�^�R��", 99, 12.8, "3��������");
//  Member tako("�^�R��", 99, 12.8);
//  VipMember mineya("�􉮗���", 17, 89.2, "");

    VipMember *mp1 = &mineya;
    double weight = mp1->get_weight();    // �􉮌N�̑̏d
//  double weight = mineya.get_weight();    // �􉮌N�̑̏d
    cout << "�R���X�g���N�^�Őݒ肳�ꂽ�̏d��" << weight << "kg�ł��B\n";
    mineya.set_weight(weight - 15.3);       // �􉮌N�̑̏d���X�V�i15.3kg���ʁj

    cout << "����ԍ�" << mineya.no() << "��" << mineya.name()
         << "����̌��ʌ�̑̏d��" << mineya.get_weight() << "kg��"
         << "���T��" << mineya.get_privilege() << "�ł��B\n\n";
    cout << "�^�R���̉���ԍ���" << tako.no() << "�ł��B\n";
    cout << "�^�R���̑̏d��" << tako.get_weight() << "kg�ł��B\n";
    cout << "�^�R���̓��T��" << tako.get_privilege() << "�ł��B\n";
}
