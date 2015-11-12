#ifndef _GAME_MENU_SCENE_H_
#define _GAME_MENU_SCENE_H_

#include "cocos2d.h"

class GameMenu : public cocos2d::Layer
{
public:
    GameMenu();
    ~GameMenu();
    
    static cocos2d::Scene* scene();
    
    virtual bool init(); 
    virtual void onEnter();
    virtual void onExit();

    void menuEnter();
    
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    void menuNewGameCallback(cocos2d::Ref* pSender);
    
    void menuContinueCallback(cocos2d::Ref* pSender);
    
    void menuAboutCallback(cocos2d::Ref* pSender);
    
    void menuSoundCallback(cocos2d::Ref* pSender);
    
    void onEnterTransitionDidFinish();
    
    void onExitTransitionDidStart();
    
    CREATE_FUNC(GameMenu);

	bool issound;

	MenuItemImage* soundItem;     // 播放音乐菜单项
    
};

#endif
