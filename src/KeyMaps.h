#ifndef KEYMAPS_H_
#define KEYMAPS_H_

#include "Definitions.h"
#include <Keyboard.h>

// clang-format off
////// Macro List /////////////////////////////////////////////////////////////
constexpr KeyMap macros[]= {
	// DON'T CHANGE THE FORMAT!!!
	// Format: { Macro Key, { Assign Macro actions } }
	{ M00, { KEY_F13 } },								
	{ M01, { KEY_F14 } },								
	{ M02, { KEY_F15 } },								
	{ M03, { KEY_F16 } },								
	{ M04, { KEY_F17 } },								
	{ M05, { KEY_F18 } },								
	{ M06, { KEY_F19 } },								
	{ M07, { KEY_F20 } },								
	{ M08, { KEY_F21 } },								
	{ M09, { KEY_F22 } },								
	{ M10, { KEY_F23 } },								
	{ M11, { KEY_LEFT_GUI, 'r' } },	// KEY_LEFT_GUI = windows key				
	{ M12, { KEY_LEFT_CTRL, KEY_LEFT_SHIFT, 'm' } },	
	{ M13, { KEY_LEFT_CTRL, KEY_LEFT_SHIFT, 'd' } },	
	{ M14, { KEY_LEFT_ALT, KEY_TAB } },				
	{ M15, {} }										
};
// clang-format on

#endif // KEYMAPS_H_