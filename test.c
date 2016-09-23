#include <stdio.h>
#include "wipe_space.h"
int main()
{
        char * case1="{    }";
        char * case2="   {    \"a\":12,   \"b\":\"t u r\" }";
//      wipe_space(case1);
        printf("%s\n",wipe_space(case1));
//      wipe_space(case2);
        printf("%s\n",wipe_space(case2));
        return 0;
}

