#include <stdio.h>
#include <stdlib.h>
#define NUMBER_OF_CITIES 30

char city[NUMBER_OF_CITIES];
int a;

void cityManagement(char city[NUMBER_OF_CITIES]);

void cityManagement(char city[NUMBER_OF_CITIES]){

        for(a=0;a<NUMBER_OF_CITIES;a++){
            printf("%c    ",city[a]);
        }
        printf("\n\n");

}


int main()
{
    char Colombo='A',Kandy='B',Galle='C',Jaffna='D',Anuradhapura='E',Polonnaruwa='f',Kurunagala='G',Rathnapura='H',
    Trincomalee='I',Batticaloa='J',Matara='K',Badulla='L',NuwaraEliya='M',Hambanthota='N',Kaluthara='O',Negambo='P',
    Puttalam='Q',Chilaw='R',Vavuniya='S',Ampara='T',Monaragala='U',Kegalle='V',Gampaha='W',Dehiwala='X',
    Moratuwa='Y',Maharagama='Z',Wattala='a',Beruwala='b',Panadura='d',Katunayaka='e';

    char city[NUMBER_OF_CITIES]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T',
    'U','V','W','X','Y','Z','a','b','d','e'};

    printf("1.City Management\n\n");
    printf("Colombo=A        Kandy=B        Galle=C         Jaffna=D         Anuradhapura=E\nPolonnaruwa=F    Kurunagala=G   Rathnapura=H    Trincomalee=I    Batticaloa=J\nMatara=K         Badulla=L      NuwaraEliya=M   Hambanthota=N    Kaluthara=O\nNegambo=P        Puttalam=Q     Chilaw=R        Vavuniya=S       Ampara=T\nMonaragala=U     Kegalle=V      Gampaha=W       Dehiwala=X       Moratuwa=Y\n");
    printf("Maharagama=Z     Wattala=a      Beruwala=b      Panadura=d       Katunayaka=e\n\n");

    cityManagement(city);

    return 0;
}
