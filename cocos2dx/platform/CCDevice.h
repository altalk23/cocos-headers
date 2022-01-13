#ifndef __CCDEVICE_H__
#define __CCDEVICE_H__

#include "CCPlatformMacros.h"

NS_CC_BEGIN
/**
 @js NA
 @lua NA
 */
class CC_DLL CCDevice
{
<<<<<<< HEAD
public:
=======
    CACAO_ADD(friend class Cacao::interfaces;)
private:
>>>>>>> 91b42a119a6a8f7a1e1e37eb0c89b467c6f3939f
    CCDevice();
public:
    /**
     *  Gets the DPI of device
     *  @return The DPI of device.
     */
    static int getDPI();
};


NS_CC_END

#endif /* __CCDEVICE_H__ */
