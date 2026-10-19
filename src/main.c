#include <zephyr/kernel.h>

int main(void)
{
    while (1) {
        printk("Hello from Zephyr on Pico!\n");
        k_msleep(500);
    }
    return 0;
}