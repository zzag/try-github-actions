cmake_minimum_required(VERSION 3.0)

project(qttest-demo)

find_package(ECM REQUIRED NO_MODULE)
set(CMAKE_MODULE_PATH ${ECM_MODULE_PATH})

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(KDEInstallDirs)
include(KDECMakeSettings)
include(KDECompilerSettings NO_POLICY_SCOPE)
include(FeatureSummary)

find_package(Qt5 CONFIG REQUIRED COMPONENTS
    Core
    Test
)

add_subdirectory(tests)

feature_summary(WHAT ALL FATAL_ON_MISSING_REQUIRED_PACKAGES)
