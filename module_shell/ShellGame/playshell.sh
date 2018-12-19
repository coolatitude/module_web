#lancer le debut du jeu
cd ~/Desktop/ShellGame
clear
if [ -d ~/Desktop/ShellGame/main_gate ]; then
	cat ~/petit_bain/module_shell/ShellGame/PetitBainShell/ressources/welcome_en
elif [ -d ~/Desktop/ShellGame/portail ]; then
	cat ~/petit_bain/module_shell/ShellGame/PetitBainShell/ressources/welcome_fr
elif [ -d ~/Desktop/ShellGame/hoofd_poort ]; then
	cat ~/petit_bain/module_shell/ShellGame/PetitBainShell/ressources/welcome_nl
fi;
