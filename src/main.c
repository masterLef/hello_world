/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>

int main(void)
{
	printf("Hello World! %s\n", CONFIG_BOARD_TARGET);
	printf("Modified main code %s\n", CONFIG_BOARD_TARGET);
	printf("Modified main code 3rd time %s\n", CONFIG_BOARD_TARGET);

	return 0;
}
