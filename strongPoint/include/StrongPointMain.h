#include <utils/RefBase.h>

namespace android{
    class StrongPointMain:public RefBase{

        private:
            int mAge;
        public:
            virtual     ~StrongPointMain();
            int getAge();
            StrongPointMain(int age);
            virtual void onFirstRef();
    };
};
