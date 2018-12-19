#!/bin/bash

if [[ -z "$1" ]]
then
  	language="en"
else
  	language=$1
fi

sh ~/petit_bain/module_shell/ShellGame/delete.sh
cd module_c && ./install.sh $language
cd ~/petit_bain/module_shell/ShellGame
source script.sh $language

cp ~/.zshrc ~/.zshrc.copy

cd ~/petit_bain/main_menu
gcc -o ../petit_bain main.c menu_graphics.c menu_text.c menu_init.c menu_actions.c -lncurses

echo "if [ -f ~/Documents/PetitBainShell/.shellrc ]; then" >> ~/.zshrc
echo "	source ~/Documents/PetitBainShell/.shellrc" >> ~/.zshrc
echo "fi" >> ~/.zshrc
echo "if [ -f ~/petit_bain/module_c/scripts/alias.sh ]; then" >> ~/.zshrc
echo "	source ~/petit_bain/module_c/scripts/alias.sh" >> ~/.zshrc
echo "fi" >> ~/.zshrc
echo "if [ -f ~/petit_bain/main_menu/alias ]; then" >> ~/.zshrc
echo "	source ~/petit_bain/main_menu/alias" >> ~/.zshrc
echo "fi" >> ~/.zshrc
