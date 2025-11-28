#ifndef LOADER_H
#define LOADER_H
#include "comm/boot_info.h"
#include "comm/types.h" 
#include "comm/cpu_instr.h"
void protect_mode_entry(void);
typedef struct SMAP_entry{
    uint32_t BaseL;//基地址低位
    uint32_t BaseH;
    uint32_t LengthL;//地址长度低位,地址长度有64位
    uint32_t LengthH;
    uint32_t Type; //当值为1时，表明我们可用的RAM空间
    uint32_t ACPI;//当bit0=1时，该成员应该被忽略
}__attribute__((packed))SMAP_entry_t;


#endif