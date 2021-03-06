/*
 * Copyright 2018, Haiku, Inc. All rights reserved.
 * Distributed under the terms of the MIT license.
 */
#ifndef _FBSD_COMPAT_DEV_LED_LED_H_
#define _FBSD_COMPAT_DEV_LED_LED_H_


typedef	void led_t(void*, int);


struct cdev* led_create_state(led_t* func, void* priv, char const* name, int state)
{
	return NULL;
}


struct cdev* led_create(led_t* func, void* priv, char const* name)
{
	return NULL;
}


void led_destroy(struct cdev* dev)
{
}


int led_set(char const* name, char const* cmd)
{
	return -1;
}


#endif /* _FBSD_COMPAT_DEV_LED_LED_H_ */
