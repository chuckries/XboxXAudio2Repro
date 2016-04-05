#include "pch.h"
#include "Class1.h"

using namespace XAudio2RuntimeComponnet;
using namespace Platform;

Class1::Class1()
{
}

void Class1::CreateXAudio2Stuff()
{
    NativeClass::CreateXAudio2Stuff();
}

void NativeClass::CreateXAudio2Stuff()
{
    HRESULT hr = S_OK;

    CComPtr<IXAudio2> pXAudio2;
    hr = XAudio2Create(&pXAudio2);
    if (FAILED(hr))
    {
        return;
    }

    CAutoPtr<IXAudio2MasteringVoice> pMasteringVoice;
    hr = pXAudio2->CreateMasteringVoice(&pMasteringVoice.m_p);
    if (FAILED(hr))
    {
        return;
    }

    // If you make it here, it worked!
    __debugbreak();
}
