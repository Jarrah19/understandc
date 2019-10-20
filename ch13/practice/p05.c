#include <stdio.h>
#include <time.h>

int main(void) {
    
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);
    FILE *fp;
    char emotion[100], last[200];
    
    if ((fp = fopen("data_file", "r")) != NULL) {
        fscanf(fp,"%s", last);
        printf("%s\n", last);
        fclose(fp);
    }
    
    if ((fp = fopen("data_file", "w")) == NULL) {
        printf("文件运行异常\n");
    }
    
    else {
        printf("请输入您的心情：");
        scanf("%s", emotion);
        fprintf(fp, "上一次运行是在%d年%d月%d日%d时%d分%d秒，心情%s",
                timer->tm_year + 1900,
                timer->tm_mon + 1,
                timer->tm_mday,
                timer->tm_hour,
                timer->tm_min,
                timer->tm_sec,
                emotion
                );
        fclose (fp);
        
    }
    
    return 0;
}
