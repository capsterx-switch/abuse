/*
 *  Abuse - dark 2D side-scrolling platform game
 *  Copyright (c) 1995 Crack dot Com
 *  Copyright (c) 2005-2011 Sam Hocevar <sam@hocevar.net>
 *
 *  This software was released into the Public Domain. As with most public
 *  domain software, no warranty is made or implied by Crack dot Com, by
 *  Jonathan Clark, or by Sam Hocevar.
 */

#ifndef _SETUP_H_
#define _SETUP_H_

struct flags_struct
{
    short fullscreen;
    short doublebuf;
    short mono;
    short nosound;
    short grabmouse;
    short nosdlparachute;
    short xres;
    short yres;
    short overlay;
    short gl;
    int antialias;
#if defined __SWITCH__
    int analog_deadzone;
    float analog_divider;
    int save_music;
    int enable_music;
#endif
    int gamepad;
};

struct keys_struct
{
    int left;
    int right;
    int up;
    int down;
    int b1;
    int b2;
    int b3;
    int b4;
};

#endif // _SETUP_H_
