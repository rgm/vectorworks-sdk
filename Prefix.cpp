#ifdef _DEBUG
    #include <GSBug.h>
    #define _DEBUG_MEMORY
    #define _DO_TIMING
#else
    #include <GSRELEASE.h>
#endif

#include <MCCoordTypes.h>
#include <MiniCadHookIntf.h>
#include <GSESetup.h>
#include <MiniCadCallBacks.h>
#include <GSString.h>
#include <GSTypes.h>
#include <MCMatrix.h>
#include <RecordHandler.h>
#include <ExtendedProperties.h>
#include <VWFCLibrary.h>
#include <PluginSupport/VWExtensions.h>
#include <VWInterfaces.h>

using namespace VWFC::Math;
using namespace VWFC::VWObjects;
using namespace VWFC::Tools;
using namespace VWFC::VWUI;
