// 一般会員クラス（第１版：ヘッダ部）

#ifndef ___Member
#define ___Member

using namespace std;

//===== 一般会員クラス =====//
class Member {
    string full_name;   // 氏名
    int    number;          // 会員番号
    double weight;          // 体重

public:
    //--- コンストラクタ ---//
    Member(const string& name, int no, double w);

    //--- 氏名取得（full_nameのゲッタ）---//
    string name() const { return full_name; }

    //--- 会員番号取得（numberのゲッタ）---//
    int no() const { return number; }

    //--- 体重取得（weightのゲッタ）---//
    double get_weight() const { return weight; }

    //--- 体重設定（weightのセッタ）---//
    void set_weight(double w) { weight = (w > 0) ? w : 0; }

    //--- 会員情報表示---//
    void print() const;
};

#endif
