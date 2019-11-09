#include "pxt.h"
using namespace pxt;
namespace tools {

   int circleArea(int radius)
   {
    return 3.14*radius*radius;
   }
}

/*
    "Obloq.Obloq_initHttp|block": "HTTP设置 | IP地址 %ip| 端口号 %port",
    "Obloq.Obloq_httpGet|block": "HTTP(GET) | URL %url| 超时 %time",
    "Obloq.Obloq_httpPost|block": "HTTP(POST) | URL %url| 内容 %content| 超时 %time",
    "Obloq.Obloq_httpPut|block": "HTTP(PUT) | URL %url| 内容 %content| 超时 %time",
    "Obloq.Obloq_httpDelete|block": "HTTP(DELETE) | URL %url| 内容 %content| 超时 %time",
*/