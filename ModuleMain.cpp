//#include "Menu.h"

#define REGISTER(x) REGISTER_Extension<x::Definition>(GROUPID_Extension##x, action, pInfo, ioData, cbp, reply)

extern "C" long GS_EXTERNAL_ENTRY plugin_main(long action,
                                              void *pInfo,
                                              long &ioData,
                                              CallBackPtr cbp)
{
    ::GS_InitializeVCOM(cbp);
    gCBP = cbp;
    {
        using namespace VectorWorks;
        VCOMPtr<ISDK> localSDK(IID_SDK);
        gSDK = localSDK;
    }
    long reply = 0L;
    
    using namespace VWFC::PluginSupport;
    
    //REGISTER(Menu);
    
    return reply;
}
