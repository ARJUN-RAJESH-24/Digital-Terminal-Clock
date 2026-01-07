#include<stdio.h>
#include<time.h>
#include<stdbool.h>
#include<unistd.h>//for linux
//#include<Windows.h>

/*

time_t holds number of seconds,the type time_t is used for calculating the difference in time b/w Unix Epoch time i.e, Jan 1st 1970 and now

struct tm is a struct in the time header file

*/


int main(void){
    time_t rawtime = 0; 
    struct tm *pTime = NULL;
    bool isRunning = true; 
    
    printf("D I G I T A L   C L O C K \n");

    while(isRunning){

        time(&rawtime);
        pTime = localtime(&rawtime);

        printf("\r%02d:%02d:%02d",pTime->tm_hour,pTime->tm_min,pTime->tm_sec);
        


        sleep(1);//for linux in sec
        //Sleep(1000);// for windows in milli-sec
    }

    return 0 ;
}