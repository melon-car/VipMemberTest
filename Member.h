// ��ʉ���N���X�i��P�ŁF�w�b�_���j

#ifndef ___Member
#define ___Member

using namespace std;

//===== ��ʉ���N���X =====//
class Member {
    string full_name;   // ����
    int    number;          // ����ԍ�
    double weight;          // �̏d

public:
    //--- �R���X�g���N�^ ---//
    Member(const string& name, int no, double w);

    //--- �����擾�ifull_name�̃Q�b�^�j---//
    string name() const { return full_name; }

    //--- ����ԍ��擾�inumber�̃Q�b�^�j---//
    int no() const { return number; }

    //--- �̏d�擾�iweight�̃Q�b�^�j---//
    double get_weight() const { return weight; }

    //--- �̏d�ݒ�iweight�̃Z�b�^�j---//
    void set_weight(double w) { weight = (w > 0) ? w : 0; }

    //--- ������\��---//
    void print() const;
};

#endif
