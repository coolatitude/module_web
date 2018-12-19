#!/bin/zsh

__GAME_PATH__
cd $game_path

lang=$(cat data/config/language)

echo "\033[0;31mWARNING : This command will reset all the game, including your progression.\e[0m"
echo "Are you ABSOLUTELY SURE that you want to reset the game ?"
echo -n "(Y/n) : "
read answer

while [[ "$answer" != "Y" && "$answer" != "n" ]]
do
	echo -n "Please only type Y or n : "
	read answer
done

if [[ "$answer" == "Y" ]]
then
	git show HEAD:module_c/data/current_level > data/current_level
	git show HEAD:module_c/data/data_level > data/data_level
	lvl=$(cat data/current_level)
	rm src/player_function.c 2>&1 > /dev/null
	cp data/samples/$lang/$lvl.c src/player_function.c 2>&1 > /dev/null

	cd intro
	./intro

#	Uncomment the following line to launch the howtoplay after the intro
#	$game_path/scripts/howtoplay.sh
fi
