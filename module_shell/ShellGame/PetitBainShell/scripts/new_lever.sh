#lever 1 reussi

mkdir chambre_secrete
chmod 777 despina
rm despina
cd chambre_secrete
touch miroir.txt temps.txt epee.txt
gcc ~/Documents/PetitBainShell/personnages/lever2/lever2.c ~/Documents/PetitBainShell/personnages/libft/libft.a -o levier
gcc ~/Documents/PetitBainShell/personnages/despina2/despina.c ~/Documents/PetitBainShell/personnages/libft/libft.a -o despina
chmod 111 levier
chmod 111 despina
