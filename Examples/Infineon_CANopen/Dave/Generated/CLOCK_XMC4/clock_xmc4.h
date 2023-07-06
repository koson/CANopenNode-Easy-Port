/**
 * @file clock_xmc4.h
 * @date 2021-01-08
 *
 * NOTE:
 * This file is generated by DAVE. Any manual modification done to this file will be lost when the code is regenerated.
 *
 * @cond
 ***********************************************************************************************************************
 * CLOCK_XMC4 v4.0.24 - APP to configure System and Peripheral Clocks.
 *
 * Copyright (c) 2015-2020, Infineon Technologies AG
 * All rights reserved.
 *                                             
 * Redistribution and use in source and binary forms, with or without modification,are permitted provided that the           
 * following conditions are met:   
 *                                                                              
 *   Redistributions of source code must retain the above copyright notice, this list of conditions and the  following   
 *   disclaimer.                        
 * 
 *   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following   
 *   disclaimer in the documentation and/or other materials provided with the distribution.     
 *                         
 *   Neither the name of the copyright holders nor the names of its contributors may be used to endorse or promote 
 *   products derived from this software without specific prior written permission. 
 *                                             
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,  
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE   
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL,  
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR        
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,      
 * WHETHER IN CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT  OF THE   
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.    
 *                                                                              
 * To improve the quality of the software, users are encouraged to share modifications, enhancements or bug fixes       
 * with Infineon Technologies AG (dave@infineon.com).         
 ***********************************************************************************************************************
 *
 * Change History
 * --------------
 * 2015-02-16:
 *     - Initial version for DAVEv4 <BR>
 * 2015-05-08:
 *     - Version check added for required LLDs <BR>
 * 2015-06-20:
 *     - Version check added for XMCLib dependency <BR>
 * 2015-09-22:
 *     - CLOCK_XMC4_STATUS enum and CLOCK_XMC4 data structure are provided. <BR>
 *     - CLOCK_XMC4_Init and CLOCK_XMC4_StepSystemPllFrequency() APIs are provided. <BR>
 * 2015-12-24:
 *     - OSCHP_GetFrequency API is made to available to user only when high precision oscillator is used. <BR>
 * 2016-07-08:
 *     - Fixed incorrect case for an included header.<br>
 * 2021-01-08:
 *     - Modified check for minimum XMCLib version
 *
 * @endcond 
 *
 */

#ifndef CLOCK_XMC4_H
#define CLOCK_XMC4_H

/***********************************************************************************************************************
 * HEADER FILES                                                                                                      
 **********************************************************************************************************************/
#include "xmc_scu.h"
#include "xmc_gpio.h"
#include "DAVE_Common.h"
#include "clock_xmc4_conf.h"

 /**********************************************************************************************************************
 * MACROS                                                                                                            
 **********************************************************************************************************************/
#define CLOCK_XMC4_XMC_LIB_MAJOR_VERSION 2
#define CLOCK_XMC4_XMC_LIB_MINOR_VERSION 0
#define CLOCK_XMC4_XMC_LIB_PATCH_VERSION 0

#if !((XMC_LIB_MAJOR_VERSION > CLOCK_XMC4_XMC_LIB_MAJOR_VERSION) ||\
      ((XMC_LIB_MAJOR_VERSION == CLOCK_XMC4_XMC_LIB_MAJOR_VERSION) && (XMC_LIB_MINOR_VERSION > CLOCK_XMC4_XMC_LIB_MINOR_VERSION)) ||\
      ((XMC_LIB_MAJOR_VERSION == CLOCK_XMC4_XMC_LIB_MAJOR_VERSION) && (XMC_LIB_MINOR_VERSION == CLOCK_XMC4_XMC_LIB_MINOR_VERSION) && (XMC_LIB_PATCH_VERSION >= CLOCK_XMC4_XMC_LIB_PATCH_VERSION)))
#error "CLOCK_XMC4 requires XMC Peripheral Library v2.0.0 or higher"
#endif

/**
 * @ingroup App_publicparam
 * @{
 */
/**
 *  @brief Initialization data structure for CLOCK_XMC4 APP
 */

/**
 * @}
 */

 /**********************************************************************************************************************
 * ENUMS
 **********************************************************************************************************************/
/**
 * @ingroup CLOCK_XMC4_enumerations
 * @{
 */
/*
 * @brief enumeration for CLOCK_XMC4 APP
 */
typedef enum CLOCK_XMC4_STATUS
{
  CLOCK_XMC4_STATUS_SUCCESS = 0U,        /**<APP initialization is success */
  CLOCK_XMC4_STATUS_FAILURE = 1U         /**<APP initialization is failure */
} CLOCK_XMC4_STATUS_t;

/**
 * @}
 */

/**********************************************************************************************************************
* DATA STRUCTURES
**********************************************************************************************************************/
/**
 * @ingroup CLOCK_XMC4_datastructures
 * @{
 */
