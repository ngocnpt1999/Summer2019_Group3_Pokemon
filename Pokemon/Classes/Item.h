#pragma once
#include "cocos2d.h"
#include "MyObject.h"

using namespace cocos2d;

class Item : public MyObject
{
public:
	Item();
	~Item();
	void Init(int id) override;
	int GetGold();
	string GetName();
	void SetGold(int gold);
	void SetName(string name);
	int GetNumber();
	void SetNumber(int index);
	string GetDescribe();
	int GetId();
protected:
	int m_id;
	string m_describe;
	string m_name;
	int m_gold;
	int m_number;
};