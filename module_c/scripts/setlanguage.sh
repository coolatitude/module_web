#!/bin/zsh

__GAME_PATH__
cd $game_path

if [[ -z "$1" ]]
then
	echo -n "en / fr / nl ? : "
	read language
else
	language=$1
fi

while [[ "$language" != "en" && "$language" != "fr" && "$language" != "nl" ]]
do
	echo -n "en / fr / nl ? : "
	read language
done

mkdir -p data/config 2>&1 > /dev/null
touch data/config/language
echo $language > data/config/language

if [[ "$language" == "en" ]]
then
	echo "\033[0;34The language has been set to english\e[0m"
elif [[ "$language" == "fr" ]]
then
	echo "\033[0;34La langue est maintenant configurée en français\e[0m"
elif [[ "$language" == "nl" ]]
then
	echo "\033[0;34Het spel is nu in het nerderlands\e[0m"
fi

lvl=$(cat data/current_level)

rm src/player_function.c 2>&1 > /dev/null
cp data/samples/$language/$lvl.c src/player_function.c 2>&1 > /dev/null
