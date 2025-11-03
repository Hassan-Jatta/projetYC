#include <stdio.h>

int main() {
	int nb_secret = 32;
	int nb_user;
	scanf("%d", &nb_user);
	if (nb_user == nb_secret) {
        printf("\033[1;34m"); 
        printf("Bravo !!! Vous avez trouvé le bon nombre (%d) !!! \n", nb_secret);
    } 
    else {
		printf("Echec");
	}
	return 0;

}
