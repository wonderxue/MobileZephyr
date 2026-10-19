# Zephyr Pico Simulator 示例项目

基于 [Zephyr RTOS](https://zephyrproject.org/) 的应用，支持构建 Raspberry Pi Pico 固件以及在 `native_sim` 模拟器上运行。

## 模拟器输出

以下为 GitHub Actions 自动生成的 `native_sim` 运行日志：

<!-- SIM_OUTPUT_START -->
```
$ timeout 3s ./build-sim/zephyr/zephyr.exe
*** Booting Zephyr OS build f78c4deb4523 ***
Hello from Zephyr on Pico!
[Task] Hello Zephyr! Tick: 100
[A] Task A is running...
[Task] Hello Zephyr! Tick: 202
[A] Task A is waking up Task B.
[B] Task B is running...
[B] Task B is waking up Task A.
[A] Task A is running...
[Task] Hello Zephyr! Tick: 406
Hello from Zephyr on Pico!
[A] Task A is waking up Task B.
[B] Task B is running...
[Task] Hello Zephyr! Tick: 814
[B] Task B is waking up Task A.
[A] Task A is running...
[Task] Hello Zephyr! Tick: 1630
[A] Task A is waking up Task B.
[B] Task B is running...
[B] Task B is waking up Task A.
[A] Task A is running...
Hello from Zephyr on Pico!
[Task] Hello Zephyr! Tick: 3262
[A] Task A is waking up Task B.
[B] Task B is running...
[Task] Hello Zephyr! Tick: 6526
[B] Task B is waking up Task A.
[A] Task A is running...
[Task] Hello Zephyr! Tick: 13054
[A] Task A is waking up Task B.
[B] Task B is running...
Hello from Zephyr on Pico!
[B] Task B is waking up Task A.
[A] Task A is running...
[Task] Hello Zephyr! Tick: 26110
[A] Task A is waking up Task B.
[B] Task B is running...
[Task] Hello Zephyr! Tick: 52222
[B] Task B is waking up Task A.
[A] Task A is running...
Hello from Zephyr on Pico!
[Task] Hello Zephyr! Tick: 104446
[A] Task A is waking up Task B.
[B] Task B is running...
[B] Task B is waking up Task A.
[A] Task A is running...
[Task] Hello Zephyr! Tick: 208894
[A] Task A is waking up Task B.
[B] Task B is running...
[Task] Hello Zephyr! Tick: 417790
Hello from Zephyr on Pico!
[B] Task B is waking up Task A.
[A] Task A is running...
[Task] Hello Zephyr! Tick: 835582
[A] Task A is waking up Task B.
[B] Task B is running...

Stopped at 2.840s
```
<!-- SIM_OUTPUT_END -->

## 本地构建指令

### 1. 构建 Pico 固件
```bash
west build -b rpi_pico . --build-dir build-pico