#include <stdio.h>
#include <stdlib.h>
#define NUMBER_OF_CITIES 30

char city[NUMBER_OF_CITIES],distance[NUMBER_OF_CITIES][NUMBER_OF_CITIES];
int a,b,c;

void cityManagement(char city[NUMBER_OF_CITIES]);
void distanceManagement(char city[NUMBER_OF_CITIES],int distance[NUMBER_OF_CITIES][NUMBER_OF_CITIES]);

void cityManagement(char city[NUMBER_OF_CITIES]){

        for(a=0;a<NUMBER_OF_CITIES;a++){
            printf("%c    ",city[a]);
        }
        printf("\n\n");

}




void distanceManagement(char city[NUMBER_OF_CITIES],int distance[NUMBER_OF_CITIES][NUMBER_OF_CITIES]){
    printf("Put correct distance between following two cities...\n");
    printf("\(Distance from city to itself ---> 0 km\) \n\n");


    for(b=0;b<NUMBER_OF_CITIES;b++){
            for( c=0;c<NUMBER_OF_CITIES;c++){

                printf(" %c to %c : ",city[b],city[c]);
                scanf("%d",&distance[b][c]);
            }
        }
                printf("\n\n");

        for(b=0;b<NUMBER_OF_CITIES;b++){
                for(c=0;c<NUMBER_OF_CITIES;c++){

                    printf(" %09d ",distance[b][c]);
                }
                printf("\n\n");

            }


}






int main()
{
    char Colombo='A',Kandy='B',Galle='C',Jaffna='D',Anuradhapura='E',Polonnaruwa='f',Kurunagala='G',Rathnapura='H',
    Trincomalee='I',Batticaloa='J',Matara='K',Badulla='L',NuwaraEliya='M',Hambanthota='N',Kaluthara='O',Negambo='P',
    Puttalam='Q',Chilaw='R',Vavuniya='S',Ampara='T',Monaragala='U',Kegalle='V',Gampaha='W',Dehiwala='X',
    Moratuwa='Y',Maharagama='Z',Wattala='a',Beruwala='b',Panadura='d',Katunayaka='e';

    char city[NUMBER_OF_CITIES]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T',
    'U','V','W','X','Y','Z','a','b','d','e'};

    int distance[NUMBER_OF_CITIES][NUMBER_OF_CITIES],record;

    printf("1.City Management\n\n");
    printf("Colombo=A        Kandy=B        Galle=C         Jaffna=D         Anuradhapura=E\nPolonnaruwa=F    Kurunagala=G   Rathnapura=H    Trincomalee=I    Batticaloa=J\nMatara=K         Badulla=L      NuwaraEliya=M   Hambanthota=N    Kaluthara=O\nNegambo=P        Puttalam=Q     Chilaw=R        Vavuniya=S       Ampara=T\nMonaragala=U     Kegalle=V      Gampaha=W       Dehiwala=X       Moratuwa=Y\n");
    printf("Maharagama=Z     Wattala=a      Beruwala=b      Panadura=d       Katunayaka=e\n\n");

    cityManagement(city);

    printf("2.Distance Management\n\n");
    distanceManagement(city,distance);
    printf("\n\n");


    return 0;
}
