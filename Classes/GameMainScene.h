#ifndef _GAME_MAIN_SCENE_H_
#define _GAME_MAIN_SCENE_H_

#include "cocos2d.h"
#include "GameObjHero.h"
#include "GameObjMap.h"
#include "GameMark.h"

USING_NS_CC;

// 主界面类
class GameMain : public cocos2d::Layer
{
public:
    
    GameObjHero* hero;
    
    virtual bool init();
    bool isover;
    virtual void onEnter();
    
    virtual void onExit();
    
    void isherodrop();
    void setover();
    GameObjMap * map;
    GameMark *gamemark;
    Sprite *gameover;
    static cocos2d::Scene* scene();
    
    void menuBackCallback(cocos2d::Ref* pSender);
    
    CREATE_FUNC(GameMain);
    
    void update(float time);
    
    void onEnterTransitionDidFinish();
    void onExitTransitionDidStart();
    
    bool isCollion(Point p1, Point p2, int w1, int h1, int w2, int h2);
};


#endif
