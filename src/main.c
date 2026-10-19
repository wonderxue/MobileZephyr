#include <zephyr/kernel.h>

int main(void)
{
    while (1) {
        printk("Hello from Zephyr on Pico! (via CI simulator)\n");
        k_msleep(500);
    }
    return 0;
}