#pragma once
#include "Scene.h"
//#include "Text.h"
class Puzzle_3 :
    public Scene
{
    virtual void Init() override;
    virtual void Update() override;
    virtual void Render(HDC _dc) override;
    virtual void Release() override;
private:
    bool m_puzzleOk = false;
    //Text* pText = new Text();
};

