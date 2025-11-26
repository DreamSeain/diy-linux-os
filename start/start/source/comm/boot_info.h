#ifndef BOOT_INFO_H
#define BOOT_INFO_H
#include "types.h"
#define BOOT_RAM_REGION_MAX    10
typedef struct _boot_info_t{
    struct{
        uint32_t start;
        uint32_t size;      
    }ram_region_cfg[BOOT_RAM_REGION_MAX];//描述内存区域信息的结构体

    int ram_region_count;//内存区域信息中有效数据的个数
}boot_info_t;


#endif