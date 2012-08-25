Hidden Input
------------

Executing this program allows to prompt users in interactive
CLI apps for passwords without it being printed in the terminal.

This should be easier, but it's unfortunately not possible to
achieve with most higher level languages that do not offer
an abstraction for it. Therefore instead of relying on popular
cheap tricks using VBScript to fire up a prompt (which was never
even working well since the password is shown in clear while
the user types it in) I decided to build this from C++ sources
I found on [stackoverflow](http://stackoverflow.com/questions/6899025/hide-user-input-on-password-prompt).
Credits go to [guestgulkan](http://www.cplusplus.com/user/E6M4jE8b/)
from cplusplus.com, whoever (s)he may be.

Usage
-----

Get the build/hiddeninput.exe file into your project and execute it
to accept user input. Whatever the user types until a newline will
be output back to the caller but will not show up in the terminal.

C++
---

hiddeninput.cpp is the original sources modified so that it compiles
with VC2008 which allows the executable to run fine from Win XP onwards.

C
-

hiddeninput.c is an alternative version I worked on using the ancestral
[conio](http://en.wikipedia.org/wiki/Conio.h) utilities. It is not
completely functionally equivalent to the C++ version so I chose not to
include the binary in the repo. Should you really have adverse reactions
to running compiled C++ code, you can easily build this one yourself instead.

License
-------

This is in the public domain as far as I am concerned. Should anyone involved
in writing the original bits feel particularly sad or offended by my publishing
of the sources or binary, drop me a line.