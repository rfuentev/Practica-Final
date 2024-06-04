/*
 * emu_tc_programming.cpp
 *
 *  Created on: Jan 13, 2017
 *      Author: user
 */

#include <public/emu_hw_timecode_drv_v1.h>
#include <public/emu_sc_channel_drv_v1.h>
#include <public/emu_gss_v1.h>

#define FT_UAH_EXP_SERV_129_0010

#ifdef FT_UAH_EXP_SERV_129_0010

// Definir los tiempos para cada paso del test
#define FT_129_0010_TIME_step0 4
#define FT_129_0010_TIME_step1 6
#define FT_129_0010_TIME_step2 10
#define FT_129_0010_TIME_step3 25

// Paso 0: Configurar la estructura de HK para reportar las velocidades y la masa cada 5seg
EmuGSS_TCProgram3_31 prog_FT_129_0010_step_0(FT_129_0010_TIME_step0,
    "FT_SOLO_EPD_ICU_SERV_129_0010 step 0, Configurar HK para reportar las velocidades y la masa cada 5seg",
    10, 5);

// Paso 1: Se activa la generación periodica del HK
EmuGSS_TCProgram20_1 prog_FT_129_0010_step_1(FT_129_0010_TIME_step1,
    "FT_SOLO_EPD_ICU_SERV_129_0010 step 1, Activar la generación periódica del HK",
    10);

// Paso 2: Fijar el valor de las velocidades CVx y CVy
EmuGSS_TCProgram129_1 prog_FT_129_0010_step_2(FT_129_0010_TIME_step2,
    "FT_SOLO_EPD_ICU_SERV_129_0010 step 2, Fijar los valores de CVx y CVy",
    0.5, -0.5);

// Paso 3: Comprobar que se haya ejecutado con éxito el TC
EmuGSS_TCProgram129_2 prog_FT_129_0010_step_3(FT_129_0010_TIME_step3,
    "FT_SOLO_EPD_ICU_SERV_129_0020 step 2, Fijar los valores de Kpx y Kpy",
    0.2, 0.1);
//EmuGSS_TCProgram129_1 prog_FT_129_0010_step_3(FT_129_0010_TIME_step3,
    //"FT_SOLO_EPD_ICU_SERV_129_0010 step 3, Comprobar si se ha ejecutado el TC de forma correcta");

#endif

/* #ifdef FT_SOLO_EPD_ICU_SERV_129_0020

// Definir los tiempos para cada paso del test
#define FT_129_0020_TIME_step0 4
#define FT_129_0020_TIME_step1 6
#define FT_129_0020_TIME_step2 10
#define FT_129_0010_TIME_step2 25

// Paso 0: Configurar la estructura de HK para reportar las velocidades y la masa cada 5seg tras cambiar las K
EmuGSS_TCProgram3_31 prog_FT_129_0020_step_0(FT_129_0020_TIME_step0,
    "FT_SOLO_EPD_ICU_SERV_129_0020 step 0, Configurar HK para reportar las velocidades y la masa cada 5seg",
    10, 5);

// Paso 1: Se activa la generación periodica del HK
EmuGSS_TCProgram3_5 prog_FT_129_0010_step_1(FT_129_0010_TIME_step1,
    "FT_SOLO_EPD_ICU_SERV_129_0010 step 1, Activar la generación periódica del HK",
    10);

// Paso 2: Fijar el valor de las constantes Kpx y Kpy
EmuGSS_TCProgram129_2 prog_FT_129_0020_step_2(FT_129_0020_TIME_step2,
    "FT_SOLO_EPD_ICU_SERV_129_0020 step 2, Fijar los valores de Kpx y Kpy",
    0.2, 0.1);

// Paso 3: Comprobar que se haya ejecutado con éxito el TC
EmuGSS_TCProgram129_2 prog_FT_129_0020_step_3(FT_129_0020_TIME_step3,
    "FT_SOLO_EPD_ICU_SERV_129_0020 step 3,  Comprobar si se ha ejecutado el TC de forma correcta");

#endif
*/



