#pragma once

#include <zephyr/kernel.h>
#include <zmk/event_manager.h>

struct zmk_keymap_caps_lock_state_changed {
    bool state;
};

ZMK_EVENT_DECLARE(zmk_keymap_caps_lock_state_changed);