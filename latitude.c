#include<stdio.h>
#include<math.h>

int main(){
    float lat1,lon1,lat2,lon2,D;

    printf("Enter the latitude and longitude of one place on the earth.\n");
    printf("Latitude:");
    scanf("%f",&lat1);
    printf("Longitude:");
    scanf("%f",&lon1);
      printf("Enter the latitude and longitude of second place on the earth.\n");
      printf("Latitude:");
    scanf("%f",&lat2);
    printf("Longitude:");
    scanf("%f",&lon2);

    D=3963*acos(sin(lat1)*sin(lat2)+cos(lat1)*cos(lat2)*cos(lon1-lon2));
    printf("The distance between them in nautical miles is %f",D);
    return 0;
}