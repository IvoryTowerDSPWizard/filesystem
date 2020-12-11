//
//  filesystem.cpp
//  UnityMaePlugin
//
//  Created by Eugene Yakshin on 2/26/20.
//  Copyright © 2020 WSM Group. All rights reserved.
//

#pragma once

#define MAE_USE_LIB_FILESYSTEM

#ifdef MAE_USE_LIB_FILESYSTEM
    #include "include/ghc/filesystem.hpp"
    namespace fs = ghc::filesystem;
#else
    #include <filesystem>
    namespace fs = std::filesystem;
#endif
