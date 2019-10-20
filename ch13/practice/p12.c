#include <stdio.h>
#include <time.h>

void putdata(void) {
    FILE *fp;
    int n[6];
    
    if ((fp = fopen("data_file", "rb")) != NULL) {
        fread(n, sizeof(int), 6, fp);
        printf("上一次运行是在%d年%d月%d日%d时%d分%d秒\n", n[0] + 1900, n[1] + 1, n[2], n[3], n[4], n[5]);
        
        fclose(fp);
    }
}

void getdata(void) {
    
    FILE *fp;
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);
    int n[6];
    
    for(int i = 5; i >= 0; i--) {
        n[i] = *(&timer->tm_sec + 5 - i);
    }
        
    if ((fp = fopen("data_file", "wb")) == NULL) {
        printf("写入失败\n");
    }    
    else {
        fwrite(n, sizeof(int), 6, fp);
        fclose(fp);
    }
}

int main(void) {
    
    putdata();
    getdata();
    
    return 0;
}