/**
 * @brief Configuration structure for CLOCK_XMC4 APP
 */
typedef struct CLOCK_XMC4
{
  bool init_status;  /**<APP is initialized or not. */
} CLOCK_XMC4_t;
/**
 * @}
 */

#ifdef __cplusplus
extern "C" {
#endif
/***********************************************************************************************************************
 * API Prototypes
 **********************************************************************************************************************/
/**
 * @ingroup CLOCK_XMC4_apidoc
 * @{
 */
/**
 * @brief Get CLOCK_XMC4 APP version
 * @return DAVE_APP_VERSION_t APP version information (major, minor and patch number)
 *
 * \par<b>Description: </b><br>
 * The function can be used to check application software compatibility with a
 * specific version of the APP.
 *
 * Example Usage:
 *
 * @code
 * #include "DAVE.h"
 *
 * int main(void) 
 * {
 *   DAVE_STATUS_t init_status;
 *   DAVE_APP_VERSION_t version;
 *
 *   // Initialize CLOCK_XMC4 APP:
 *   // SystemCoreClockSetup() is called from SystemInit().
 *   init_status = DAVE_Init();
 *
 *   version = CLOCK_XMC4_GetAppVersion();
 *   if (version.major != 1U) {
 *     // Probably, not the right version.
 *   }
 *
 *   // More code here
 *   while(1) {
 *
 *   }
 *   return (0);
 * }
 * @endcode<BR>
 */
DAVE_APP_VERSION_t CLOCK_XMC4_GetAppVersion(void);

/**
 * @brief Initializes a CLOCK_XMC4 APP instance
 * @param handle address of CLOCK_XMC4 APP handler
 * @return
 *            CLOCK_XMC4_STATUS_SUCCESS             : if initialization is successful\n
 *            CLOCK_XMC4_STATUS_FAILURE             : if initialization is failed
 *
 * \par<b>Description:</b><br>
 * CLOCK_XMC4_Init API is called during initialization of DAVE APPS. This API Initializes NMI TRAP Configuration.
 *
 * \par<b>Example Usage:</b><br>
 *
 * @code
 * #include "DAVE.h"
 *
 * int main(void)
 * {
 *   DAVE_STATUS_t status;
 *
 *   status = DAVE_Init();  //  CLOCK_XMC4_Init API is called during initialization of DAVE APPS
 *   if(DAVE_STATUS_SUCCESS == status)
 *   {
 *    // user code
 *
 *     while(1)
 *     {
 *
 *     }
 *   }
 *   return (1);
 * }
 *
 * @endcode<BR>
 */
CLOCK_XMC4_STATUS_t CLOCK_XMC4_Init(CLOCK_XMC4_t *handle);

#ifdef CLOCK_XMC4_OSCHP_ENABLED
/**
 * @brief This is a non-weak function, which retrieves high precision external oscillator frequency.<br>
 * <b>Note: This function is used by xmc4_scu LLD for internal operations. Therefore the user do not required to call
 * this API explicitly.</b>
 *
 * @return uint32_t Range: 4 to 25 in External Crystal Mode,  4 to 40 in External External Direct Input Mode.
 *
 * \par<b>Description:</b><br>
 * This function to retrieves the external high precision oscillator frequency value, derived from either "External
 * Crystal Mode" or "External Direct Input Mode"
 * <BR>
 */
uint32_t OSCHP_GetFrequency(void);
#endif

/**
 * @brief API for ramping down the system PLL clock frequency
 * @param kdiv PLL output divider K2DIV. Range: 1 to 128. Represents (K2DIV+1).
 * @return none
 *
 * \par<b>Description: </b><br>
 * The function can be used for ramping down the system PLL clock frequency.
 *
 * Example Usage:
 *
 * @code
 * #include "DAVE.h"
 *
 * int main(void)
 * {
 *   DAVE_STATUS_t init_status;
 *   uint32_t kdiv = 10U;  // (K2DIV+1) value for scaling down the system PLL clock frequency
 *   // Initialize CLOCK_XMC4 APP:
 *   // SystemCoreClockSetup() is called from SystemInit().
 *   init_status = DAVE_Init();
 *  if(DAVE_STATUS_SUCCESS == init_status)
 *  {
 *    // More code here
 *
 *
 *    // User decided to reduce the system power consumption by scaling down the system PLL clock frequency
 *    CLOCK_XMC4_StepSystemPllFrequency(kdiv); // fPLL frequency is scaling down by K2DIV factor.
 *
 *
 *    // More code here
 *    while(1) {
 *
 *    }
 *  }
 *  return (1);
 * }
 * @endcode<BR>
 */
void CLOCK_XMC4_StepSystemPllFrequency(uint32_t kdiv);
/**
 * @}
 */
#ifdef __cplusplus
}
#endif   

/* Include APP extern declaration file */
#include "clock_xmc4_extern.h"

#endif /* End of CLOCK_XMC4_H */
