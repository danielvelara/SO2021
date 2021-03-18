#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int sigVar = 0;

void signalHandler(int sig)
{
    printf("Starting %d\n", sig);
    sigVar = 1;
}

int main()
{
    signal(2, signalHandler);
    while (1)
    {
        printf("Working\n");
        if (sigVar == 1)
        {
            break;
        }
        sleep(1);
    }
    printf("Finished\n");
    return 0;
}