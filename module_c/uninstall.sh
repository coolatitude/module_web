#!/bin/zsh

echo "Cleaning binaries..."
make fclean

echo "Cleaning scripts..."

game_path=$(pwd)
game_path_exp=$(sed 's/\//\\\//g' <<< $game_path)
expr="s/.*game_path=\'.*\/\'/__GAME_PATH__/"
sed -i "" ${expr} scripts/*

echo "Deleting save directories..."
rm -rf data/saves 2>&1 > /dev/null


echo "\n\n\033[0;32mUninstallation complete.\e[0m\n"
