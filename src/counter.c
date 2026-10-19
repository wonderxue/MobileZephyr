#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

/* 1. 定义线程堆栈大小和优先级 */
#define TASK_STACK_SIZE 1024
#define TASK_PRIORITY   5

/* 2. 编写任务主体逻辑 */
void my_periodic_task(void *arg1, void *arg2, void *arg3)
{
    ARG_UNUSED(arg1);
    ARG_UNUSED(arg2);
    ARG_UNUSED(arg3);

    int count = 0;

    while (1) {
        /* 打印一句话，带上计数方便观察 */
        printk("[Task] Hello Zephyr! Tick: %d\n", count++);
        
        /* 3. 延时 200 毫秒 (等价于 k_sleep(K_MSEC(200))) */
        k_msleep(200);
    }
}

/* 4. 使用宏静态注册任务
 * 参数依次为：线程ID名, 堆栈大小, 入口函数, 参数1, 参数2, 参数3, 优先级, 选项(0为默认), 启动延时(0为立即启动)
 */
K_THREAD_DEFINE(my_task_id, TASK_STACK_SIZE, my_periodic_task,
                NULL, NULL, NULL,
                TASK_PRIORITY, 0, 0);