#include <zephyr/kernel.h>

#define TASK_STACK_SIZE 1024
#define TASK_PRIORITY   5

// 定义两个信号量
K_SEM_DEFINE(sem_a, 1, 1); // 初始给 A 一个信号，让 A 先跑
K_SEM_DEFINE(sem_b, 0, 1); // B 初始没有信号，等待 A 释放

// 任务 A
void task_a(void *arg1, void *arg2, void *arg3) {
    while (1) {
        // 等待信号：如果没信号，任务就在这里休眠
        k_sem_take(&sem_a, K_FOREVER); 
        
        printk("[A] Task A is running...\n");
        k_msleep(1000); // 模拟工作
        
        printk("[A] Task A is waking up Task B.\n");
        k_sem_give(&sem_b); // 唤醒任务 B
    }
}

// 任务 B
void task_b(void *arg1, void *arg2, void *arg3) {
    while (1) {
        // 等待信号：等待 A 叫醒它
        k_sem_take(&sem_b, K_FOREVER);
        
        printk("[B] Task B is running...\n");
        k_msleep(1000); // 模拟工作
        
        printk("[B] Task B is waking up Task A.\n");
        k_sem_give(&sem_a); // 唤醒任务 A
    }
}

// 静态定义两个常驻任务
K_THREAD_DEFINE(tid_a, TASK_STACK_SIZE, task_a, NULL, NULL, NULL, TASK_PRIORITY, 0, 0);
K_THREAD_DEFINE(tid_b, TASK_STACK_SIZE, task_b, NULL, NULL, NULL, TASK_PRIORITY, 0, 0);