#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NUMBER_OF_CITIES 30

char city[NUMBER_OF_CITIES];
int distance[NUMBER_OF_CITIES][NUMBER_OF_CITIES],vehicle[][5];
int a,b,c,d,e,f,g,h,S,E,D,i,R,time,fuelUsed,fuelPrice;
float weight,F,W,cost,FUEL_COST,totalCost,profit;

void cityManagement(char city[NUMBER_OF_CITIES]);
void distanceManagement(char city[NUMBER_OF_CITIES],int distance[NUMBER_OF_CITIES][NUMBER_OF_CITIES]);
void vehicleManagement(int vehicle[][5]);
void deliveryRequestHandling(int distance[NUMBER_OF_CITIES][NUMBER_OF_CITIES],int vehicle[][5],float weight);
void calculation(int S,int E,float F,int distance[NUMBER_OF_CITIES][NUMBER_OF_CITIES],int vehicle[][5],float weight);


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



void vehicleManagement(int vehicle[][5]){
    for(d=0;d<3;d++){
        for(e=0;e<5;e++){
            printf("%6d ",vehicle[d][e]);

        }
        printf("\n");

    }

    printf("\n\n\n");

}


 void deliveryRequestHandling(int distance[NUMBER_OF_CITIES][NUMBER_OF_CITIES],int vehicle[][5],float weight){


        printf("Enter your source city index: ");
        scanf("%d",&f);
        printf("Enter your destination city index: ");
        scanf("%d",&g);
        printf("Distance: %d \n",distance[f][g]);
        printf("You want pass weight: ");
        scanf("%f",&weight);
        printf("You want vehicle type: ");
        scanf("%d",&vehicle[h][0]);


        if(weight<=1000&&vehicle[h][0]==1&&f!=g){
            printf("Valid\n");

        }else if(weight<=5000&&vehicle[h][0]==1||vehicle[h][0]==2&&f!=g){
            printf("Valid\n");

        }else if(weight<=10000&&vehicle[h][0]==1||vehicle[h][0]==2||vehicle[h][0]==3&&f!=g){
            printf("Valid\n");

        }else{
            printf("Invalid\n");

        }
    printf("\n\n\n\n");
}


void calculation(int S,int E,float F,int distance[NUMBER_OF_CITIES][NUMBER_OF_CITIES],int vehicle[][5],float weight){

     if(vehicle[h][0]==1){
            h=0;

        }else if(vehicle[h][0]==2){
            h=1;

        }else if(vehicle[h][0]==3){
            h=2;

        }else{
            h=3;
        }



    D = distance[f][g];
    printf("*Distance         = %d km\n",D);

    i=f;
    R = vehicle[h][2];
    printf("*Rate per km      = %d km\n",R);

    W = weight;

    cost = D*R*(1+W*(1/10000));
    printf("a.Delivery Cost   = %.2f LKR\n\n",cost);

    S = vehicle[h][3];
    printf("*Vehicle Speed    = %d (km/h)\n",S);

    time = D/S;
    printf("b.Time            = %d hours\n\n",time);

    E = vehicle[h][4];
    printf("*Efficiency       = %d (km/l)\n",E);

    fuelUsed = D/E;
    printf("c.FuelUsed        = %d L\n\n",fuelUsed);

    fuelPrice = R * E;
    printf("*Fuel Price       = %d LKR\n",fuelPrice);

    FUEL_COST = fuelUsed*F;
    printf("d.Fuel Cost       = %.2f LKR\n\n",FUEL_COST);

    totalCost = cost + FUEL_COST;
    printf("e.Total Cost      = %.2f LKR\n\n",totalCost);

    profit = cost*0.25;
    printf("f.Profit          = %.2f LKR\n\n",profit);





}












int main()
{
    char Colombo='A',Kandy='B',Galle='C',Jaffna='D',Anuradhapura='E',Polonnaruwa='f',Kurunagala='G',Rathnapura='H',
    Trincomalee='I',Batticaloa='J',Matara='K',Badulla='L',NuwaraEliya='M',Hambanthota='N',Kaluthara='O',Negambo='P',
    Puttalam='Q',Chilaw='R',Vavuniya='S',Ampara='T',Monaragala='U',Kegalle='V',Gampaha='W',Dehiwala='X',
    Moratuwa='Y',Maharagama='Z',Wattala='a',Beruwala='b',Panadura='d',Katunayaka='e';

    char city[NUMBER_OF_CITIES]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T',
    'U','V','W','X','Y','Z','a','b','d','e'};

    int distance[NUMBER_OF_CITIES][NUMBER_OF_CITIES];

    int Van=1,Truck=2,Lorry=3;
    int vehicle[][5]={1,1000,30,60,12,2,5000,40,50,6,3,10000,80,45,4};




    printf("1.City Management\n\n");
    printf("Colombo=A        Kandy=B        Galle=C         Jaffna=D         Anuradhapura=E\nPolonnaruwa=F    Kurunagala=G   Rathnapura=H    Trincomalee=I    Batticaloa=J\nMatara=K         Badulla=L      NuwaraEliya=M   Hambanthota=N    Kaluthara=O\nNegambo=P        Puttalam=Q     Chilaw=R        Vavuniya=S       Ampara=T\nMonaragala=U     Kegalle=V      Gampaha=W       Dehiwala=X       Moratuwa=Y\n");
    printf("Maharagama=Z     Wattala=a      Beruwala=b      Panadura=d       Katunayaka=e\n\n");

    cityManagement(city);

    printf("2.Distance Management\n\n");
    distanceManagement(city,distance);
    printf("\n\n");

    printf("3.Vehicle Management\n\n");
    printf("Van=1,Truck=2,Lorry=3\n\n");
    printf("   Type   kg      LKR   km/h   km/l\n");
    vehicleManagement(vehicle);

    printf("4.Delivery Request Handling\n\n");
    deliveryRequestHandling(distance,vehicle,weight);

    printf("5.Cost,Time,and Fuel Calculations\n\n");
    calculation(S,E,F,distance,vehicle,weight);







    return 0;
}
