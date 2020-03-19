//
//  iosSimulatorDefinitions.cpp
//  MAE_Test_Sim
//
//  Created by Eugene Yakshin on 19.03.2020.
//  Copyright © 2020 WSM Group. All rights reserved.
//

#ifdef IOS_SIMULATOR

 
#include <dirent.h>
#include <fnmatch.h>

// https://forums.coronalabs.com/topic/53249-link-errors-with-openssl-plugin-when-building-universal-32-64-bit-binaries-for-ios/
// Functions that appear to be missing when targeting the Xcode iOS Simulators
 
extern "C" DIR * opendir$INODE64( char * dirName );
DIR * opendir$INODE64( char * dirName )
{
    return opendir( dirName );
}
 
extern "C" struct dirent * readdir$INODE64( DIR * dir );
struct dirent * readdir$INODE64( DIR * dir )
{
    return readdir( dir );
}


#endif
