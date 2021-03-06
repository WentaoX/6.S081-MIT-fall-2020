#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    if (argc <= 1)
    {
        printf("Argument missed\n");
        exit(1);
    }
    else
    {
        int sleep_tick = atoi(argv[1]);
        sleep(sleep_tick);
    }
    exit(0);
}
