// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Oct 2019
// This program is the window display for GBDK

#include <stdio.h>
#include <gb/gb.h>
#include <gb/font.h>
#include "coolBackground.c"
#include "backgroundtiles.c"
#include "windowmap.c"

void main() {
    font_t min_font;

    font_init();
    min_font = font_load(font_min);
    font_set(min_font);

    set_bkg_data(37, 7, backgroundtiles);
    set_bkg_tiles(0, 0, 40, 18, backgroundmap);

    set_win_tiles(0, 0, 5, 1, windowmap);
    move_win(7, 120);

    SHOW_BKG;
    SHOW_WIN;
    DISPLAY_ON;

    while (1) {
        scroll_bkg(1, 0);
        delay(100);
    }
}
