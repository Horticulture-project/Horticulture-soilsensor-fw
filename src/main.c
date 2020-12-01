/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <device.h>
#include <devicetree.h>
#include <drivers/gpio.h>
#include <drivers/i2c.h>

/* 1000 msec = 1 sec */


/* The devicetree node identifier for the "led0" alias. */

/*
struct i2c_slave_callbacks {
	# callback function being called when write is requested 
	i2c_slave_write_requested_cb_t write_requested;
	# callback function being called when read is requested 
	i2c_slave_read_requested_cb_t read_requested;
	# callback function being called when byte has been received 
	i2c_slave_write_received_cb_t write_received;
	# callback function being called when byte has been sent 
	i2c_slave_read_processed_cb_t read_processed;
	# callback function being called when stop occurs on the bus 
	i2c_slave_stop_cb_t stop;
};
*/
void	i2c_write_requested(){
	printk("I2C: Write requested\n");
}
void	i2c_read_requested(){
	printk("I2C: Read requested\n");
}
void	i2c_write_received(){
	printk("I2C: write_received\n");
}
void	i2c_read_processed(){
	printk("I2C: read_processed\n");
}
void	i2c_read_processed(){
	printk("I2C: stop\n");
}
struct i2c_slave_config {
	# Private, do not modify 
	sys_snode_t node;
	# Flags for the slave device defined by I2C_SLAVE_FLAGS_* constants 
	uint8_t flags;
	# Address for this slave device 
	uint16_t address;
	# Callback functions 
	const struct i2c_slave_callbacks *callbacks;
};
*/


/* A build error here means your board isn't set up to blink an LED. */


#define I2C_DEV "I2C_0"


void main(void)
{
const struct device *i2c_dev;
	i2c_dev = device_get_binding(I2C_DEV);
	if (!i2c_dev) {
		printk("I2C: Device driver not found.\n");
		return;
	}
	i2c_slave_register(i2c_dev, struct i2c_slave_config *cfg)

printk("hello");

}
