#include <stdio.h>

struct Vehicle 
{
    char ownerName[50];
    char vehicleName[50];
    char model[50];
    int Tyresnum;
};

struct Vehicle vehicles[100];
int Vehiclenum=0;


void createVehicle() {
    printf("Enter vehicle owner name:");
    scanf("%s", vehicles[Vehiclenum].ownerName);
    printf("Enter vehicle name:");
    scanf("%s", vehicles[Vehiclenum].vehicleName); 
    printf("Enter vehicle model:");
    scanf("%s", vehicles[Vehiclenum].model); 
    printf("Enter number of tyres:");
    scanf("%d", &vehicles[Vehiclenum].Tyresnum);
    Vehiclenum++;
}


void displayVehicle() {
    int ch,f1=0,f2=0,f3=0;
    printf("Display Vehicle Menu\n");
    printf("1.Tyres 2\n");
    printf("2.Tyres 3\n");
    printf("3.Tyres 4\n");
    printf("4.Exit\n");
    scanf("%d",&ch);

    switch (ch)
    {
        case 1:
            for (int i=0;i<Vehiclenum;i++) 
            {
                if (vehicles[i].Tyresnum==2) 
                {
                    printf("Owner Name: %s\n", vehicles[i].ownerName);
                    printf("Vehicle Name: %s\n", vehicles[i].vehicleName);
                    printf("Model: %s\n", vehicles[i].model);
                    printf("Number of Tyres: %d\n", vehicles[i].Tyresnum);
                    f1=1;
                }
            }
            if(f1==0)
            {
            printf(" no 2tyre vehicles");
            }
            break;
        case 2:
            for (int i = 0; i < Vehiclenum;i++) 
            {
                if (vehicles[i].Tyresnum==3) 
                {
                    printf("Owner Name: %s\n", vehicles[i].ownerName);
                    printf("Vehicle Name: %s\n", vehicles[i].vehicleName);
                    printf("Model: %s\n", vehicles[i].model);
                    printf("Number of Tyres: %d\n", vehicles[i].Tyresnum);
                    f2=1;
                }
            }
            if(f2==0)
            {
                printf("no 3 tyre vehicles");
            }
            break;
        case 3:
            for (int i = 0; i < Vehiclenum; i++) {
                if (vehicles[i].Tyresnum == 4) {
                    printf("Owner Name: %s\n", vehicles[i].ownerName);
                    printf("Vehicle Name: %s\n", vehicles[i].vehicleName);
                    printf("Model: %s\n", vehicles[i].model);
                    printf("Number of Tyres: %d\n", vehicles[i].Tyresnum);
                    f3=1;
                }
            }
            if(f3==0)
            {
                printf("no 4 tyre vehicles");
            }
            break;
        case 4:
            return;
        default:
            printf("Invalid choice\n");
    }
     displayVehicle();
    
}

int main() 
{
    int ch;
    while (1)
    {
        printf("Menu\n");
        printf("1.Create Vehicles\n");
        printf("2.Display Vehicle\n");
        printf("3.Exit\n");
        scanf("%d", &ch);

        switch (ch) 
        {
            case 1:
                createVehicle();
                break;
            case 2:
                displayVehicle();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}