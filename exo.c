#include <unistd.h>
void ft_fetra(void){
 write (1, "Fetra" , 5);
}

void ft_space(void){
 write (1, " Andria", 7);
}

void ft_alaligne(void){
 write (1, "\n", 1);
}

int main (void){
 ft_fetra();
 ft_space();
 ft_alaligne();
return 0 ;
}
