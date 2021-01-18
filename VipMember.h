// 優待会員クラス（第１版：ヘッダ部）

#ifndef ___VipMember
#define ___VipMember

using namespace std;

//===== 優待会員クラス（第１版：ヘッダ部）=====//
class VipMember : public Member {
	string privilege;	// 特典

public:
	//--- コンストラクタ ---//
	VipMember(const string& name, int no, double w, const string& prv);

	//--- 会員情報表示---//
	void print() const;

	//--- 特典取得（privilegeのゲッタ）---//
	string get_privilege() const { return privilege; }

	//--- 特典設定（privilegeのセッタ）---//
	void set_privilege(const string& prv) {
		privilege = (prv != "") ? prv : "未登録";
	}
};

#endif
