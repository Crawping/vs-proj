#pragma once
#include "anim_util.h"

#include <gdiplus.h>
#include <string>
using namespace Gdiplus;
using namespace std;

class CWebPLoader
{
public:
    CWebPLoader();
    ~CWebPLoader();

    BOOL LoadImage(const wstring& strImg);

    Bitmap* GetFrameAt(UINT32 nIndex, UINT32& nDelayMS);

    UINT32 GetFrameCount() { return image.num_frames; }

    void CleanUp();

protected:
    AnimatedImage image;

    Bitmap* m_pBmp = NULL;

    UINT32 m_nPlays = 0;        //���ż���
    UINT32 m_nCurFrame = 0;     //��ǰ֡ID
    //UINT32 m_nCurPlays = 0;     //��ǰ���Ŵ���
};

