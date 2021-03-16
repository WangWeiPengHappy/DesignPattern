//
//  TemplateTest.h
//  DesignPattern
//
//  Created by Eric on 2021/3/9.
//

#ifndef TemplateTest_h
#define TemplateTest_h

#include "TemplateLib.hpp"
#include "TemplateApp.hpp"

void TemplateTest()
{
    TemplateLib* pLib = new TemplateApp();
    pLib->run();
    if (pLib)
    {
        delete pLib;
        pLib = NULL;
    }
}

#endif /* TemplateTest_h */
