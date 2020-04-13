#pragma once
#include <gdiplus.h>
#include <string>
using namespace Gdiplus;
using namespace std;

class CGifLoader
{
public:
    CGifLoader();
    ~CGifLoader();

    BOOL LoadImage(const wstring& strImg);

    Bitmap* GetFrameAt(UINT32 nIndex, UINT32& nDelayMS);

    UINT32 GetFrameCount() { return m_nFrameCount; }

    void CleanUp();

    std::wstring GetImageMimeType(Gdiplus::Bitmap* pBmp);

protected:
    Bitmap* m_pBmp = NULL;
    PropertyItem* m_pPropertyDelay = NULL;

    UINT32 m_nFrameCount = 0;
    UINT32 m_nPlays = 0;        //���ż���
    UINT32 m_nCurFrame = 0;     //��ǰ֡ID
    //UINT32 m_nCurPlays = 0;     //��ǰ���Ŵ���
};

