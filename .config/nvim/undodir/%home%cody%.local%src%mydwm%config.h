Vim�UnDo� >���8v"����5o6N�K�f�3!�&�Ƿ!O+�  [   &		{ "color0",		STRING,	&normbgcolor },   |                          f/�    _�                             ����                                                                                                                                                                                                                                                                                                                                                  V        f/     �             	   <<<<<<< HEAD   ustatic char *fonts[]          = { "monospace:size=10", "NotoColorEmoji:pixelsize=10:antialias=true:autohint=true"  };   0static char normbgcolor[]           = "#222222";   0static char normbordercolor[]       = "#444444";   0static char normfgcolor[]           = "#bbbbbb";   0static char selfgcolor[]            = "#eeeeee";   0static char selbordercolor[]        = "#770000";   0static char selbgcolor[]            = "#005577";   =======5��           	               �      �              5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        f/     �                 >>>>>>> c496950 (initial commit)5��                          �      !               5�_�                    /        ����                                                                                                                                                                                                                                                                                                                            /           1           V        f/     �   .   /          <<<<<<< HEAD   Lstatic const char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };   =======5��    .                      ^      b               5�_�                    1        ����                                                                                                                                                                                                                                                                                                                            /           /           V        f/     �   0   1           >>>>>>> c496950 (initial commit)5��    0                      *	      !               5�_�      	             8        ����                                                                                                                                                                                                                                                                                                                            @           8           V        f/2     �   7   8       	   <<<<<<< HEAD   a	{ "Gimp",     NULL,       NULL,       	    1 << 8,       0,           0,         0,        -1 },   a	{ TERMCLASS,  NULL,       NULL,       	    0,            0,           1,         0,        -1 },   b	{ NULL,       NULL,       "Event Tester",   0,            0,           0,         1,        -1 },   a	{ TERMCLASS,      "floatterm", NULL,       	    0,       1,           1,         0,        -1 },   f	{ TERMCLASS,      "bg",        NULL,       	    1 << 7,       0,           1,         0,        -1 },   f	{ TERMCLASS,      "spterm",    NULL,       	    SPTAG(0),     1,           1,         0,        -1 },   f	{ TERMCLASS,      "spcalc",    NULL,       	    SPTAG(1),     1,           1,         0,        -1 },   =======5��    7       	               
      �              5�_�      
           	   F        ����                                                                                                                                                                                                                                                                                                                            8           8           V        f/4     �   E   F           >>>>>>> c496950 (initial commit)5��    E                      `      !               5�_�   	              
   E        ����                                                                                                                                                                                                                                                                                                                            8           8           V        f/5     �   D   E           5��    D                      _                     5�_�   
                 P        ����                                                                                                                                                                                                                                                                                                                            P           S           V        f/?     �   O   P          <<<<<<< HEAD   =======        >>>>>>> c496950 (initial commit)5��    O                      h      7               5�_�                    �        ����                                                                                                                                                                                                                                                                                                                            �           �           V        f/U     �      �          =======   )		{ "color4",		STRING,	&selbordercolor },   *		{ "background",		STRING,	&normbgcolor },   *		{ "foreground",		STRING,	&normfgcolor },   )		{ "background",		STRING,	&selfgcolor },    >>>>>>> c496950 (initial commit)5��                          �      �               5�_�                    {       ����                                                                                                                                                                                                                                                                                                                            �           �           V        f/W     �   z   {          <<<<<<< HEAD5��    z                      1                     5�_�                    �        ����                                                                                                                                                                                                                                                                                                                            �           �          V       f/d     �   �   �          *	{ MODKEY,			XK_c,		spawndefault,   {0} },    >>>>>>> c496950 (initial commit)5��    �                      �       L               5�_�                    �       ����                                                                                                                                                                                                                                                                                                                            �          �          V       f/h     �   �   �          <<<<<<< HEAD   =======5��    �                      �                      5�_�                    �       ����                                                                                                                                                                                                                                                                                                                            �          �          V       f/�     �   �   �          =======   h	{ MODKEY,			XK_e,		spawn,		SHCMD(TERMINAL " -e neomutt ; pkill -RTMIN+12 dwmblocks; rmdir ~/.abook") },   �	{ MODKEY|ShiftMask,		XK_e,		spawn,		SHCMD(TERMINAL " -e abook -C ~/.config/abook/abookrc --datafile ~/.config/abook/addressbook") },   V	{ MODKEY,			XK_r,		spawn,		{.v = (const char*[]){ TERMINAL, "-e", "lfub", NULL } } },   _	{ MODKEY|ShiftMask,		XK_r,		spawn,		{.v = (const char*[]){ TERMINAL, "-e", "htop", NULL } } },   >	{ MODKEY|ControlMask,		XK_r,		spawn,		SHCMD("select_meme") },    >>>>>>> c496950 (initial commit)5��    �                      �#                    5�_�                    �       ����                                                                                                                                                                                                                                                                                                                            �          �          V       f/�     �   �   �          <<<<<<< HEAD5��    �                      �!                     5�_�                    �        ����                                                                                                                                                                                                                                                                                                                            �          �          V       f/�     �   �   �          <<<<<<< HEAD   [	{ MODKEY,			XK_c,		spawn,		{.v = (const char*[]){ TERMINAL, "-e", "profanity", NULL } } },   7	/* { MODKEY|ShiftMask,		XK_c,		spawn,		SHCMD("") }, */   2	/* V is automatically bound above in STACKKEYS */   %	{ MODKEY,			XK_b,		togglebar,	{0} },   7	/* { MODKEY|ShiftMask,		XK_b,		spawn,		SHCMD("") }, */   =======5��    �                      �-      :              5�_�                    �       ����                                                                                                                                                                                                                                                                                                                            �          �          V       f/�     �   �   �           >>>>>>> c496950 (initial commit)5��    �                      %/      !               5�_�                    �        ����                                                                                                                                                                                                                                                                                                                            �          �          V       f/�     �   �   �          <<<<<<< HEAD   =======5��    �                      �0                     5�_�                    �       ����                                                                                                                                                                                                                                                                                                                            �          �          V       f/�     �   �   �           >>>>>>> c496950 (initial commit)5��    �                      $1      !               5�_�                          ����                                                                                                                                                                                                                                                                                                                                              V       f/�     �              =======   y	{ 0, XF86XK_AudioRaiseVolume,	spawn,		SHCMD("wpctl set-volume @DEFAULT_AUDIO_SINK@ 3%+; kill -44 $(pidof dwmblocks)") },   y	{ 0, XF86XK_AudioLowerVolume,	spawn,		SHCMD("wpctl set-volume @DEFAULT_AUDIO_SINK@ 3%-; kill -44 $(pidof dwmblocks)") },    >>>>>>> c496950 (initial commit)5��                         �<                    5�_�                          ����                                                                                                                                                                                                                                                                                                                                              V       f/�    �              <<<<<<< HEAD5��                         �;                     5�_�                    z       ����                                                                                                                                                                                                                                                                                                                                                             f/�     �   y   {  [      *		{ "color0",		STRING,	&normbordercolor },5��    y   
                                     5�_�                    {       ����                                                                                                                                                                                                                                                                                                                                                             f/�     �   z   |  [      )		{ "color8",		STRING,	&selbordercolor },5��    z   
                 ;                    5�_�                     |       ����                                                                                                                                                                                                                                                                                                                                                             f/�    �   {   }  [      &		{ "color0",		STRING,	&normbgcolor },5��    {   
                 e                    5�_�                   8        ����                                                                                                                                                                                                                                                                                                                            8           8           V        f/$     �   7   A        5��    7       	               
      �              5�_�                    F        ����                                                                                                                                                                                                                                                                                                                            8           8           V        f/&     �   E   G        5��    E                      `      !               5�_�                     E        ����                                                                                                                                                                                                                                                                                                                            8           8           V        f/'     �   D   F        5��    D                      _                     5��