doge
====

Generates a dynamic doge monologue from the contents of your screen

Dependencies:
=============

(This is written for an environment using Xorg, so easiest to use on a
distribution of GNU/Linux.)

1. gocr (GNU OCR)
2. ImageMagick (for convert)
3. x11-apps or any package containing xwd
4. aspell (spell-checking and correction)
5. xosd-bin (for osd_cat)
6. Standard C library
7. BASH (duh)

Instructions:
=============

To compile this, you will need a C compiler such as gcc. First compile
the C program for generating misspellings:

gcc misspell.c -o misspell

Next, put the misspell binary somewhere in your path. Supposing that
you have a ~/bin directory in your $PATH variable, you can do
something like:

cp misspell ~/bin

Then, make sure the doge script is declared to be an executable:

chmod 755 doge

Copy it too, to the path, if you wish:

cp doge ~/bin

Then, execute doge

doge

Notes:
======

The OCR's output is font-dependent. It seems like it does very well
with Wikipedia fonts.

Enjoy!

Contribute:
===========

If someone can figure out instructions to get Comic Sans MS working,
please let me know.

Copyright:
==========

This documnt, and the files in this project -- doge, and misspell.c
are released under the GNU General Public License v2 or any later
version at your convenience.

Copyright (c) 2013 Akarsh Simha <akarsh.simha@kdemail.net>
