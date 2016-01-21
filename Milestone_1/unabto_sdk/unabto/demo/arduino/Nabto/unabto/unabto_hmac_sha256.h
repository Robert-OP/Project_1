/*
 * Copyright (C) 2008-2013 Nabto - All Rights Reserved.
 */
#ifndef _HMAC_SHA256_H_
#define _HMAC_SHA256_H_

#include <unabto/unabto_env_base.h>
#include <unabto/util/unabto_buffer.h>

#ifdef __cplusplus
extern "C" {
#endif

enum {
    UNABTO_SHA256_BLOCK_LENGTH = 64,
    UNABTO_SHA256_DIGEST_LENGTH = 32
};

/**
 * this one takes an array of keys and buffers
 */
void unabto_hmac_sha256_buffers(const buffer_t keys[], uint8_t keysSize,
                                const buffer_t messages[], uint8_t messagesSize,
                                uint8_t* mac, uint16_t macSize);


#ifdef __cplusplus
} //extern "C"
#endif

#endif
