//
//  TemplateApp.hpp
//  DesignPattern
//
//  Created by Eric on 2021/3/9.
//

#ifndef TemplateApp_hpp
#define TemplateApp_hpp

#include <stdio.h>
#include "TemplateLib.hpp"

class TemplateApp : public TemplateLib
{
public:
    TemplateApp(){}
    ~TemplateApp(){}
    virtual void step2();
    virtual void step4();
    
};

#endif /* TemplateApp_hpp */
