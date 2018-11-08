#include"a.h"
#define OS_Windows
int main()
{
    #ifdef A_H_INCLUDED
        testa();
        cout<<a;
    #else
        testb();
        cout<<b;
    #endif
    cout<<"\n";
    #ifdef OS_Windows
        cout<<"Hello Windows";
    #else
        cout<<"Hello Linux";
    #endif
}
