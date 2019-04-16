#define LOG_TAG "StrongPointMain"

#include<iostream>
#include<include/StrongPointMain.h>
#include <cutils/log.h>

using namespace android;

namespace android{

    StrongPointMain::StrongPointMain(int age)
        :mAge(age){
            ALOGD("StrongPointMain(int age)!!!");
    }
    
    int StrongPointMain::getAge(){
        return mAge;
    }
    void StrongPointMain::onFirstRef(){
        ALOGD("onFirstRef!!!");
    }
    
    StrongPointMain::~StrongPointMain(){

        ALOGD("~StrongPointMain!!!");
    }
    
};

int main(int argc, char** argv)
{
    sp<StrongPointMain> spm = new StrongPointMain(26);

    int age = spm->getAge();
    ALOGD("[age]=%d",age);
    return 0;
}

