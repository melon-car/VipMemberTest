// 一般会員クラス（第１版：ソース部）

#include "stdafx.h"

using namespace std;

//--- コンストラクタ ---//
Member::Member(const string& name, int no, double w)
			   : full_name(name), number(no)
{
	set_weight(w);				// 体重を設定
}

//--- 会員情報表示 ---//
void Member::print() const
{
	cout << "No." << number << "：" << full_name << "（" << weight << "kg）\n";
}
