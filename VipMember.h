// �D�҉���N���X�i��P�ŁF�w�b�_���j

#ifndef ___VipMember
#define ___VipMember

using namespace std;

//===== �D�҉���N���X�i��P�ŁF�w�b�_���j=====//
class VipMember : public Member {
	string privilege;	// ���T

public:
	//--- �R���X�g���N�^ ---//
	VipMember(const string& name, int no, double w, const string& prv);

	//--- ������\��---//
	void print() const;

	//--- ���T�擾�iprivilege�̃Q�b�^�j---//
	string get_privilege() const { return privilege; }

	//--- ���T�ݒ�iprivilege�̃Z�b�^�j---//
	void set_privilege(const string& prv) {
		privilege = (prv != "") ? prv : "���o�^";
	}
};

#endif
