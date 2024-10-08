#include<stdio.h>
#include<stdbool.h>


int main(){
    int tourDay = 4;
    if(tourDay == 2){
       bool isBoatAvailable = true;
       if(isBoatAvailable){
        printf("Going to Tanguar Haur\n");
       }
       else{
        printf("Going to Srimongol\n");
       }

    }
    else if (tourDay == 4)
    {
      bool isShipAvailable = true;
      if(isShipAvailable){
        printf("Going to Saint martin\n");
      }
      else{
        printf("Going to Cox's bazer\n");
      }
    }
    
}