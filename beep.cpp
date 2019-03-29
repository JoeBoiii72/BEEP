#include <stdio.h>
#include <windows.h>

#define THRESHOLD_DEFAULT 16800 // personal hearing limit 

int main(int argc, char *argv[])
{
  printf("\n");
  printf("----------------------------------------\n\n");
  printf("       //////// /////  //////  /////////\n");
  printf("      //    // //     //      //     //\n");
  printf("     //    // //     //      //     //\n");
  printf("    //////\\  /////  //////  /////////\n");
  printf("   //    // //     //      //\n");
  printf("  //    // //     //      //\n");
  printf(" //////// /////  //////  //\n");
  printf("\n----Generate frequencies using BEEP-----\n");

  int START_FREQUENCY;
  int INTERVAL;
  int PLAY_LEN;

  printf("\n[*]Starting Frequency: ");
  scanf("%d",&START_FREQUENCY);
  printf("[*]Hz Increase rate: ");
  scanf("%d",&INTERVAL);
  printf("[*]Length of each tone in ms: ");
  scanf("%d",&PLAY_LEN);
  
  printf("\n\nGenerating frequencies from %dHz ...\n",START_FREQUENCY);
  printf("Increasing by %dHz every %dms ...\n\n",INTERVAL,PLAY_LEN);
  
  for(int i = START_FREQUENCY; i <= THRESHOLD_DEFAULT; i=i+INTERVAL)
  {
    Beep(i,PLAY_LEN);
  }

  printf("\n[--EXITING APPLICATION--]\n\n");

  return 0;
}

