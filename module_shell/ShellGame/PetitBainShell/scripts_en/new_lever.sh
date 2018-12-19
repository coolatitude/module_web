#lever 1 reussi

mkdir secret_room
chmod 777 despina
rm despina
cd secret_room
touch mirror.txt time.txt sword.txt
gcc ~/Documents/PetitBainShell/personnages/lever2/lever2.c ~/Documents/PetitBainShell/personnages/libft/libft.a -o lever
gcc ~/Documents/PetitBainShell/personnages/despina2/despina.c ~/Documents/PetitBainShell/personnages/libft/libft.a -o despina
chmod 111 lever
chmod 111 despina
