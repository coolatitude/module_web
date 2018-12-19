#!/usr/bin/env zsh

__GAME_PATH__
cd $game_path

lvl=$(cat data/current_level)
lang=$(cat data/config/language)
level_line=$(grep -m 1 $lvl data/data_level)
level_status=$(echo $level_line | cut -f2)



if [[ "$level_status" == '1' ]]
then
    next_level_line=$(grep -A 1 $lvl data/data_level | head -n 2 | tail -n 1)
    next_level_name=$(echo $next_level_line | cut -f1)

	if [[ "$next_level_name" = "$lvl" ]]
	then
		cat data/levels/docs/$lang/victory | less
	else
    	echo $next_level_name > data/current_level
    	echo "\033[0;34mNext level : $next_level_name\e[0m"

    	mv src/player_function.c "data/saves/${lvl}.c"
    	cp "data/samples/${lang}/${next_level_name}.c" src/player_function.c

		$game_path/scripts/howtoplay.sh
	fi
else
    echo "You did not finish the current level yet."
fi
