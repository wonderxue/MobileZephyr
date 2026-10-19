# Zephyr Pico Simulator 示例项目

基于 [Zephyr RTOS](https://zephyrproject.org/) 的应用，支持构建 Raspberry Pi Pico 固件以及在 `native_sim` 模拟器上运行。

## 模拟器输出

以下为 GitHub Actions 自动生成的 `native_sim` 运行日志：

<!-- SIM_OUTPUT_START -->
```
$ timeout 3s ./build-sim/zephyr/zephyr.exe
*** Booting Zephyr OS build 03b1ebca3343 ***
Hello from Zephyr on Pico! (via CI simulator)
[Task] Hello Zephyr! Tick: 0
[Task] Hello Zephyr! Tick: 1
[Task] Hello Zephyr! Tick: 2
Hello from Zephyr on Pico! (via CI simulator)
[Task] Hello Zephyr! Tick: 3
[Task] Hello Zephyr! Tick: 4
Hello from Zephyr on Pico! (via CI simulator)
[Task] Hello Zephyr! Tick: 5
[Task] Hello Zephyr! Tick: 6
[Task] Hello Zephyr! Tick: 7
Hello from Zephyr on Pico! (via CI simulator)
[Task] Hello Zephyr! Tick: 8
[Task] Hello Zephyr! Tick: 9
Hello from Zephyr on Pico! (via CI simulator)
[Task] Hello Zephyr! Tick: 10
[Task] Hello Zephyr! Tick: 11
[Task] Hello Zephyr! Tick: 12
Hello from Zephyr on Pico! (via CI simulator)
[Task] Hello Zephyr! Tick: 13

Stopped at 2.870s
```
<!-- SIM_OUTPUT_END -->

## 本地构建指令

### 1. 构建 Pico 固件
```bash
west build -b rpi_pico . --build-dir build-pico