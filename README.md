# Zephyr Pico Simulator 示例项目

基于 [Zephyr RTOS](https://zephyrproject.org/) 的应用，支持构建 Raspberry Pi Pico 固件以及在 `native_sim` 模拟器上运行。

## 模拟器输出

以下为 GitHub Actions 自动生成的 `native_sim` 运行日志：

<!-- SIM_OUTPUT_START -->
```
$ timeout 3s ./build-sim/zephyr/zephyr.exe
*** Booting Zephyr OS build a915b2f12675 ***
Hello from Zephyr on Pico! (via CI simulator)
Hello from Zephyr on Pico! (via CI simulator)
Hello from Zephyr on Pico! (via CI simulator)
Hello from Zephyr on Pico! (via CI simulator)
Hello from Zephyr on Pico! (via CI simulator)
Hello from Zephyr on Pico! (via CI simulator)

Stopped at 2.710s
```
<!-- SIM_OUTPUT_END -->

## 本地构建指令

### 1. 构建 Pico 固件
```bash
west build -b rpi_pico . --build-dir build-pico