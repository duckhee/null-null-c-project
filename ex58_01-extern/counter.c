#include "counter.h"


int g_nCounter = 0;

void initCounter(int nData){
    g_nCounter = nData;
}
void increaseCounter(){
    g_nCounter++;
}