#ifndef __ROUTE1_H__
#define __ROUTE1_H__

#include "cocos2d.h"
#include "Pokemon.h"
#include "Trainer.h"
#include <math.h>
using namespace cocos2d;
using namespace std;
class Route1 : public cocos2d::Layer
{
private:
	Trainer * mPlayer;
	Sprite * mGateWay;
public:
	static cocos2d::Scene* createScene();
	static int previousScene;
	virtual bool init();
	bool onContactBegin(PhysicsContact & contact);
	void InitObject();
	void UpdateCamera();
	//void CreateButon();
	CREATE_FUNC(Route1);
	//void createPhysics();
	void update(float);
};

#endif