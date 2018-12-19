if [ -d ~/Documents/PetitBainShell ]; then

#remettre les droits
chmod -R 777 ~/Desktop/ShellGame

#reinitialiser au cas ou
/bin/stty cooked

#suprimmer les trucs
rm -r ~/Desktop/ShellGame
rm -r ~/Documents/PetitBainShell
rm -f ~/.shellrc


#
#clear

fi;
