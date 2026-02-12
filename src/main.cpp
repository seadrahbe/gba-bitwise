#include <bn_core.h>
#include <bn_log.h>
#include <bn_string.h>
#include <bn_backdrop.h>
#include <bn_color.h>

#include "base_conv.h"

int main() {
    bn::core::init();

    unsigned int color = 0b0'00000'11111'00000;

    BN_LOG("Hey!");

    bn::backdrop::set_color(bn::color(color));

    while(true) {
        bn::core::update();
    }
}