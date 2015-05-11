#include <cstdio>

#include <modules/px4iofirmware/protocol.h>
#include <drivers/NavioRCIO.h>

int main(int argc, char *argv[])
{
    NavioRCIO io{};

    if (io.detect()) {
        fprintf(stderr, "Detected\n");
    } else {
        fprintf(stderr, "Not detected\n");
    }

    return 0;
}
