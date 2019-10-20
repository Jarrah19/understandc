#include <stdio.h>
#include <time.h>

int main(void) {
    
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);
    FILE *fp;
    
    if ((fp = fopen("dt_dat", "w")) == NULL) {
        
        printf("打开文件失败\n");
    }
    
    else {
        fprintf(fp, "%d %d %d %d : %d : %d\n", timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday, timer->tm_hour, timer->tm_min, timer->tm_sec);
        
        fclose(fp);
    }
    
    return 0;
}
