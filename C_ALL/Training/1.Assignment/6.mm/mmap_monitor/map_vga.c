#include <stdio.h>

#define BASE_SOC pa_to_va(0xA0002000)

struct soc_reg{
	unsigned int status;
	unsigned int tx;
	unsigned int rx;
	unsigned dma_des;
};

struct soc_reg *dev_reg;

int drv_func()
{
	unsigned int buf = 0x9608;

	dev_reg = (struct soc_reg *) BASE_SOC;
	
	if(dev_reg->status & 0x0040)
		dev_reg->tx = buf;

	return 0;
}
