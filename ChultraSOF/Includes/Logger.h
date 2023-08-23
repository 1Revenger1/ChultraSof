//
//  Logger.h
//  ChultraSOF
//
//  Created by Gwydien on 8/22/23.
//

#ifndef Logger_h
#define Logger_h

#define IOLogInfo(format, ...) do { IOLog("SOF - Info: " format "\n", ## __VA_ARGS__); } while (0)
#define IOLogError(format, ...) do { IOLog("SOF - Error: " format "\n", ## __VA_ARGS__); } while (0)

#ifdef DEBUG
#define IOLogDebug(format, ...) do { IOLog("SOF - Debug: " format "\n", ## __VA_ARGS__); } while (0)
#else
#define IOLogDebug(format, ...)
#endif // DEBUG

#endif /* Logger_h */
