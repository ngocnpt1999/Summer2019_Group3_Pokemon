#include"ThunderShock.h"

ThunderShock::ThunderShock()
{
}

ThunderShock::~ThunderShock()
{
}

void ThunderShock::Init()
{
	Skill::SetName("Thunder Shock");
	Skill::SetTypeName("Electric");
	Skill::SetPower(40);
	Skill::SetMaxPP(35);
	Skill::SetIdType(5);
	Skill::SetCurrentPP(35);
}

