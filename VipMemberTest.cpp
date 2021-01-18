// VipMemberTest.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

using namespace std;

int main()
{
    VipMember mineya("峰屋龍次", 17, 89.2, "会費全額免除");
    VipMember tako("タコ助", 99, 12.8, "3ヶ月無料");
//  Member tako("タコ助", 99, 12.8);
//  VipMember mineya("峰屋龍次", 17, 89.2, "");

    VipMember *mp1 = &mineya;
    double weight = mp1->get_weight();    // 峰屋君の体重
//  double weight = mineya.get_weight();    // 峰屋君の体重
    cout << "コンストラクタで設定された体重は" << weight << "kgです。\n";
    mineya.set_weight(weight - 15.3);       // 峰屋君の体重を更新（15.3kg減量）

    cout << "会員番号" << mineya.no() << "の" << mineya.name()
         << "さんの減量後の体重は" << mineya.get_weight() << "kgで"
         << "特典は" << mineya.get_privilege() << "です。\n\n";
    cout << "タコ助の会員番号は" << tako.no() << "です。\n";
    cout << "タコ助の体重は" << tako.get_weight() << "kgです。\n";
    cout << "タコ助の特典は" << tako.get_privilege() << "です。\n";
}
