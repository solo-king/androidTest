#define LOG_TAG "CppThreadTest"
#include<utils/Thread.h>
#include<cutils/log.h>

using namespace android;
namespace android{

    class MyThread:public Thread{

        private:
            int count;

            bool  threadLoop(){

                ALOGD("%d", ++count);
                sleep(1);
                return true;
            }
    };

};

int main(int argc, char**argv)
{
    sp<MyThread> myThread = new MyThread();
    myThread->run("myThread");
    myThread->join();
    return 0;
}