// Objective-C API for talking to gitlab.com/nebvc/vcore/vlib Go package.
//   gobind -lang=objc gitlab.com/nebvc/vcore/vlib
//
// File is generated by gobind. Do not edit.

#ifndef __Vlib_H__
#define __Vlib_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


FOUNDATION_EXPORT BOOL VlibDnscryptIsRunning(void);

FOUNDATION_EXPORT void VlibDnscryptStart(NSString* _Nullable config);

FOUNDATION_EXPORT void VlibDnscryptStop(void);

#endif
