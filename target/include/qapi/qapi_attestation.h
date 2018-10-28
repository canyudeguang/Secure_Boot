/*
* Copyright (c) 2017 Qualcomm Technologies, Inc.
* All Rights Reserved.
*/
// Copyright (c) 2018 Qualcomm Technologies, Inc.
// All rights reserved.
// Redistribution and use in source and binary forms, with or without modification, are permitted (subject to the limitations in the disclaimer below) 
// provided that the following conditions are met:
// Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
// Redistributions in binary form must reproduce the above copyright notice, 
// this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
// Neither the name of Qualcomm Technologies, Inc. nor the names of its contributors may be used to endorse or promote products derived 
// from this software without specific prior written permission.
// NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED BY THIS LICENSE. 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, 
// BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
// IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, 
// OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, 
// EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

/**
 * @file qapi_attestation.h
 *
 * @addtogroup qapi_crypto_attestation
 * @{
 *
 * @brief QAPI to generate an attestation token.
 *
 * @}
 */

#ifndef _QAPI_ATTESTATION_H_
#define _QAPI_ATTESTATION_H_
/** @cond */
#include "stdint.h"
/** @endcond */
#include "qapi/qapi_status.h"

/** @addtogroup qapi_crypto_attestation
@{ */


/** Size of the input buffer to the qapi_Crypto_Attestation_Generate_Token() function. */
#define QAPI_CRYPTO_ATTESTATION_INPUT_BUFFER_SIZE   16
/** Size of the output buffer to the qapi_Crypto_Attestation_Generate_Token() function. */
#define QAPI_CRYPTO_ATTESTATION_OUTPUT_BUFFER_SIZE  16


/**
 * @brief Generates an attestation token.
 *
 * @param[in]  user_Input      Input buffer for which to generate attestation.
 * @param[out] output          Output buffer to which to write the attestation token.
 *
 * @return QAPI_OK on success or an error code on failure.
 */
qapi_Status_t
qapi_Crypto_Attestation_Generate_Token(
    const uint8_t user_Input[QAPI_CRYPTO_ATTESTATION_INPUT_BUFFER_SIZE],
    uint8_t output[QAPI_CRYPTO_ATTESTATION_OUTPUT_BUFFER_SIZE]
    );


/** @} */

#endif /* _QAPI_ATTESTATION_H_ */
