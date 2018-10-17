This project implments unit tests for c++ libraries which are not interacting with hardware.

Instructions to set up googletest in Visual Studio:
From: https://stackoverflow.com/questions/8739495/googletest-how-to-setup

These instructions get the testing framework working for the Debug configuration.

Get Google C++ Testing Framework
1.Download the latest gtest framework
2.Unzip to C:\gtest

Build the Framework Libraries
1.Open C:\gtest\msvc\gtest.sln in Visual Studio
2.Set Configuration to "Debug"
3.Build Solution

Create and Configure Your Test Project
1.Create a new solution and choose the template Visual C++ > Win32 > Win32 Console Application
2.Right click the newly created project and choose Properties
3.Change Configuration to Debug.
4.Configuration Properties > C/C++ > General > Additional Include Directories: Add C:\gtest\include
5.Configuration Properties > C/C++ > Code Generation > Runtime Library: If your code links to a runtime DLL, choose Multi-threaded Debug DLL (/MDd). If not, choose Multi-threaded Debug (/MTd).
6.Configuration Properties > Linker > General > Additional Library Directories: Add C:\gtest\msvc\gtest\Debug
7.Configuration Properties > Linker > Input > Additional Dependencies: Add gtestd.lib

Verifying Everything Works
1.Open the cpp in your Test Project containing the main() function.
2.Paste the following code:

#include "stdafx.h"
#include <iostream>

#include "gtest/gtest.h"

    TEST(sample_test_case, sample_test)
    {
        EXPECT_EQ(1, 1);
    }

    int main(int argc, char** argv) 
    { 
        testing::InitGoogleTest(&argc, argv); 
        RUN_ALL_TESTS(); 
        std::getchar(); // keep console window open until Return keystroke
    }

1.Debug > Start Debugging
If this works you should see the console window open with your test results.