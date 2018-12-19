#include "game_functions.h"

/*
**	You are currently in a text editor called VIM.
**	It is a bit different than most editors you may know, and has got
**	2 distincts modes.
**
**	The COMMAND mode is the default mode. It allows you to type multiple
**	commands to manipulate the editor.
**
**	The INSERT mode allows you to type text. You can activate it by pressing I
**	on your keyboard. (You'll see INSERT appear at the bottom left of the screen)
**	VIM will then behave like an casual text editor.
**
**	To come back to the COMMAND mode, press Escape (ESC).
**	(INSERT at the bottom left of the screen should disappear)
**
**	To save and leave the file, you must be in COMMAND mode. (INSERT should
**	not appear at the bottom left).
**	Then, type ":x" (without the quotes) and press Enter.
**
**	-----------------------------------------------------------------------
**
**	First of all, just try to replace LEFT by RIGHT in the code below.
**
**	Then, try to leave this file, and type "playgame" in the terminal. You
**	will see the first level of the game.
**	When Archimede will have reached the exit, leave the game and type
**	"nextlevel" in the terminal.
*/

void player_function()
{
	while (1)
		walk(LEFT);
}
