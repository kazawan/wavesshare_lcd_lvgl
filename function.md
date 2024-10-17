# 函数

wifi ntp


```c
WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    printf("Connecting to WiFi..");
  }
  printf("Connected to the WiFi network");
  configTime(60 * 60 * 8, 0, "ntp3.aliyun.com");
  printLocalTime();
  WiFi.disconnect(true);
  WiFi.mode(WIFI_OFF);
```

获取十位 个位

```c

void my_timer(lv_timer_t *timer)
{
  if(!getLocalTime(&timeinfo))
  {
    printf("Failed to obtain time");
    return;
  }
  int t_s = timeinfo.tm_sec / 10 ;
  int t_ss = timeinfo.tm_sec % 10;
  int t_m = timeinfo.tm_min / 10;
  int t_mm = timeinfo.tm_min % 10;
  int t_h = timeinfo.tm_hour / 10;
  int t_hh = timeinfo.tm_hour % 10;


  // lv_label_set_text_fmt(ui_Label1,"%d",t_h);
  // lv_label_set_text_fmt(ui_Label2,"%d",t_hh);
  // lv_label_set_text_fmt(ui_Label3,"%d",t_m);
  // lv_label_set_text_fmt(ui_Label4,"%d",t_mm);
  // lv_label_set_text_fmt(ui_Label5,"%d",t_s);
  // lv_label_set_text_fmt(ui_Label6,"%d",t_ss);


}

```


lvgl timer
```c
    // setup
  timer = lv_timer_create(my_timer, 1000, NULL);
    // loop
  lv_timer_handler();
```


time.h

```c

void printLocalTime()
{
  if (!getLocalTime(&timeinfo))
  {
    printf("Failed to obtain time");
    return;
  }

  printf("Current time: %02d:%02d:%02d\n", timeinfo.tm_hour, timeinfo.tm_min, timeinfo.tm_sec);
}
```