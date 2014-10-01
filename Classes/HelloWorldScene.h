#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "BackgroundBoard.h"

USING_NS_CC;
USING_NS_CC_EXT;
using namespace ui;

class HelloWorld : public cocos2d::CCLayer
{
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::CCScene* scene();
    void startCallback(CCObject*,TouchEventType);
    // a selector callback
    void menuCloseCallback(CCObject* pSender);
	void menuCloseCallback2(CCObject* pSender);
    void addScore(int numLineCleared);
    // implement the "static node()" method manually
    CREATE_FUNC(HelloWorld);

private:
	BackgroundBoard* bg;
	UILabelAtlas* m_scoreLabel;
	UIButton*     m_btStart;
	int m_score;
};

#endif // __HELLOWORLD_SCENE_H__
