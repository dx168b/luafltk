//
// "$Id: Fl_Fill_Dial.H 6614 2009-01-01 16:11:32Z matt $"
//
// Filled dial header file for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2009 by Bill Spitzak and others.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA.
//
// Please report all bugs and problems on the following page:
//
//     http://www.fltk.org/str.php
//

/* \file
   Fl_Fill_Dial widget . */

#ifndef Fl_Fill_Dial_H
#define Fl_Fill_Dial_H

#include "Fl_Dial.H"

/** Draws a dial with a filled arc */
class FL_EXPORT Fl_Fill_Dial : public Fl_Dial {
public:
    /** Creates a filled dial, also setting its type to FL_FILL_DIAL. */
    Fl_Fill_Dial(int x,int y,int w,int h, const char *l = 0)
	: Fl_Dial(x,y,w,h,l) {type(FL_FILL_DIAL);}
};

#endif

//
// End of "$Id: Fl_Fill_Dial.H 6614 2009-01-01 16:11:32Z matt $".
//
